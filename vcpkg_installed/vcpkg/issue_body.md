Package: sfml[audio,core,graphics,network,window]:x64-linux@3.0.2

**Host Environment**

- Host: x64-linux
- Compiler: GNU 13.3.0
- CMake Version: 3.30.1
-    vcpkg-tool version: 2025-10-16-71538f2694db93da4668782d094768ba74c45991
    vcpkg-scripts version: 365f6444ab 2025-11-08 (2 days ago)

**To Reproduce**

`vcpkg install `

**Failure logs**

```
Downloading https://github.com/SFML/SFML/archive/3.0.2.tar.gz -> SFML-SFML-3.0.2.tar.gz
Successfully downloaded SFML-SFML-3.0.2.tar.gz
-- Extracting source /home/karl/vcpkg/downloads/SFML-SFML-3.0.2.tar.gz
-- Applying patch 01-fix-dependency-resolve.patch
-- Applying patch 03-fix-android-install-path.patch
-- Using source at /home/karl/vcpkg/buildtrees/sfml/src/3.0.2-1655203d87.clean
-- SFML currently requires the following libraries from the system package manager:
    libudev
    libx11
    libxi
    libxrandr
    libxcursor
    opengl

These can be installed on Ubuntu systems via apt-get install libx11-dev libxi-dev libxrandr-dev libxcursor-dev libxi-dev libudev-dev libgl1-mesa-dev
-- Configuring x64-linux
CMake Error at scripts/cmake/vcpkg_execute_required_process.cmake:127 (message):
    Command failed: /home/karl/vcpkg/downloads/tools/ninja/1.13.1-linux/ninja -v
    Working Directory: /home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/vcpkg-parallel-configure
    Error code: 1
    See logs for more information:
      /home/karl/vcpkg/buildtrees/sfml/config-x64-linux-dbg-CMakeCache.txt.log
      /home/karl/vcpkg/buildtrees/sfml/config-x64-linux-rel-CMakeCache.txt.log
      /home/karl/vcpkg/buildtrees/sfml/config-x64-linux-dbg-CMakeConfigureLog.yaml.log
      /home/karl/vcpkg/buildtrees/sfml/config-x64-linux-rel-CMakeConfigureLog.yaml.log
      /home/karl/vcpkg/buildtrees/sfml/config-x64-linux-out.log

Call Stack (most recent call first):
  /home/karl/projects/gameOfLife/vcpkg_installed/x64-linux/share/vcpkg-cmake/vcpkg_cmake_configure.cmake:269 (vcpkg_execute_required_process)
  /home/karl/.cache/vcpkg/registries/git-trees/ffed70e09662f9b535761716ea9b9623a461b9df/portfile.cmake:24 (vcpkg_cmake_configure)
  scripts/ports.cmake:206 (include)



```

<details><summary>/home/karl/vcpkg/buildtrees/sfml/config-x64-linux-out.log</summary>

