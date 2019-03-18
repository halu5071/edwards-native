#!/bin/bash
echo "=============== Building UnitTests ================"
if [[ -e cmake-build ]]; then
  echo "delete build dir"
	rm -rf cmake-build
fi
mkdir cmake-build
cd cmake-build
cmake ../
make

if [[ ! -e test ]]; then
    exit 1;
fi

echo "=============== Running UnitTests ================"
cd test

if [[ ! -e unitTests ]]; then
    exit 1;
else
    ./unitTests
    if [[ $? == 1 ]]; then
        exit 1;
    fi
fi

echo "=============== Finished!! ================"
