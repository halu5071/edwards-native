#!/bin/bash
echo "=============== Building UnitTests ================"
mkdir cmake-build
cd cmake-build
cmake ../
make

echo "=============== Running UnitTests ================"
cd test
./unitTests

echo "=============== Finished!! ================"
