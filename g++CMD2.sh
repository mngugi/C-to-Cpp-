#!/bin/bash

# Input: Path to the C++ source file
cpp_file="$1"

# Extract the filename without extension
filename=$(basename "$cpp_file" .cpp)

# Compile the C++ program
g++ -std=c++0x "$cpp_file" -o "$filename"

# Check if compilation was successful
if [ $? -eq 0 ]; then
    echo "Compilation successful. Executable: $filename"
else
    echo "Compilation failed."
fi

