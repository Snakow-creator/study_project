cd "$(dirname "$0")" || exit 1

APP=main

rm -f $APP

export LANG=ru_RU.UTF-8
export LC_ALL=ru_RU.UTF-8

g++ -fexec-charset=utf-8 main.cpp io.cpp sortings.cpp -o $APP

./$APP
