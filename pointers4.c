/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a C program for pointer decrementing  the variable pointer to
* access each succeeding element of the array
*
*
*****************************************************************/
#include<stdio.h>
const int MAX = 3;

int main()
{
    int var[] = {100,250,380};
    int i, *ptr;

    // array address in pointer

    ptr = var;
    for (i=MAX; i>0; i--)
    {
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Address of var[%d] = %x\n", i, *ptr);

        ptr--;  // move to next memory location

    }
    return 0;
}
