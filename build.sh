#!/usr/bin/env bash
# Test the project
test() {
echo "Running 01-simple.cxx ..."
clang++ -std=c++17 -I. -o 01.exe examples/01-simple.cxx    && ./01.exe && echo -e "\n"
echo "Running 02-enum_flag.cxx ..."
clang++ -std=c++17 -I. -o 02.exe examples/02-enum_flag.cxx && ./02.exe && echo -e "\n"
echo "Running 03-switch.cxx ..."
clang++ -std=c++17 -I. -o 03.exe examples/03-switch.cxx    && ./03.exe && echo -e "\n"
}


# Main script
if [[ "$1" == "test" ]]; then test
else echo "Usage: $0 {test}"; fi
