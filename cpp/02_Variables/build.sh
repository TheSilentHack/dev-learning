#!/bin/bash

set -e

clang++ -std="c++23" -Wall -Wextra -Wpedantic main.cpp -o program

./program