/****************************************************************
* Author : Mwangi Ngugi
* Purpose : getchar() and putchar()
*
*****************************************************************/
#include <stdio.h>

int main()
{
    char sentence[100];
    printf("Enter a value: ");
    gets(sentence);            // gets the first character of the input

    printf("\n Entered: ");
    puts(sentence);


    return 0;

}
