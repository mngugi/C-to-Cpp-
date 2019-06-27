/****************************************************************
* Author : Mwangi Ngugi
* Purpose : A simple c program for passing array parameter using a
* function
*
*****************************************************************/
#include<stdio.h>
int main()
{
    int arr_balance[5] = {1000,2000,3000,1700,5000};
    double *p;
    int i ;

    p = arr_balance;

    // output each array elements

    printf("Array values using pointer\n");
    for (i=0; i<5; i++)
    {
     printf("*(p + %d) : %f\n", i, *(p+1));
    }
    printf("Array values using balance as address\n");

    for (i=0; i<5; i++)
    {
     printf("*(arr_balance + %d) : %f\n", i, *(arr_balance+1));
    }
    return 0;
}
