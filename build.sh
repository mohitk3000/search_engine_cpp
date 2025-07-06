# remove build directory if it exists
if [ -d "build" ]; then
    rm -rf build
    fi
# create build directory
mkdir build

cd build
# invoke cmake to generate build files\
cmake  ..

# build the project
make -j$(nproc)

# run the tests
cd build/bin
./test