/****************************************************************
* Author : Mwangi Ngugi
* Purpose : getchar() and putchar()
*
*****************************************************************/
#include <stdio.h>

int main()
{
    int s;
    printf("Enter a value: ");
    s = getchar();             // gets the first character of the input

    printf("\n Entered: ");
    putchar(s);

    return 0;

}
