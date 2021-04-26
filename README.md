# Maya plugin template

<img alt="Maya icon" height="64" src="https://damassets.autodesk.net/content/dam/autodesk/www/products/responsive-imagery/responsive-badges-compare/2017/maya-2017-badge-75x75.png"/>
<img alt="CMake icon" height="64" src="https://cmake.org/wp-content/uploads/2018/11/cmake_logo_slider.png"/>
<img alt="C++ icon" height="64" src="https://docs.microsoft.com//en-us/media/logos/logo_Cplusplus.svg">

#### C++ plugin template for Autodesk Maya.

## Overview

This is a template repository for creating __Autodesk Maya plugin__ using _C++ Maya API_ and _CMake_. Using this
template you can easily start plugin development and don't care about setting up CMake and confuguring build.

## Usage

I recommend you to use this template with [JetBrains CLion](https://www.jetbrains.com/clion) because the project were
set up in this IDE. But you always can use it with pure CMake.

> For best practise you should use CLion version higher or equal to ```2021.1```.

### Setting up project

Open ```CMakeLists.txt``` file in the repository root and change ```maya-plugin-template``` to your project name. Also,
you can change description to your text.

```cmake
project(maya-plugin-template VERSION 1.0 DESCRIPTION "My Maya Plug-in" LANGUAGES CXX)
```

### Writing code

Use ```src``` directory for source code. You can organise directories in ```src``` as you wish. For example, create next
structure:

```
.
├── src
│   ├── include
│   └── source
└── ...
```

To add source files to the project simply add this files to ```src/CMakeLists.txt```  file to field ```SOURCE_FILES```
at the top of the file.

```cmake
set(SOURCE_FILES
        HelloWorld.cpp
        HelloWorld.h
        plugin.cpp
        plugin.h
        )
```

> If you are using __CLion__ - files will be added automatically. You don't have to care about that.

### Building plugin

#### CLion

First you need to prepare project for build.

1. Go to ```File->Settings->Build, Execution, Deployment->CMake```.
2. Select profile you need for development. It depends on your toolchain and OS.
3. Check the ```Enable profile``` checkbox on profile you need and uncheck on other.
4. Open CMake panel. _(by default at the bottom of your editor window)_
5. Press ```Reload CMake Project``` button.

After that you can select __run configuration__ and build project.

#### Pure CMake

<details>
<summary>Linux using MinGW</summary>

```bash
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug -G "Unix Makefiles" -DMAYA_VERSION=none ../
cmake --build . --target YOUR_PROJECT_NAME -j 3
```

</details>

<details>
<summary>Windows using MVSC</summary>

```bash
mkdir build
cd build
cmake -DCMAKE_BUILD_TYPE=Debug -G "Visual Studio 16 2019" -A x64 -DMAYA_VERSION=none ../
cmake --build . --target YOUR_PROJECT_NAME -j 3
```

</details>

> If you want to compile for release - change ```-DCMAKE_BUILD_TYPE``` flag from ___Debug___ to ___Release___.

## Credits

Author __Danil Andreev__. Thanks to [Chad Vernon](https://github.com/chadmv)  for the [__
cgcmake__](https://github.com/chadmv/cgcmake) library.
