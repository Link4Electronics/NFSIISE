cmake_minimum_required(VERSION 3.16)
project(NFSIISE C CXX)

# ==============================================================================
# Options
# ==============================================================================
option(USE_ASM       "x86 32-bit build using hand-tuned assembly (needs yasm)" OFF)
option(OPENGL1X      "Use legacy OpenGL 1.x backend"                        OFF)
option(GLES2         "Use OpenGL ES 2 backend"                               OFF)
option(STACK_REALIGN "Force 16-byte stack alignment on x86-32"               ON)

# ==============================================================================
# Endian detection
# ==============================================================================
if(CMAKE_C_BYTE_ORDER STREQUAL "BIG_ENDIAN")
  add_compile_definitions(HOST_BIG_ENDIAN)
  message(STATUS "Target: big-endian")
elseif(CMAKE_C_BYTE_ORDER STREQUAL "LITTLE_ENDIAN")
  message(STATUS "Target: little-endian")
else()
  include(TestBigEndian)
  test_big_endian(_IS_BE)
  if(_IS_BE)
    add_compile_definitions(HOST_BIG_ENDIAN)
    message(STATUS "Target: big-endian (TestBigEndian)")
  else()
    message(STATUS "Target: little-endian (TestBigEndian)")
  endif()
endif()

# ==============================================================================
# Language standards
# ==============================================================================
set(CMAKE_C_STANDARD          11)
set(CMAKE_C_EXTENSIONS        ON)   # gnu11
set(CMAKE_CXX_STANDARD        14)
set(CMAKE_CXX_EXTENSIONS      OFF)
set(CMAKE_POSITION_INDEPENDENT_CODE OFF)

# Always place the binary inside the game data directory
set(CMAKE_RUNTIME_OUTPUT_DIRECTORY "${CMAKE_SOURCE_DIR}/Need For Speed II SE")

# ==============================================================================
# Shared compile flags
# ==============================================================================
add_compile_options(-Wall -Wextra)
add_compile_options(-Wno-int-to-pointer-cast)
add_compile_options(-Wno-narrowing)
add_compile_options(-Wno-unused-parameter)
add_compile_options(-Wno-unused-variable)
add_compile_options(-Wno-unused-but-set-variable)
add_compile_options(-Wno-sign-compare)
add_compile_options(-Wno-implicit-fallthrough)
add_compile_options(-Wno-address-of-packed-member)

# C-only warning flags (not valid for C++)
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-pointer-to-int-cast")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-incompatible-pointer-types")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-implicit-function-declaration")
set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -Wno-int-conversion")

if(CMAKE_CXX_COMPILER_ID MATCHES "Clang")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -Wno-c++11-narrowing")
endif()

# ==============================================================================
# Backend selection
# ==============================================================================
if(GLES2)
  add_compile_definitions(GLES2)
  set(GL_LIBS GLESv2)
  message(STATUS "OpenGL backend: ES 2")
elseif(OPENGL1X)
  add_compile_definitions(OPENGL1X)
  set(GL_LIBS OpenGL::GL)
  message(STATUS "OpenGL backend: 1.x")
else()
  set(GL_LIBS OpenGL::GL)
  message(STATUS "OpenGL backend: 2.x (default)")
endif()

