MAIN=main.cpp
APP=main

if [ ! -f $APP ]; then
  rm $APP
fi

g++ $MAIN -o $APP

./$APP


