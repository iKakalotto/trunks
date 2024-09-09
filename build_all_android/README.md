## build_all_android

Script to build shared library for multiple Android ABIs, modified from the compilation script of the [Google Oboe](https://github.com/google/oboe/blob/main/build_all_android.sh) project.

**How to use it**

1. Ensure that ANDROID_NDK environment variable is set to your Android NDK location.

2. Install the build tool [Ninja](https://github.com/ninja-build/ninja/releases).

3. Place [build_all_android.sh](build_all_android.sh) in the same directory as the project's *CMakelists.txt*.

Then execute the script to generate four types of shared libraries: `armeabi-v7a`、`arm64-v8a`、`x86`、`x86_64`.