```
[1/2] "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" -E chdir ".." "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" "/home/karl/vcpkg/buildtrees/sfml/src/3.0.2-1655203d87.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Release" "-DCMAKE_INSTALL_PREFIX=/home/karl/vcpkg/packages/sfml_x64-linux" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DSFML_BUILD_FRAMEWORKS=OFF" "-DSFML_USE_SYSTEM_DEPS=ON" "-DSFML_MISC_INSTALL_PREFIX=share/sfml" "-DSFML_GENERATE_PDB=OFF" "-DSFML_BUILD_NETWORK=ON" "-DSFML_BUILD_GRAPHICS=ON" "-DSFML_BUILD_WINDOW=ON" "-DSFML_BUILD_AUDIO=ON" "-DCMAKE_MAKE_PROGRAM=/home/karl/vcpkg/downloads/tools/ninja/1.13.1-linux/ninja" "-DCMAKE_SYSTEM_NAME=Linux" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=/home/karl/vcpkg/scripts/toolchains/linux.cmake" "-DVCPKG_TARGET_TRIPLET=x64-linux" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=external" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=/home/karl/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=/home/karl/vcpkg" "-D_VCPKG_INSTALLED_DIR=/home/karl/projects/gameOfLife/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF"
FAILED: [code=1] ../CMakeCache.txt 
"/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" -E chdir ".." "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" "/home/karl/vcpkg/buildtrees/sfml/src/3.0.2-1655203d87.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Release" "-DCMAKE_INSTALL_PREFIX=/home/karl/vcpkg/packages/sfml_x64-linux" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DSFML_BUILD_FRAMEWORKS=OFF" "-DSFML_USE_SYSTEM_DEPS=ON" "-DSFML_MISC_INSTALL_PREFIX=share/sfml" "-DSFML_GENERATE_PDB=OFF" "-DSFML_BUILD_NETWORK=ON" "-DSFML_BUILD_GRAPHICS=ON" "-DSFML_BUILD_WINDOW=ON" "-DSFML_BUILD_AUDIO=ON" "-DCMAKE_MAKE_PROGRAM=/home/karl/vcpkg/downloads/tools/ninja/1.13.1-linux/ninja" "-DCMAKE_SYSTEM_NAME=Linux" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=/home/karl/vcpkg/scripts/toolchains/linux.cmake" "-DVCPKG_TARGET_TRIPLET=x64-linux" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=external" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=/home/karl/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=/home/karl/vcpkg" "-D_VCPKG_INSTALLED_DIR=/home/karl/projects/gameOfLife/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF"
-- The C compiler identification is GNU 13.3.0
-- The CXX compiler identification is GNU 13.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
CMake Error at /home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindPackageHandleStandardArgs.cmake:233 (message):
  Could NOT find X11 (missing: X11_X11_INCLUDE_PATH X11_X11_LIB Xrandr
  Xcursor Xi)
Call Stack (most recent call first):
  /home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindPackageHandleStandardArgs.cmake:603 (_FPHSA_FAILURE_MESSAGE)
  /home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindX11.cmake:676 (find_package_handle_standard_args)
  /home/karl/vcpkg/scripts/buildsystems/vcpkg.cmake:904 (_find_package)
  src/SFML/Window/CMakeLists.txt:279 (find_package)


-- Configuring incomplete, errors occurred!
[2/2] "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" -E chdir "../../x64-linux-dbg" "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" "/home/karl/vcpkg/buildtrees/sfml/src/3.0.2-1655203d87.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Debug" "-DCMAKE_INSTALL_PREFIX=/home/karl/vcpkg/packages/sfml_x64-linux/debug" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DSFML_BUILD_FRAMEWORKS=OFF" "-DSFML_USE_SYSTEM_DEPS=ON" "-DSFML_MISC_INSTALL_PREFIX=share/sfml" "-DSFML_GENERATE_PDB=OFF" "-DSFML_BUILD_NETWORK=ON" "-DSFML_BUILD_GRAPHICS=ON" "-DSFML_BUILD_WINDOW=ON" "-DSFML_BUILD_AUDIO=ON" "-DCMAKE_MAKE_PROGRAM=/home/karl/vcpkg/downloads/tools/ninja/1.13.1-linux/ninja" "-DCMAKE_SYSTEM_NAME=Linux" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=/home/karl/vcpkg/scripts/toolchains/linux.cmake" "-DVCPKG_TARGET_TRIPLET=x64-linux" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=external" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=/home/karl/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=/home/karl/vcpkg" "-D_VCPKG_INSTALLED_DIR=/home/karl/projects/gameOfLife/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF"
FAILED: [code=1] ../../x64-linux-dbg/CMakeCache.txt 
"/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" -E chdir "../../x64-linux-dbg" "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake" "/home/karl/vcpkg/buildtrees/sfml/src/3.0.2-1655203d87.clean" "-G" "Ninja" "-DCMAKE_BUILD_TYPE=Debug" "-DCMAKE_INSTALL_PREFIX=/home/karl/vcpkg/packages/sfml_x64-linux/debug" "-DFETCHCONTENT_FULLY_DISCONNECTED=ON" "-DSFML_BUILD_FRAMEWORKS=OFF" "-DSFML_USE_SYSTEM_DEPS=ON" "-DSFML_MISC_INSTALL_PREFIX=share/sfml" "-DSFML_GENERATE_PDB=OFF" "-DSFML_BUILD_NETWORK=ON" "-DSFML_BUILD_GRAPHICS=ON" "-DSFML_BUILD_WINDOW=ON" "-DSFML_BUILD_AUDIO=ON" "-DCMAKE_MAKE_PROGRAM=/home/karl/vcpkg/downloads/tools/ninja/1.13.1-linux/ninja" "-DCMAKE_SYSTEM_NAME=Linux" "-DBUILD_SHARED_LIBS=OFF" "-DVCPKG_CHAINLOAD_TOOLCHAIN_FILE=/home/karl/vcpkg/scripts/toolchains/linux.cmake" "-DVCPKG_TARGET_TRIPLET=x64-linux" "-DVCPKG_SET_CHARSET_FLAG=ON" "-DVCPKG_PLATFORM_TOOLSET=external" "-DCMAKE_EXPORT_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY=ON" "-DCMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY=ON" "-DCMAKE_INSTALL_SYSTEM_RUNTIME_LIBS_SKIP=TRUE" "-DCMAKE_VERBOSE_MAKEFILE=ON" "-DVCPKG_APPLOCAL_DEPS=OFF" "-DCMAKE_TOOLCHAIN_FILE=/home/karl/vcpkg/scripts/buildsystems/vcpkg.cmake" "-DCMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION=ON" "-DVCPKG_CXX_FLAGS=" "-DVCPKG_CXX_FLAGS_RELEASE=" "-DVCPKG_CXX_FLAGS_DEBUG=" "-DVCPKG_C_FLAGS=" "-DVCPKG_C_FLAGS_RELEASE=" "-DVCPKG_C_FLAGS_DEBUG=" "-DVCPKG_CRT_LINKAGE=dynamic" "-DVCPKG_LINKER_FLAGS=" "-DVCPKG_LINKER_FLAGS_RELEASE=" "-DVCPKG_LINKER_FLAGS_DEBUG=" "-DVCPKG_TARGET_ARCHITECTURE=x64" "-DCMAKE_INSTALL_LIBDIR:STRING=lib" "-DCMAKE_INSTALL_BINDIR:STRING=bin" "-D_VCPKG_ROOT_DIR=/home/karl/vcpkg" "-D_VCPKG_INSTALLED_DIR=/home/karl/projects/gameOfLife/vcpkg_installed" "-DVCPKG_MANIFEST_INSTALL=OFF"
-- The C compiler identification is GNU 13.3.0
-- The CXX compiler identification is GNU 13.3.0
-- Detecting C compiler ABI info
-- Detecting C compiler ABI info - done
-- Check for working C compiler: /usr/bin/cc - skipped
-- Detecting C compile features
-- Detecting C compile features - done
-- Detecting CXX compiler ABI info
-- Detecting CXX compiler ABI info - done
-- Check for working CXX compiler: /usr/bin/c++ - skipped
-- Detecting CXX compile features
-- Detecting CXX compile features - done
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD
-- Performing Test CMAKE_HAVE_LIBC_PTHREAD - Success
-- Found Threads: TRUE
CMake Error at /home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindPackageHandleStandardArgs.cmake:233 (message):
  Could NOT find X11 (missing: X11_X11_INCLUDE_PATH X11_X11_LIB Xrandr
  Xcursor Xi)
Call Stack (most recent call first):
  /home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindPackageHandleStandardArgs.cmake:603 (_FPHSA_FAILURE_MESSAGE)
  /home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindX11.cmake:676 (find_package_handle_standard_args)
  /home/karl/vcpkg/scripts/buildsystems/vcpkg.cmake:904 (_find_package)
  src/SFML/Window/CMakeLists.txt:279 (find_package)


-- Configuring incomplete, errors occurred!
ninja: build stopped: subcommand failed.
```
</details>

<details><summary>/home/karl/vcpkg/buildtrees/sfml/config-x64-linux-rel-CMakeCache.txt.log</summary>

