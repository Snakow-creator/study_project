cd "$(dirname "$0")" || exit 1

APP=main

rm -f $APP

g++ main.cpp io.cpp sortings.cpp -o $APP

./$APP
