@echo off
setlocal
cd /d "%~dp0"

cmake -S . -B build-release -G Ninja -DCMAKE_BUILD_TYPE=Release || exit /b 1
cmake --build build-release
