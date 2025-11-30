#include <stdio.h>

void hello(); // function from the shared library

int main() {
    hello();
    return 0;
}

