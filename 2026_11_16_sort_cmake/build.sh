#!/bin/sh
set -e
cd "$(dirname "$0")"

cmake -S . -B build-release -G Ninja -DCMAKE_BUILD_TYPE=Release
cmake --build build-release
