# HashSmasher
A cross-platform tool to generate hash using libsodium's generic hashing function. It includes libsodium cross-compiled for Android ARM 64 and Linux x86_64. This project uses CMake for building. The bin folder contains binary executable `HashSmasher`for running on Linux hosts.

### Building project
Building of project is only supported for the Android, Linux and MacOS. This project required CMake. Follow https://cmake.org/install/ for instructions to install CMake.
After installing CMake, execute following commands from build directory to build the project:

`cmake ..`

`cmake --build .`

### Testing project
Execute following to test the project

`make test`

### Running tool
HashSmasher is a cli tool and accepts only one string message argument whose hash is needed.

`HashSmasher <message>`

For example, to get hash of 'Sample', execute following:

`HashSmasher Sample`
