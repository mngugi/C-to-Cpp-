#include <stdio.h>

int main() {
    int x[] = {10, 20, 30};
    int* p = &x[1];
    const char* fruit[3] = {"Apples", "Oranges", "Bananas"};

    printf("these are %d %s\n", *p, fruit[1]);
    return 0;
}

