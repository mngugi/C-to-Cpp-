
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a simple array program
*
*
*****************************************************************/
#include<stdio.h>

int main ()
{
    int a[20];
    int i, j;
 // array output
    for (i=0; i<20; i++)
    {
       a[i] = i + 20;
    }
    for(j=0; j<20; j++)
    {
        printf("Elements in [%d] = %d\n ", j , a[j]);
    }

    return 0;
}

