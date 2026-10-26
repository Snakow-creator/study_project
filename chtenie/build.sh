#!/bin/bash

cd "$(dirname "$0")" || exit 1

set -e

APP=main

rm -f "$APP"

g++ -std=c++17 -fexec-charset=utf-8 \
    main.cpp \
    writers_funcs.cpp \
    menu_items.cpp \
    -o "$APP"

./"$APP"
