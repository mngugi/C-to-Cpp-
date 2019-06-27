/****************************************************************
* Author : Mwangi Ngugi
* Purpose : A simple c program introducing pointers
* Pointers in c are used for dynamic memory allocation
** ***************************************************************/
#include <stdio.h>

int main()
{
  int a;
  char arr[20];

  printf("Address of a variable: %x\n", &a);
  printf("Address of a variable: %x\n", &arr);

  return 0 ;

}
