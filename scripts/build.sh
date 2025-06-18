#!/usr/bin/env bash

echo "Building exe..."

if mkdir -p bin; then
  echo "bin/ dir created or already exists"
else
  echo "Failed to create bin/ directory" >&2
  exit 1
fi

CPP_FILES=$(find ./src -name "*.cpp")
g++ -o ./bin/cgpa.exe $CPP_FILES
g++ -o ./bin/cgpa $CPP_FILES
