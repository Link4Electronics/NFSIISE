NFSIISE
=======

Cross-platform wrapper for the Need For Speed™ II SE game with 3D acceleration and TCP protocol!

**Fork features:**
- **Big-endian** support on Linux (still WIP)
- **x86_64** support for Linux
- **ARM64** (AArch64) support for Linux

## OpenGL

* By default OpenGL 2 is used (except Android - it always uses GLES2).
* To use OpenGL 1, pass `-DOPENGL1X=ON` to CMake.
* To use OpenGL ES 2, pass `-DGLES2=ON` to CMake.

![Screenshot](https://raw.githubusercontent.com/zaps166/GitHubCommonContents/master/Screenshots/NFSIISE.png)

## Build with CMake

### Requirements

* C++14 compiler (Clang or GCC)
* SDL2 development libraries
* OpenGL development libraries
* (optional) Yasm assembler, for x86 32-bit assembly build (use -DUSE_ASM=ON to compile)

### C++ native build (x86_64, ARM64, PowerPC, etc.) — default

Release build:

```sh
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Release
cmake --build .
```

Debug build:

```sh
mkdir build && cd build
cmake .. -DCMAKE_BUILD_TYPE=Debug
cmake --build .
```

The binary will be placed in the `Need For Speed II SE` directory.

#### OpenGL 1.x backend

```sh
cmake .. -DOPENGL1X=ON -DCMAKE_BUILD_TYPE=Release
```

#### OpenGL ES 2 backend

```sh
cmake .. -DGLES2=ON -DCMAKE_BUILD_TYPE=Release
```

### x86 32-bit assembly build

For 32-bit x86 systems, the hand-tuned assembly can be used instead of the C++ translation:

```sh
mkdir build && cd build
cmake .. -DUSE_ASM=ON -DCMAKE_BUILD_TYPE=Release
cmake --build .
```

On Debian/Ubuntu, install 32-bit dependencies first:

```sh
dpkg --add-architecture i386
apt-get update
apt-get install libsdl2-dev:i386 gcc-multilib yasm
```

### Windows cross-compilation (MinGW)

Use a MinGW toolchain file with CMake, for example:

```sh
cmake .. -DCMAKE_TOOLCHAIN_FILE=/path/to/mingw-toolchain.cmake -DCMAKE_BUILD_TYPE=Release
```

## Run

* Copy `fedata` and `gamedata` directories from the Need For Speed™ II SE original CD-ROM into `Need For Speed II SE` directory.
* This game **needs** data from Need For Speed 2 **Special Edition**, otherwise you'll see a 'MOVIE FILE NOT FOUND' message!
* You can delete unnecessary files, e.g. `fedata/pc/text/text.*`, because TCP version uses new files in root directory.
* All files and directories copied from CD-ROM **must** have *small letters* on Unix-like systems!!!
  * Please use the `Need For Speed II SE/convert_to_lowercase` script if you have UPPERCASE names.
* If you want to change the language, edit `install.win` file (with text editor which doesn't modify last line or line endings!) and change the first line. Leave `4nn` as is and modify only language name. Possible languages are:
  * english,
  * french,
  * german,
  * italian,
  * spanish,
  * swedish.
* Run the game.
* The game settings files are located in `~/.nfs2se` (`%AppData%\.nfs2se` on Windows). At the first run, the `nfs2se.conf.template` will be copied there. You can modify the file if you want to configure the game. On Windows, you can use `open_config.bat` to open the config file in notepad.
* On Android devices, copy `gamedata`, `fedata`, `install.win`, `text.*`, `nfs2se.conf` (rename `nfs2se.conf.template` to `nfs2se.conf`) into `/sdcard/NFSIISE` or `/storage/emulated/0/NFSIISE` (create `NFSIISE` directory first).
* For Batocera Linux devices (an open-source and completely free retro-gaming distribution), tested with version 39:
  * take Windows version (e.g `nfs2se-win32-v1.4.0.zip` under Releases), unpack it,
  * copy original `fedata` and `gamedata` directories into `Need For Speed II SE` directory,
  * in `Need For Speed II SE` directory create new file `autorun.cmd` with content `CMD=nfs2se.exe`,
  * rename directory `Need For Speed II SE` to `Need For Speed II SE.pc`,
  * place directory `Need For Speed II SE.pc` into your Batocera Linux directory `/userdata/roms/windows/`,
  * to update the game list in Batocera using your controller, press `START` and go to `GAME SETTINGS` → `UPDATE GAMELISTS`, the game is listed under `Windows` section and will be successfully emulated via Wine

## Android

* Install SDK and NDK for chosen SDL2 version,
* Set environment variables: `ANDROID_HOME` and `ANDROID_NDK_HOME`,
* Download SDL2 source code and unpack it,
* Create a symlink to the unpacked `SDL2-*` directory at `src/Android/app/jni/SDL`:
  ```sh
  ln -s /path/to/SDL2-* src/Android/app/jni/SDL
  ```
* Build with Gradle from `src/Android/`:
  ```sh
  cd src/Android
  ./gradlew build
  ```

## What works

* Game controllers (reconnected game controllers should be the same),
* Force Feedback (tested on Linux),
* TCP and UDP connection,
* Serial port connection,
* Brightness,
* Sound.

## What does not work

* Modem connection (it will never work again, this feature has been removed from assembly code),

## Function keys in-game

* F1  - toggle rain
* F2  - car detail
* F3  - view distance
* F4  - toggle horizon
* F5  - toggle HUD (player 1)
* F6  - toggle HUD (player 2)
* F7  - toggle mirror
* F8  - toggle music
* F9  - toggle sound effects
* F10 - brightness
* F11 - reset car (player 1)
* F12 - reset car (player 2)

## Additional information

* Cockpit view and night driving are unavailable (original 3D-accelerated version doesn't have this), see [NFSIISEN](https://github.com/zaps166/NFSIISEN) repository.
* OpenGL 1.x only: if the game crashes it might not restore the gamma properly. In this case run: `xgamma -gamma 1.0`.
* There is Docker based build environment available on [GitHub](https://github.com/thomas-mc-work/nfsiise-build-env).

## License

This project is licensed under the **MIT License** – see the [LICENSE](LICENSE) file for details.

This project is **not affiliated with or endorsed by Electronic Arts Inc.** "Need for Speed" is a registered trademark of Electronic Arts Inc. All game assets (data files, graphics, sounds) remain the property of their respective owners. The wrapper source code is the only portion covered by the MIT license.