```
# This is the CMakeCache file.
# For build in directory: /home/karl/vcpkg/buildtrees/sfml/x64-linux-rel
# It was generated by CMake: /home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake
# You can edit this file to change values found and used by cmake.
# If you do not want to change any of the values, simply exit the editor.
# If you do want to change a value, simply edit, save, and exit the editor.
# The syntax for the file is as follows:
# KEY:TYPE=VALUE
# KEY is the name of a variable in the cache.
# TYPE is a hint to GUIs for the type of VALUE, DO NOT EDIT TYPE!.
# VALUE is the current value for the KEY.

########################
# EXTERNAL cache entries
########################

//No help, variable specified on the command line.
BUILD_SHARED_LIBS:UNINITIALIZED=OFF

//Path to a program.
CMAKE_ADDR2LINE:FILEPATH=/usr/bin/addr2line

//Path to a program.
CMAKE_AR:FILEPATH=/usr/bin/ar

//Choose the type of build (Debug or Release)
CMAKE_BUILD_TYPE:STRING=Release

CMAKE_CROSSCOMPILING:BOOL=OFF

//CXX compiler
CMAKE_CXX_COMPILER:FILEPATH=/usr/bin/c++

//A wrapper around 'ar' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_CXX_COMPILER_AR:FILEPATH=/usr/bin/gcc-ar-13

//A wrapper around 'ranlib' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_CXX_COMPILER_RANLIB:FILEPATH=/usr/bin/gcc-ranlib-13

//Flags used by the CXX compiler during all build types.
CMAKE_CXX_FLAGS:STRING=-fPIC

//Flags used by the CXX compiler during DEBUG builds.
CMAKE_CXX_FLAGS_DEBUG:STRING=-g

//Flags used by the CXX compiler during MINSIZEREL builds.
CMAKE_CXX_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG

//Flags used by the CXX compiler during RELEASE builds.
CMAKE_CXX_FLAGS_RELEASE:STRING=-O3 -DNDEBUG

//Flags used by the CXX compiler during RELWITHDEBINFO builds.
CMAKE_CXX_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG

//C compiler
CMAKE_C_COMPILER:FILEPATH=/usr/bin/cc

//A wrapper around 'ar' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_C_COMPILER_AR:FILEPATH=/usr/bin/gcc-ar-13

//A wrapper around 'ranlib' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_C_COMPILER_RANLIB:FILEPATH=/usr/bin/gcc-ranlib-13

//Flags used by the C compiler during all build types.
CMAKE_C_FLAGS:STRING=-fPIC

//Flags used by the C compiler during DEBUG builds.
CMAKE_C_FLAGS_DEBUG:STRING=-g

//Flags used by the C compiler during MINSIZEREL builds.
CMAKE_C_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG

//Flags used by the C compiler during RELEASE builds.
CMAKE_C_FLAGS_RELEASE:STRING=-O3 -DNDEBUG

//Flags used by the C compiler during RELWITHDEBINFO builds.
CMAKE_C_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG

//Path to a program.
CMAKE_DLLTOOL:FILEPATH=CMAKE_DLLTOOL-NOTFOUND

//No help, variable specified on the command line.
CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION:UNINITIALIZED=ON

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during RELEASE builds.
CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//No help, variable specified on the command line.
CMAKE_EXPORT_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY:UNINITIALIZED=ON

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=/home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/pkgRedirects

//No help, variable specified on the command line.
CMAKE_INSTALL_BINDIR:STRING=bin

//Read-only architecture-independent data (DATAROOTDIR)
CMAKE_INSTALL_DATADIR:PATH=

//Read-only architecture-independent data root (share)
CMAKE_INSTALL_DATAROOTDIR:PATH=share

//Documentation root (DATAROOTDIR/doc/PROJECT_NAME)
CMAKE_INSTALL_DOCDIR:PATH=

//C header files (include)
CMAKE_INSTALL_INCLUDEDIR:PATH=include

//Info documentation (DATAROOTDIR/info)
CMAKE_INSTALL_INFODIR:PATH=

//No help, variable specified on the command line.
CMAKE_INSTALL_LIBDIR:STRING=lib

//Program executables (libexec)
CMAKE_INSTALL_LIBEXECDIR:PATH=libexec

//Locale-dependent data (DATAROOTDIR/locale)
CMAKE_INSTALL_LOCALEDIR:PATH=

//Modifiable single-machine data (var)
CMAKE_INSTALL_LOCALSTATEDIR:PATH=var

//Man documentation (DATAROOTDIR/man)
CMAKE_INSTALL_MANDIR:PATH=

//C header files for non-gcc (/usr/include)
CMAKE_INSTALL_OLDINCLUDEDIR:PATH=/usr/include

...
Skipped 718 lines
...
CMAKE_AR-ADVANCED:INTERNAL=1
//This is the directory where this CMakeCache.txt was created
CMAKE_CACHEFILE_DIR:INTERNAL=/home/karl/vcpkg/buildtrees/sfml/x64-linux-rel
//Major version of cmake used to create the current loaded cache
CMAKE_CACHE_MAJOR_VERSION:INTERNAL=3
//Minor version of cmake used to create the current loaded cache
CMAKE_CACHE_MINOR_VERSION:INTERNAL=30
//Patch version of cmake used to create the current loaded cache
CMAKE_CACHE_PATCH_VERSION:INTERNAL=1
//Path to CMake executable.
CMAKE_COMMAND:INTERNAL=/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake
//Path to cpack program executable.
CMAKE_CPACK_COMMAND:INTERNAL=/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cpack
//Path to ctest program executable.
CMAKE_CTEST_COMMAND:INTERNAL=/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/ctest
//ADVANCED property for variable: CMAKE_CXX_COMPILER
CMAKE_CXX_COMPILER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_COMPILER_AR
CMAKE_CXX_COMPILER_AR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_COMPILER_RANLIB
CMAKE_CXX_COMPILER_RANLIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS
CMAKE_CXX_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_DEBUG
CMAKE_CXX_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_MINSIZEREL
CMAKE_CXX_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_RELEASE
CMAKE_CXX_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_RELWITHDEBINFO
CMAKE_CXX_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_COMPILER
CMAKE_C_COMPILER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_COMPILER_AR
CMAKE_C_COMPILER_AR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_COMPILER_RANLIB
CMAKE_C_COMPILER_RANLIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS
CMAKE_C_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_DEBUG
CMAKE_C_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_MINSIZEREL
CMAKE_C_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELEASE
CMAKE_C_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELWITHDEBINFO
CMAKE_C_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_DLLTOOL
CMAKE_DLLTOOL-ADVANCED:INTERNAL=1
//Path to cache edit program executable.
CMAKE_EDIT_COMMAND:INTERNAL=/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/ccmake
//Executable file format
CMAKE_EXECUTABLE_FORMAT:INTERNAL=ELF
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS
CMAKE_EXE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_DEBUG
CMAKE_EXE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_MINSIZEREL
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELEASE
CMAKE_EXE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXPORT_COMPILE_COMMANDS
CMAKE_EXPORT_COMPILE_COMMANDS-ADVANCED:INTERNAL=1
//Name of external makefile project generator.
CMAKE_EXTRA_GENERATOR:INTERNAL=
//Name of generator.
CMAKE_GENERATOR:INTERNAL=Ninja
//Generator instance identifier.
CMAKE_GENERATOR_INSTANCE:INTERNAL=
//Name of generator platform.
CMAKE_GENERATOR_PLATFORM:INTERNAL=
//Name of generator toolset.
CMAKE_GENERATOR_TOOLSET:INTERNAL=
//Test CMAKE_HAVE_LIBC_PTHREAD
CMAKE_HAVE_LIBC_PTHREAD:INTERNAL=1
//Source directory with the top level CMakeLists.txt file for this
// project
CMAKE_HOME_DIRECTORY:INTERNAL=/home/karl/vcpkg/buildtrees/sfml/src/3.0.2-1655203d87.clean
//ADVANCED property for variable: CMAKE_INSTALL_BINDIR
CMAKE_INSTALL_BINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATADIR
CMAKE_INSTALL_DATADIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATAROOTDIR
CMAKE_INSTALL_DATAROOTDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DOCDIR
CMAKE_INSTALL_DOCDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INCLUDEDIR
CMAKE_INSTALL_INCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INFODIR
CMAKE_INSTALL_INFODIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBDIR
CMAKE_INSTALL_LIBDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBEXECDIR
CMAKE_INSTALL_LIBEXECDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALEDIR
CMAKE_INSTALL_LOCALEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALSTATEDIR
CMAKE_INSTALL_LOCALSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_MANDIR
CMAKE_INSTALL_MANDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_OLDINCLUDEDIR
CMAKE_INSTALL_OLDINCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_RUNSTATEDIR
CMAKE_INSTALL_RUNSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SBINDIR
CMAKE_INSTALL_SBINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SHAREDSTATEDIR
CMAKE_INSTALL_SHAREDSTATEDIR-ADVANCED:INTERNAL=1
//Install .so files without execute permission.
CMAKE_INSTALL_SO_NO_EXE:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SYSCONFDIR
CMAKE_INSTALL_SYSCONFDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_LINKER
CMAKE_LINKER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS
CMAKE_MODULE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_DEBUG
CMAKE_MODULE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELEASE
CMAKE_MODULE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_NM
CMAKE_NM-ADVANCED:INTERNAL=1
//number of local generators
CMAKE_NUMBER_OF_MAKEFILES:INTERNAL=4
//ADVANCED property for variable: CMAKE_OBJCOPY
CMAKE_OBJCOPY-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_OBJDUMP
CMAKE_OBJDUMP-ADVANCED:INTERNAL=1
//Platform information initialized
CMAKE_PLATFORM_INFO_INITIALIZED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RANLIB
CMAKE_RANLIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_READELF
CMAKE_READELF-ADVANCED:INTERNAL=1
//Path to CMake installation.
CMAKE_ROOT:INTERNAL=/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS
CMAKE_SHARED_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_DEBUG
CMAKE_SHARED_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELEASE
CMAKE_SHARED_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_INSTALL_RPATH
CMAKE_SKIP_INSTALL_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_RPATH
CMAKE_SKIP_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS
CMAKE_STATIC_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_DEBUG
CMAKE_STATIC_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELEASE
CMAKE_STATIC_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STRIP
CMAKE_STRIP-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_TAPI
CMAKE_TAPI-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_TOOLCHAIN_FILE
CMAKE_TOOLCHAIN_FILE-ADVANCED:INTERNAL=1
//uname command
CMAKE_UNAME:INTERNAL=/usr/bin/uname
//ADVANCED property for variable: CMAKE_VERBOSE_MAKEFILE
CMAKE_VERBOSE_MAKEFILE-ADVANCED:INTERNAL=1
//Details about finding Threads
FIND_PACKAGE_MESSAGE_DETAILS_Threads:INTERNAL=[TRUE][v()]
//Install the dependencies listed in your manifest:
//\n    If this is off, you will have to manually install your dependencies.
//\n    See https://github.com/microsoft/vcpkg/tree/master/docs/specifications/manifests.md
// for more info.
//\n
VCPKG_MANIFEST_INSTALL:INTERNAL=OFF
//ADVANCED property for variable: VCPKG_VERBOSE
VCPKG_VERBOSE-ADVANCED:INTERNAL=1
//Making sure VCPKG_MANIFEST_MODE doesn't change
Z_VCPKG_CHECK_MANIFEST_MODE:INTERNAL=OFF
//Vcpkg root directory
Z_VCPKG_ROOT_DIR:INTERNAL=/home/karl/vcpkg
//linker supports push/pop state
_CMAKE_LINKER_PUSHPOP_STATE_SUPPORTED:INTERNAL=TRUE
//CMAKE_INSTALL_PREFIX during last run
_GNUInstallDirs_LAST_CMAKE_INSTALL_PREFIX:INTERNAL=/home/karl/vcpkg/packages/sfml_x64-linux
```
</details>

