#!bin/bash

if [[ $# < 1 ]]
then
  echo "Usage:build.bash <MainCpp> "
else
  echo "compiling $1"
  if [[ $1 == *.cpp ]]
  then
      g++ -ggdb `pkg-config --cflags opencv` -o bin/`basename $1 .cpp` $1 LoadImage.* `pkg-config --libs opencv` -std=c++11;
  else
      echo "Please compile .cpp files"
  fi
  echo "Output file => ${1%.*}"
fi
