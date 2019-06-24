/****************************************************************
* Author : Mwangi Ngugi
* Purpose : A simple c program for array elements
*
*****************************************************************/

#include<stdio.h>
int main()
{
int i;
char  apple, banana, oranges;
// create an array of 10 elements

int fruit[10]={10,20,30,40,50,60,70,80,90,100};

for (i=0; i<10; i++)
{
 printf("Integer numbers in the array [%d] are: %d\n" , i,fruit[i] );
}
}