<details><summary>/home/karl/vcpkg/buildtrees/sfml/config-x64-linux-dbg-CMakeCache.txt.log</summary>

```
# This is the CMakeCache file.
# For build in directory: /home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg
# It was generated by CMake: /home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/cmake
# You can edit this file to change values found and used by cmake.
# If you do not want to change any of the values, simply exit the editor.
# If you do want to change a value, simply edit, save, and exit the editor.
# The syntax for the file is as follows:
# KEY:TYPE=VALUE
# KEY is the name of a variable in the cache.
# TYPE is a hint to GUIs for the type of VALUE, DO NOT EDIT TYPE!.
# VALUE is the current value for the KEY.

########################
# EXTERNAL cache entries
########################

//No help, variable specified on the command line.
BUILD_SHARED_LIBS:UNINITIALIZED=OFF

//Path to a program.
CMAKE_ADDR2LINE:FILEPATH=/usr/bin/addr2line

//Path to a program.
CMAKE_AR:FILEPATH=/usr/bin/ar

//Choose the type of build (Debug or Release)
CMAKE_BUILD_TYPE:STRING=Debug

CMAKE_CROSSCOMPILING:BOOL=OFF

//CXX compiler
CMAKE_CXX_COMPILER:FILEPATH=/usr/bin/c++

//A wrapper around 'ar' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_CXX_COMPILER_AR:FILEPATH=/usr/bin/gcc-ar-13

//A wrapper around 'ranlib' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_CXX_COMPILER_RANLIB:FILEPATH=/usr/bin/gcc-ranlib-13

//Flags used by the CXX compiler during all build types.
CMAKE_CXX_FLAGS:STRING=-fPIC

//Flags used by the CXX compiler during DEBUG builds.
CMAKE_CXX_FLAGS_DEBUG:STRING=-g

//Flags used by the CXX compiler during MINSIZEREL builds.
CMAKE_CXX_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG

//Flags used by the CXX compiler during RELEASE builds.
CMAKE_CXX_FLAGS_RELEASE:STRING=-O3 -DNDEBUG

//Flags used by the CXX compiler during RELWITHDEBINFO builds.
CMAKE_CXX_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG

//C compiler
CMAKE_C_COMPILER:FILEPATH=/usr/bin/cc

//A wrapper around 'ar' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_C_COMPILER_AR:FILEPATH=/usr/bin/gcc-ar-13

//A wrapper around 'ranlib' adding the appropriate '--plugin' option
// for the GCC compiler
CMAKE_C_COMPILER_RANLIB:FILEPATH=/usr/bin/gcc-ranlib-13

//Flags used by the C compiler during all build types.
CMAKE_C_FLAGS:STRING=-fPIC

//Flags used by the C compiler during DEBUG builds.
CMAKE_C_FLAGS_DEBUG:STRING=-g

//Flags used by the C compiler during MINSIZEREL builds.
CMAKE_C_FLAGS_MINSIZEREL:STRING=-Os -DNDEBUG

//Flags used by the C compiler during RELEASE builds.
CMAKE_C_FLAGS_RELEASE:STRING=-O3 -DNDEBUG

//Flags used by the C compiler during RELWITHDEBINFO builds.
CMAKE_C_FLAGS_RELWITHDEBINFO:STRING=-O2 -g -DNDEBUG

//Path to a program.
CMAKE_DLLTOOL:FILEPATH=CMAKE_DLLTOOL-NOTFOUND

//No help, variable specified on the command line.
CMAKE_ERROR_ON_ABSOLUTE_INSTALL_DESTINATION:UNINITIALIZED=ON

//Flags used by the linker during all build types.
CMAKE_EXE_LINKER_FLAGS:STRING=

//Flags used by the linker during DEBUG builds.
CMAKE_EXE_LINKER_FLAGS_DEBUG:STRING=

//Flags used by the linker during MINSIZEREL builds.
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL:STRING=

//Flags used by the linker during RELEASE builds.
CMAKE_EXE_LINKER_FLAGS_RELEASE:STRING=

//Flags used by the linker during RELWITHDEBINFO builds.
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO:STRING=

//Enable/Disable output of compile commands during generation.
CMAKE_EXPORT_COMPILE_COMMANDS:BOOL=

//No help, variable specified on the command line.
CMAKE_EXPORT_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_PACKAGE_REGISTRY:UNINITIALIZED=ON

//No help, variable specified on the command line.
CMAKE_FIND_PACKAGE_NO_SYSTEM_PACKAGE_REGISTRY:UNINITIALIZED=ON

//Value Computed by CMake.
CMAKE_FIND_PACKAGE_REDIRECTS_DIR:STATIC=/home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/pkgRedirects

//No help, variable specified on the command line.
CMAKE_INSTALL_BINDIR:STRING=bin

//Read-only architecture-independent data (DATAROOTDIR)
CMAKE_INSTALL_DATADIR:PATH=

//Read-only architecture-independent data root (share)
CMAKE_INSTALL_DATAROOTDIR:PATH=share

...
Skipped 771 lines
...
CMAKE_CXX_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_RELEASE
CMAKE_CXX_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_CXX_FLAGS_RELWITHDEBINFO
CMAKE_CXX_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_COMPILER
CMAKE_C_COMPILER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_COMPILER_AR
CMAKE_C_COMPILER_AR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_COMPILER_RANLIB
CMAKE_C_COMPILER_RANLIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS
CMAKE_C_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_DEBUG
CMAKE_C_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_MINSIZEREL
CMAKE_C_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELEASE
CMAKE_C_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_C_FLAGS_RELWITHDEBINFO
CMAKE_C_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_DLLTOOL
CMAKE_DLLTOOL-ADVANCED:INTERNAL=1
//Path to cache edit program executable.
CMAKE_EDIT_COMMAND:INTERNAL=/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/bin/ccmake
//Executable file format
CMAKE_EXECUTABLE_FORMAT:INTERNAL=ELF
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS
CMAKE_EXE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_DEBUG
CMAKE_EXE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_MINSIZEREL
CMAKE_EXE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELEASE
CMAKE_EXE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_EXE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_EXPORT_COMPILE_COMMANDS
CMAKE_EXPORT_COMPILE_COMMANDS-ADVANCED:INTERNAL=1
//Name of external makefile project generator.
CMAKE_EXTRA_GENERATOR:INTERNAL=
//Name of generator.
CMAKE_GENERATOR:INTERNAL=Ninja
//Generator instance identifier.
CMAKE_GENERATOR_INSTANCE:INTERNAL=
//Name of generator platform.
CMAKE_GENERATOR_PLATFORM:INTERNAL=
//Name of generator toolset.
CMAKE_GENERATOR_TOOLSET:INTERNAL=
//Test CMAKE_HAVE_LIBC_PTHREAD
CMAKE_HAVE_LIBC_PTHREAD:INTERNAL=1
//Source directory with the top level CMakeLists.txt file for this
// project
CMAKE_HOME_DIRECTORY:INTERNAL=/home/karl/vcpkg/buildtrees/sfml/src/3.0.2-1655203d87.clean
//ADVANCED property for variable: CMAKE_INSTALL_BINDIR
CMAKE_INSTALL_BINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATADIR
CMAKE_INSTALL_DATADIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DATAROOTDIR
CMAKE_INSTALL_DATAROOTDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_DOCDIR
CMAKE_INSTALL_DOCDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INCLUDEDIR
CMAKE_INSTALL_INCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_INFODIR
CMAKE_INSTALL_INFODIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBDIR
CMAKE_INSTALL_LIBDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LIBEXECDIR
CMAKE_INSTALL_LIBEXECDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALEDIR
CMAKE_INSTALL_LOCALEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_LOCALSTATEDIR
CMAKE_INSTALL_LOCALSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_MANDIR
CMAKE_INSTALL_MANDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_OLDINCLUDEDIR
CMAKE_INSTALL_OLDINCLUDEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_RUNSTATEDIR
CMAKE_INSTALL_RUNSTATEDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SBINDIR
CMAKE_INSTALL_SBINDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SHAREDSTATEDIR
CMAKE_INSTALL_SHAREDSTATEDIR-ADVANCED:INTERNAL=1
//Install .so files without execute permission.
CMAKE_INSTALL_SO_NO_EXE:INTERNAL=1
//ADVANCED property for variable: CMAKE_INSTALL_SYSCONFDIR
CMAKE_INSTALL_SYSCONFDIR-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_LINKER
CMAKE_LINKER-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS
CMAKE_MODULE_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_DEBUG
CMAKE_MODULE_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL
CMAKE_MODULE_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELEASE
CMAKE_MODULE_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_MODULE_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_NM
CMAKE_NM-ADVANCED:INTERNAL=1
//number of local generators
CMAKE_NUMBER_OF_MAKEFILES:INTERNAL=4
//ADVANCED property for variable: CMAKE_OBJCOPY
CMAKE_OBJCOPY-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_OBJDUMP
CMAKE_OBJDUMP-ADVANCED:INTERNAL=1
//Platform information initialized
CMAKE_PLATFORM_INFO_INITIALIZED:INTERNAL=1
//ADVANCED property for variable: CMAKE_RANLIB
CMAKE_RANLIB-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_READELF
CMAKE_READELF-ADVANCED:INTERNAL=1
//Path to CMake installation.
CMAKE_ROOT:INTERNAL=/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS
CMAKE_SHARED_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_DEBUG
CMAKE_SHARED_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL
CMAKE_SHARED_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELEASE
CMAKE_SHARED_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_SHARED_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_INSTALL_RPATH
CMAKE_SKIP_INSTALL_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_SKIP_RPATH
CMAKE_SKIP_RPATH-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS
CMAKE_STATIC_LINKER_FLAGS-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_DEBUG
CMAKE_STATIC_LINKER_FLAGS_DEBUG-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL
CMAKE_STATIC_LINKER_FLAGS_MINSIZEREL-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELEASE
CMAKE_STATIC_LINKER_FLAGS_RELEASE-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO
CMAKE_STATIC_LINKER_FLAGS_RELWITHDEBINFO-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_STRIP
CMAKE_STRIP-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_TAPI
CMAKE_TAPI-ADVANCED:INTERNAL=1
//ADVANCED property for variable: CMAKE_TOOLCHAIN_FILE
CMAKE_TOOLCHAIN_FILE-ADVANCED:INTERNAL=1
//uname command
CMAKE_UNAME:INTERNAL=/usr/bin/uname
//ADVANCED property for variable: CMAKE_VERBOSE_MAKEFILE
CMAKE_VERBOSE_MAKEFILE-ADVANCED:INTERNAL=1
//Details about finding Threads
FIND_PACKAGE_MESSAGE_DETAILS_Threads:INTERNAL=[TRUE][v()]
//Install the dependencies listed in your manifest:
//\n    If this is off, you will have to manually install your dependencies.
//\n    See https://github.com/microsoft/vcpkg/tree/master/docs/specifications/manifests.md
// for more info.
//\n
VCPKG_MANIFEST_INSTALL:INTERNAL=OFF
//ADVANCED property for variable: VCPKG_VERBOSE
VCPKG_VERBOSE-ADVANCED:INTERNAL=1
//Making sure VCPKG_MANIFEST_MODE doesn't change
Z_VCPKG_CHECK_MANIFEST_MODE:INTERNAL=OFF
//Vcpkg root directory
Z_VCPKG_ROOT_DIR:INTERNAL=/home/karl/vcpkg
//linker supports push/pop state
_CMAKE_LINKER_PUSHPOP_STATE_SUPPORTED:INTERNAL=TRUE
//CMAKE_INSTALL_PREFIX during last run
_GNUInstallDirs_LAST_CMAKE_INSTALL_PREFIX:INTERNAL=/home/karl/vcpkg/packages/sfml_x64-linux/debug
```
</details>

