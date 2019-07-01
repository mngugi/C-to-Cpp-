/****************************************************************
* Author : Mwangi Ngugi
* Purpose : unions  in c programming
*
*****************************************************************/
#include <stdio.h>
#include <string.h>


union Type
{
    int a;
    float b;
    char str[20];
};

int main()
{

    union Type types;

    types.a = 100;
    types.b = 1400.045;
    strcpy( types.str, "I love this game" );

    printf("Integer a : %d\n",types.a);
    printf("Float b : %f\n",types.b);
    printf("Character string  : %s\n",types.str);

    return 0;
}
