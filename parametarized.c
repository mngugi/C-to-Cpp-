/****************************************************************
* Author : Mwangi Ngugi
* Purpose : Preprocessors operators
* the macro is normally confined to a single line
*****************************************************************/
#include <stdio.h>

#define MAX(i,j)((i) > (j)) ? (i) : (j))

int main(void)
{
    printf("the maximum number is %d\n", MAX(50, 80));
    return 0;
}


