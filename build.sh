#!/usr/bin/env bash
# Test the project
test() {
echo "Running 01-simple.c ..."
clang -I. -o 01.exe examples/01-simple.c && ./01.exe && echo -e "\n"
}


# Main script
if [[ "$1" == "test" ]]; then test
else echo "Usage: $0 {test}"; fi