<details><summary>/home/karl/vcpkg/buildtrees/sfml/config-x64-linux-dbg-CMakeConfigureLog.yaml.log</summary>

```

---
events:
  -
    kind: "message-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineSystem.cmake:205 (message)"
      - "CMakeLists.txt:32 (project)"
    message: |
      The system is: Linux -  - x86_64
  -
    kind: "message-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:32 (project)"
    message: |
      Compiling the C compiler identification source file "CMakeCCompilerId.c" succeeded.
      Compiler: /usr/bin/cc 
      Build flags: -fPIC
      Id flags:  
      
      The output was:
      0
      
      
      Compilation of the C compiler identification source "CMakeCCompilerId.c" produced "a.out"
      
      The C compiler identification is GNU, found in:
        /home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/3.30.1/CompilerIdC/a.out
      
  -
    kind: "message-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCXXCompiler.cmake:126 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:32 (project)"
    message: |
      Compiling the CXX compiler identification source file "CMakeCXXCompilerId.cpp" succeeded.
      Compiler: /usr/bin/c++ 
      Build flags: -fPIC
      Id flags:  
      
      The output was:
      0
      
      
      Compilation of the CXX compiler identification source "CMakeCXXCompilerId.cpp" produced "a.out"
      
      The CXX compiler identification is GNU, found in:
        /home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/3.30.1/CompilerIdCXX/a.out
      
  -
    kind: "try_compile-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerABI.cmake:74 (try_compile)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeTestCCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:32 (project)"
    checks:
      - "Detecting C compiler ABI info"
    directories:
      source: "/home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-fNXR7i"
      binary: "/home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-fNXR7i"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/karl/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/karl/projects/gameOfLife/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-linux"
      Z_VCPKG_ROOT_DIR: "/home/karl/vcpkg"
    buildResult:
      variable: "CMAKE_C_ABI_COMPILED"
      cached: true
      stdout: |
        Change Dir: '/home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-fNXR7i'
        
...
Skipped 425 lines
...
          arg [elf_x86_64] ==> ignore
          arg [--hash-style=gnu] ==> ignore
          arg [--as-needed] ==> ignore
          arg [-dynamic-linker] ==> ignore
          arg [/lib64/ld-linux-x86-64.so.2] ==> ignore
          arg [-pie] ==> ignore
          arg [-znow] ==> ignore
          arg [-zrelro] ==> ignore
          arg [-o] ==> ignore
          arg [cmTC_ac0e3] ==> ignore
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib]
          arg [-L/lib/x86_64-linux-gnu] ==> dir [/lib/x86_64-linux-gnu]
          arg [-L/lib/../lib] ==> dir [/lib/../lib]
          arg [-L/usr/lib/x86_64-linux-gnu] ==> dir [/usr/lib/x86_64-linux-gnu]
          arg [-L/usr/lib/../lib] ==> dir [/usr/lib/../lib]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13/../../..] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../..]
          arg [-v] ==> ignore
          arg [CMakeFiles/cmTC_ac0e3.dir/CMakeCXXCompilerABI.cpp.o] ==> ignore
          arg [-lstdc++] ==> lib [stdc++]
          arg [-lm] ==> lib [m]
          arg [-lgcc_s] ==> lib [gcc_s]
          arg [-lgcc] ==> lib [gcc]
          arg [-lc] ==> lib [c]
          arg [-lgcc_s] ==> lib [gcc_s]
          arg [-lgcc] ==> lib [gcc]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o]
        ignore line: [collect2 version 13.3.0]
        ignore line: [/usr/bin/ld -plugin /usr/libexec/gcc/x86_64-linux-gnu/13/liblto_plugin.so -plugin-opt=/usr/libexec/gcc/x86_64-linux-gnu/13/lto-wrapper -plugin-opt=-fresolution=/tmp/ccbRzDLW.res -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lc -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lgcc --build-id --eh-frame-hdr -m elf_x86_64 --hash-style=gnu --as-needed -dynamic-linker /lib64/ld-linux-x86-64.so.2 -pie -z now -z relro -o cmTC_ac0e3 /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o -L/usr/lib/gcc/x86_64-linux-gnu/13 -L/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu -L/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib -L/lib/x86_64-linux-gnu -L/lib/../lib -L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-linux-gnu/13/../../.. -v CMakeFiles/cmTC_ac0e3.dir/CMakeCXXCompilerABI.cpp.o -lstdc++ -lm -lgcc_s -lgcc -lc -lgcc_s -lgcc /usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o]
        linker tool for 'CXX': /usr/bin/ld
        collapse obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o] ==> [/usr/lib/x86_64-linux-gnu/Scrt1.o]
        collapse obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o] ==> [/usr/lib/x86_64-linux-gnu/crti.o]
        collapse obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o] ==> [/usr/lib/x86_64-linux-gnu/crtn.o]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13] ==> [/usr/lib/gcc/x86_64-linux-gnu/13]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu] ==> [/usr/lib/x86_64-linux-gnu]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib] ==> [/usr/lib]
        collapse library dir [/lib/x86_64-linux-gnu] ==> [/lib/x86_64-linux-gnu]
        collapse library dir [/lib/../lib] ==> [/lib]
        collapse library dir [/usr/lib/x86_64-linux-gnu] ==> [/usr/lib/x86_64-linux-gnu]
        collapse library dir [/usr/lib/../lib] ==> [/usr/lib]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../..] ==> [/usr/lib]
        implicit libs: [stdc++;m;gcc_s;gcc;c;gcc_s;gcc]
        implicit objs: [/usr/lib/x86_64-linux-gnu/Scrt1.o;/usr/lib/x86_64-linux-gnu/crti.o;/usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o;/usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o;/usr/lib/x86_64-linux-gnu/crtn.o]
        implicit dirs: [/usr/lib/gcc/x86_64-linux-gnu/13;/usr/lib/x86_64-linux-gnu;/usr/lib;/lib/x86_64-linux-gnu;/lib]
        implicit fwks: []
      
      
  -
    kind: "message-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/Internal/CMakeDetermineLinkerId.cmake:40 (message)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerABI.cmake:255 (cmake_determine_linker_id)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeTestCXXCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:32 (project)"
    message: |
      Running the CXX compiler's linker: "/usr/bin/ld" "-v"
      GNU ld (GNU Binutils for Ubuntu) 2.42
  -
    kind: "try_compile-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/Internal/CheckSourceCompiles.cmake:101 (try_compile)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CheckCSourceCompiles.cmake:52 (cmake_check_source_compiles)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindThreads.cmake:97 (CHECK_C_SOURCE_COMPILES)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindThreads.cmake:163 (_threads_check_libc)"
      - "/home/karl/vcpkg/scripts/buildsystems/vcpkg.cmake:904 (_find_package)"
      - "src/SFML/System/CMakeLists.txt:69 (find_package)"
    checks:
      - "Performing Test CMAKE_HAVE_LIBC_PTHREAD"
    directories:
      source: "/home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-0tlqz7"
      binary: "/home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-0tlqz7"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_MODULE_PATH: "/home/karl/vcpkg/buildtrees/sfml/src/3.0.2-1655203d87.clean/cmake/Modules/"
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/karl/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/karl/projects/gameOfLife/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-linux"
      Z_VCPKG_ROOT_DIR: "/home/karl/vcpkg"
    buildResult:
      variable: "CMAKE_HAVE_LIBC_PTHREAD"
      cached: true
      stdout: |
        Change Dir: '/home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-0tlqz7'
        
        Run Build Command(s): /home/karl/vcpkg/downloads/tools/ninja/1.13.1-linux/ninja -v cmTC_0ca85
        [1/2] /usr/bin/cc -DCMAKE_HAVE_LIBC_PTHREAD  -fPIC -o CMakeFiles/cmTC_0ca85.dir/src.c.o -c /home/karl/vcpkg/buildtrees/sfml/x64-linux-dbg/CMakeFiles/CMakeScratch/TryCompile-0tlqz7/src.c
        [2/2] : && /usr/bin/cc -fPIC  CMakeFiles/cmTC_0ca85.dir/src.c.o -o cmTC_0ca85   && :
        
      exitCode: 0
...
```
</details>

