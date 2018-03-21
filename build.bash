#!bin/bash

if [[ $# < 1 ]]
then
  echo "Usage:build.bash <MainCpp> "
else
  echo "compiling $1"
g++ -ggdb `pkg-config --cflags opencv` -o bin/$1 *.cpp *.h `pkg-config --libs opencv` -std=c++11;
  echo "Output file => ${1%.*}"
fi
