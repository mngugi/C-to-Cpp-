/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a simple hello wprld using a function
*
* add two numbers and perform the average examples of scanf()
*****************************************************************/
#include<stdio.h>

int main(void)

{
  int first_number , second_number , sum;
  float average;

  // enter the values for first and second number

  printf("Enter the first number:");
   scanf("%d", &first_number);

  printf("Enter the second number:");
   scanf("%d", &second_number);

  // add the sum

  sum = first_number + second_number ;

  // calculate the average

  average = sum/2.0 ;

  printf("Sum is %d and Average %f is :", sum , average);
  getch();

  return 0;



}

