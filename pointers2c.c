/****************************************************************
* Author : Mwangi Ngugi
* Purpose : Introduction to Pointers in C programming
* A pointer is a direct access to a memory location
*
*****************************************************************/
#include<stdio.h>
#include<conio.h>
int main()
{
int var = 400; // variable declaration
int *ip;      // pointer declaration
ip = &var;    // stores address of var in pointer variable
int *ptr = NULL;

printf("Memory address of var variable: %x\n", &var);
printf("Address stored in ip variable: %x\n", ip);
printf("Value of *ip variable: %d\n", *ip);
printf("The NULL value of *ptr is: %d\n ", ptr );

return 0;

}
