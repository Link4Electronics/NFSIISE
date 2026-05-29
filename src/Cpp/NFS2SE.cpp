// =====================================================================
// NFS2SE.cpp - Unity build file
// =====================================================================
// This file aggregates all split source files in dependency order.
// The original monolithic NFS2SE_all.cpp is kept for reference.
// =====================================================================
// Split structure:
//   config.h         - Includes, macros, byte-order detection
//   FPU.h            - FPU struct
//   CPU.h            - CPU struct
//   Application.h    - Application struct
//   Game.h           - Game class declaration
//   BSS.h            - BSS layout struct + address macros
//   DATA.h           - DATA layout struct + address macros + extern wrappers
//   Stubs.cpp        - Static stub wrappers
//   Memory.cpp       - BSS/DATA variable definitions + DATA initializer
//   Methods_01-15    - Game:: method implementations
//   Entry.cpp        - Entry point, DInput wrappers, globals
// =====================================================================

#include "config.h"
#include "FPU.h"
#include "CPU.h"
#include "Application.h"
#include "Game.h"
#include "BSS.h"
#include "DATA.h"
#include "Stubs.cpp"
#include "Memory.cpp"
#include "Methods_01.cpp"
#include "Methods_02.cpp"
#include "Methods_03.cpp"
#include "Methods_04.cpp"
#include "Methods_05.cpp"
#include "Methods_06.cpp"
#include "Methods_07.cpp"
#include "Methods_08.cpp"
#include "Methods_09.cpp"
#include "Methods_10.cpp"
#include "Methods_11.cpp"
#include "Methods_12.cpp"
#include "Methods_13.cpp"
#include "Methods_14.cpp"
#include "Methods_15.cpp"
#include "Entry.cpp"