# ==============================================================================
# Source files
# ==============================================================================
file(GLOB C_SOURCES    src/*.c)

# --- C++ sources (used only in non-ASM mode) --------------------------------
if(USE_ASM)
  set(CPP_SOURCES)
  add_compile_options(-m32 -mno-sse2 -mno-sse -mno-mmx)

  # yasm assembler
  find_program(YASM yasm REQUIRED)
  set(ASM_FLAGS "-f elf32")
  if(CMAKE_BUILD_TYPE STREQUAL "Debug")
    set(ASM_FLAGS "${ASM_FLAGS} -g dwarf2")
  endif()
  add_custom_command(
    OUTPUT ${CMAKE_CURRENT_BINARY_DIR}/NFS2SE.S.o
    COMMAND ${YASM} ${ASM_FLAGS}
            ${CMAKE_SOURCE_DIR}/src/Asm/NFS2SE.asm
            -o ${CMAKE_CURRENT_BINARY_DIR}/NFS2SE.S.o
    DEPENDS ${CMAKE_SOURCE_DIR}/src/Asm/NFS2SE.asm
    COMMENT "Assembling NFS2SE.asm"
  )
  set(ASM_OBJ ${CMAKE_CURRENT_BINARY_DIR}/NFS2SE.S.o)
  set(EXTRA_LINK_FLAGS "-nostartfiles -Wl,-e_start -Wl,-rpath=\\$ORIGIN")

  message(STATUS "Build mode: x86 assembly (yasm)")
else()
  file(GLOB CPP_SOURCES src/Cpp/*.cpp)
  list(REMOVE_ITEM CPP_SOURCES
    ${CMAKE_SOURCE_DIR}/src/Cpp/NFS2SE.cpp
    ${CMAKE_SOURCE_DIR}/src/Cpp/Stubs.cpp
  )
  add_compile_definitions(NFS_CPP)
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-rtti -fno-exceptions")
  set(CMAKE_C_FLAGS "${CMAKE_C_FLAGS} -fno-strict-aliasing")
  set(CMAKE_CXX_FLAGS "${CMAKE_CXX_FLAGS} -fno-strict-aliasing")
  set(ASM_OBJ)
  set(EXTRA_LINK_FLAGS "-Wl,-rpath=\\$ORIGIN")

  if(STACK_REALIGN)
    add_compile_definitions(STACK_REALIGN)
  endif()

  message(STATUS "Build mode: C++ native")
endif()

# ==============================================================================
# Windows (MinGW) resource
# ==============================================================================
if(MINGW OR CMAKE_SYSTEM_NAME STREQUAL "Windows")
  set(WIN_RC src/Windows/nfs2se.rc)
  set(WIN_LIBS ws2_32 winmm)
else()
  set(WIN_RC)
  set(WIN_LIBS)
endif()

# ==============================================================================
# Executable target
# ==============================================================================
add_executable(nfs2se
  ${C_SOURCES}
  ${CPP_SOURCES}
  ${WIN_RC}
  ${ASM_OBJ}
)

target_include_directories(nfs2se PRIVATE src)

target_link_options(nfs2se PRIVATE
  -no-pie
  ${EXTRA_LINK_FLAGS}
)

# Dependencies
if(MINGW OR CMAKE_SYSTEM_NAME STREQUAL "Windows")
  find_package(SDL3 REQUIRED)
  target_link_libraries(nfs2se PRIVATE
    SDL3::SDL3
    ${GL_LIBS}
    ${WIN_LIBS}
  )
elseif(APPLE)
  find_package(SDL3 REQUIRED)
  target_link_libraries(nfs2se PRIVATE
    SDL3::SDL3
    "-framework OpenGL"
    ${WIN_LIBS}
  )
else()
  find_package(SDL3 QUIET)
  if(NOT SDL3_FOUND)
    find_package(PkgConfig REQUIRED)
    pkg_check_modules(SDL3 REQUIRED IMPORTED_TARGET sdl3)
    set(SDL3_LIB PkgConfig::SDL3)
  else()
    set(SDL3_LIB SDL3::SDL3)
  endif()
  find_package(OpenGL REQUIRED)
  target_link_libraries(nfs2se PRIVATE ${SDL3_LIB} ${GL_LIBS} m ${WIN_LIBS})
endif()

# ==============================================================================
# Install
# ==============================================================================
install(TARGETS nfs2se DESTINATION "Need For Speed II SE")

# ==============================================================================
# Print summary
# ==============================================================================
message(STATUS "----------------------------------------")
message(STATUS " NFSIISE  –  Need for Speed II SE")
get_target_property(_srcs nfs2se SOURCES)
message(STATUS " C sources:    ${C_SOURCES}")
message(STATUS " Use ASM:      ${USE_ASM}")
message(STATUS " Stack realign: ${STACK_REALIGN}")
if(MINGW OR CMAKE_SYSTEM_NAME STREQUAL "Windows")
  message(STATUS " Platform:     Windows")
elseif(APPLE)
  message(STATUS " Platform:     macOS")
else()
  message(STATUS " Platform:     Linux/POSIX")
endif()
message(STATUS "----------------------------------------")
