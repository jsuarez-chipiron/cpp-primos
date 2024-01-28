#!/bin/bash

echo "hola mundo"
cd build
make -j20
./bench