<details><summary>/home/karl/vcpkg/buildtrees/sfml/config-x64-linux-rel-CMakeConfigureLog.yaml.log</summary>

```

---
events:
  -
    kind: "message-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineSystem.cmake:205 (message)"
      - "CMakeLists.txt:32 (project)"
    message: |
      The system is: Linux -  - x86_64
  -
    kind: "message-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCCompiler.cmake:123 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:32 (project)"
    message: |
      Compiling the C compiler identification source file "CMakeCCompilerId.c" succeeded.
      Compiler: /usr/bin/cc 
      Build flags: -fPIC
      Id flags:  
      
      The output was:
      0
      
      
      Compilation of the C compiler identification source "CMakeCCompilerId.c" produced "a.out"
      
      The C compiler identification is GNU, found in:
        /home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/3.30.1/CompilerIdC/a.out
      
  -
    kind: "message-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:17 (message)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerId.cmake:64 (__determine_compiler_id_test)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCXXCompiler.cmake:126 (CMAKE_DETERMINE_COMPILER_ID)"
      - "CMakeLists.txt:32 (project)"
    message: |
      Compiling the CXX compiler identification source file "CMakeCXXCompilerId.cpp" succeeded.
      Compiler: /usr/bin/c++ 
      Build flags: -fPIC
      Id flags:  
      
      The output was:
      0
      
      
      Compilation of the CXX compiler identification source "CMakeCXXCompilerId.cpp" produced "a.out"
      
      The CXX compiler identification is GNU, found in:
        /home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/3.30.1/CompilerIdCXX/a.out
      
  -
    kind: "try_compile-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerABI.cmake:74 (try_compile)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeTestCCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:32 (project)"
    checks:
      - "Detecting C compiler ABI info"
    directories:
      source: "/home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-EBwuYR"
      binary: "/home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-EBwuYR"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/karl/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/karl/projects/gameOfLife/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-linux"
      Z_VCPKG_ROOT_DIR: "/home/karl/vcpkg"
    buildResult:
      variable: "CMAKE_C_ABI_COMPILED"
      cached: true
      stdout: |
        Change Dir: '/home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-EBwuYR'
        
...
Skipped 425 lines
...
          arg [elf_x86_64] ==> ignore
          arg [--hash-style=gnu] ==> ignore
          arg [--as-needed] ==> ignore
          arg [-dynamic-linker] ==> ignore
          arg [/lib64/ld-linux-x86-64.so.2] ==> ignore
          arg [-pie] ==> ignore
          arg [-znow] ==> ignore
          arg [-zrelro] ==> ignore
          arg [-o] ==> ignore
          arg [cmTC_ff7eb] ==> ignore
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib]
          arg [-L/lib/x86_64-linux-gnu] ==> dir [/lib/x86_64-linux-gnu]
          arg [-L/lib/../lib] ==> dir [/lib/../lib]
          arg [-L/usr/lib/x86_64-linux-gnu] ==> dir [/usr/lib/x86_64-linux-gnu]
          arg [-L/usr/lib/../lib] ==> dir [/usr/lib/../lib]
          arg [-L/usr/lib/gcc/x86_64-linux-gnu/13/../../..] ==> dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../..]
          arg [-v] ==> ignore
          arg [CMakeFiles/cmTC_ff7eb.dir/CMakeCXXCompilerABI.cpp.o] ==> ignore
          arg [-lstdc++] ==> lib [stdc++]
          arg [-lm] ==> lib [m]
          arg [-lgcc_s] ==> lib [gcc_s]
          arg [-lgcc] ==> lib [gcc]
          arg [-lc] ==> lib [c]
          arg [-lgcc_s] ==> lib [gcc_s]
          arg [-lgcc] ==> lib [gcc]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o]
          arg [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o] ==> obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o]
        ignore line: [collect2 version 13.3.0]
        ignore line: [/usr/bin/ld -plugin /usr/libexec/gcc/x86_64-linux-gnu/13/liblto_plugin.so -plugin-opt=/usr/libexec/gcc/x86_64-linux-gnu/13/lto-wrapper -plugin-opt=-fresolution=/tmp/ccJpRN41.res -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lgcc -plugin-opt=-pass-through=-lc -plugin-opt=-pass-through=-lgcc_s -plugin-opt=-pass-through=-lgcc --build-id --eh-frame-hdr -m elf_x86_64 --hash-style=gnu --as-needed -dynamic-linker /lib64/ld-linux-x86-64.so.2 -pie -z now -z relro -o cmTC_ff7eb /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o /usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o -L/usr/lib/gcc/x86_64-linux-gnu/13 -L/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu -L/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib -L/lib/x86_64-linux-gnu -L/lib/../lib -L/usr/lib/x86_64-linux-gnu -L/usr/lib/../lib -L/usr/lib/gcc/x86_64-linux-gnu/13/../../.. -v CMakeFiles/cmTC_ff7eb.dir/CMakeCXXCompilerABI.cpp.o -lstdc++ -lm -lgcc_s -lgcc -lc -lgcc_s -lgcc /usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o /usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o]
        linker tool for 'CXX': /usr/bin/ld
        collapse obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/Scrt1.o] ==> [/usr/lib/x86_64-linux-gnu/Scrt1.o]
        collapse obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crti.o] ==> [/usr/lib/x86_64-linux-gnu/crti.o]
        collapse obj [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu/crtn.o] ==> [/usr/lib/x86_64-linux-gnu/crtn.o]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13] ==> [/usr/lib/gcc/x86_64-linux-gnu/13]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../x86_64-linux-gnu] ==> [/usr/lib/x86_64-linux-gnu]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../../../lib] ==> [/usr/lib]
        collapse library dir [/lib/x86_64-linux-gnu] ==> [/lib/x86_64-linux-gnu]
        collapse library dir [/lib/../lib] ==> [/lib]
        collapse library dir [/usr/lib/x86_64-linux-gnu] ==> [/usr/lib/x86_64-linux-gnu]
        collapse library dir [/usr/lib/../lib] ==> [/usr/lib]
        collapse library dir [/usr/lib/gcc/x86_64-linux-gnu/13/../../..] ==> [/usr/lib]
        implicit libs: [stdc++;m;gcc_s;gcc;c;gcc_s;gcc]
        implicit objs: [/usr/lib/x86_64-linux-gnu/Scrt1.o;/usr/lib/x86_64-linux-gnu/crti.o;/usr/lib/gcc/x86_64-linux-gnu/13/crtbeginS.o;/usr/lib/gcc/x86_64-linux-gnu/13/crtendS.o;/usr/lib/x86_64-linux-gnu/crtn.o]
        implicit dirs: [/usr/lib/gcc/x86_64-linux-gnu/13;/usr/lib/x86_64-linux-gnu;/usr/lib;/lib/x86_64-linux-gnu;/lib]
        implicit fwks: []
      
      
  -
    kind: "message-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/Internal/CMakeDetermineLinkerId.cmake:40 (message)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeDetermineCompilerABI.cmake:255 (cmake_determine_linker_id)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CMakeTestCXXCompiler.cmake:26 (CMAKE_DETERMINE_COMPILER_ABI)"
      - "CMakeLists.txt:32 (project)"
    message: |
      Running the CXX compiler's linker: "/usr/bin/ld" "-v"
      GNU ld (GNU Binutils for Ubuntu) 2.42
  -
    kind: "try_compile-v1"
    backtrace:
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/Internal/CheckSourceCompiles.cmake:101 (try_compile)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/CheckCSourceCompiles.cmake:52 (cmake_check_source_compiles)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindThreads.cmake:97 (CHECK_C_SOURCE_COMPILES)"
      - "/home/karl/vcpkg/downloads/tools/cmake-3.30.1-linux/cmake-3.30.1-linux-x86_64/share/cmake-3.30/Modules/FindThreads.cmake:163 (_threads_check_libc)"
      - "/home/karl/vcpkg/scripts/buildsystems/vcpkg.cmake:904 (_find_package)"
      - "src/SFML/System/CMakeLists.txt:69 (find_package)"
    checks:
      - "Performing Test CMAKE_HAVE_LIBC_PTHREAD"
    directories:
      source: "/home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-r8bRXi"
      binary: "/home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-r8bRXi"
    cmakeVariables:
      CMAKE_C_FLAGS: "-fPIC"
      CMAKE_C_FLAGS_DEBUG: "-g"
      CMAKE_EXE_LINKER_FLAGS: ""
      CMAKE_MODULE_PATH: "/home/karl/vcpkg/buildtrees/sfml/src/3.0.2-1655203d87.clean/cmake/Modules/"
      CMAKE_OSX_DEPLOYMENT_TARGET: "13.0"
      VCPKG_CHAINLOAD_TOOLCHAIN_FILE: "/home/karl/vcpkg/scripts/toolchains/linux.cmake"
      VCPKG_CRT_LINKAGE: "dynamic"
      VCPKG_CXX_FLAGS: ""
      VCPKG_CXX_FLAGS_DEBUG: ""
      VCPKG_CXX_FLAGS_RELEASE: ""
      VCPKG_C_FLAGS: ""
      VCPKG_C_FLAGS_DEBUG: ""
      VCPKG_C_FLAGS_RELEASE: ""
      VCPKG_INSTALLED_DIR: "/home/karl/projects/gameOfLife/vcpkg_installed"
      VCPKG_LINKER_FLAGS: ""
      VCPKG_LINKER_FLAGS_DEBUG: ""
      VCPKG_LINKER_FLAGS_RELEASE: ""
      VCPKG_PREFER_SYSTEM_LIBS: "OFF"
      VCPKG_TARGET_ARCHITECTURE: "x64"
      VCPKG_TARGET_TRIPLET: "x64-linux"
      Z_VCPKG_ROOT_DIR: "/home/karl/vcpkg"
    buildResult:
      variable: "CMAKE_HAVE_LIBC_PTHREAD"
      cached: true
      stdout: |
        Change Dir: '/home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-r8bRXi'
        
        Run Build Command(s): /home/karl/vcpkg/downloads/tools/ninja/1.13.1-linux/ninja -v cmTC_d68e9
        [1/2] /usr/bin/cc -DCMAKE_HAVE_LIBC_PTHREAD  -fPIC -o CMakeFiles/cmTC_d68e9.dir/src.c.o -c /home/karl/vcpkg/buildtrees/sfml/x64-linux-rel/CMakeFiles/CMakeScratch/TryCompile-r8bRXi/src.c
        [2/2] : && /usr/bin/cc -fPIC  CMakeFiles/cmTC_d68e9.dir/src.c.o -o cmTC_d68e9   && :
        
      exitCode: 0
...
```
</details>

**Additional context**

<details><summary>vcpkg.json</summary>

```
{
  "dependencies": [
    "fmt",
    "sfml"
  ]
}

```
</details>
