/****************************************************************
* Author : Mwangi Ngugi
* Purpose : A simple program to calculate the sum and average of two numbers.
*
* This program prompts the user to input two integers, adds them together,
* and calculates their average. It demonstrates the use of scanf() for
* reading input from the user and printf() for outputting results.
*****************************************************************/
#include<stdio.h>  // Required for input/output functions like printf() and scanf()
#include<stdlib.h> // Required for system-related functions (though not essential here)

int main(void)
{
    int first_number, second_number, sum;  // Declaration of integer variables
    float average;  // Declaration of a float variable to store the average

    // Prompt the user to enter the first number
    printf("Enter the first number: ");
    scanf("%d", &first_number);  // Read the first number from the user input

    // Prompt the user to enter the second number
    printf("Enter the second number: ");
    scanf("%d", &second_number);  // Read the second number from the user input

    // Add the two numbers and store the result in 'sum'
    sum = first_number + second_number;

    // Calculate the average by dividing the sum by 2.0 (ensures floating-point division)
    average = sum / 2.0;

    // Display the sum and average to the user
    printf("Sum is %d and Average is %f\n", sum, average);

    // Using getch() is generally not recommended in modern C programming
    // as it's not part of the standard library. For example:
    // getch(); // If required for your specific environment, include <conio.h>

    return 0;  // Exit the program successfully
}
