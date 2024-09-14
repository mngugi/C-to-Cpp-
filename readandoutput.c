
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : Read and output characters
*
*
*****************************************************************/
#include<stdio.h>  // standard in put out put header function , which contains string package
//#include<conio.h>  // console character input function

int main()
{
 char name[30];
 printf("Enter your name:");
 scanf("%s", &name);
 printf("Welcome to C , %s", name);
 getch();
}
