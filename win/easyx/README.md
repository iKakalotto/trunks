## EasyX

### What is EasyX

[EasyX](https://easyx.cn/) is a graphics library for C++ that can help programmers using the C++ language quickly get started with graphics and game programming.

### How to use it

First, you need to download and configure [MinGW](https://github.com/niXman/mingw-builds-binaries/releases). There are many versions of MinGW, but not all versions are supported by EasyX. Therefore, it is recommended that you download the `x86_64-win32-seh-msvcrt` version.

You can specify the path of header files and static libraries during compilation, or copy them to `${mingw64}/x86_64-w64-mingw32/`.


#### Quick Start

You can use [CMake](https://cmake.org/download/) and [Ninja](https://github.com/ninja-build/ninja/releases) to build your project. Double-click on the [./test/start.bat](./test/start.bat) to try compiling and running the sample code.

Alternatively, if you don't want to use CMake and Ninja, you can directly execute the following command:

~~~bash
g++ -o app.exe -I../include main.cc -L../lib64 -leasyx -Os -s
~~~

