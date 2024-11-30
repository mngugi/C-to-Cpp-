#include <stdio.h>

int main() {
    int i, j;  // Declare variables properly

    for (i = 5; i >= 1; i--) {  // Outer loop controls the rows
        for (j = 1; j <= i; j++) {  // Inner loop controls the stars in each row
            printf("*");  // Print star
        }
        printf("\n");  // Move to the next line after each row
    }
    
    return 0;
}

