#!/bin/bash

set -e

clang -std=c23 -Wall -Wextra -Wpedantic main.c -o program

./program
