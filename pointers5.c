/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a C program for pointer decrementing  the variable pointer to
* access each succeeding element of the array
*
*
*****************************************************************/
#include<stdio.h>
#include<strings.h>
const int MAX = 5;

int main()
{
    char *names = { "Mamadu","Pote", "Balde", "Seidou", "Dialo"};

        int i = 0;
        for (i = 0; i<MAX; i++)
        {
            printf("Value of names[%d] = %s\n", i , names[i]);
        }

        return 0;
}
