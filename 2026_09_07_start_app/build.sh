cd "$(dirname "$0")" || exit 1

MAIN=main.cpp
APP=main

if [ ! -f $APP ]; then
  rm $APP
fi

g++ $MAIN -o $APP

./$APP
