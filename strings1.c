/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a string functions program
* strcpy, strcat, strlen, strcmp, strchr, strstr
*
*****************************************************************/
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Programming";
    char str2[20] = "good";
    char str3[20] = "Cybersec";
    char str4[100];
    char str5[100];

 int len;

    // copy str1 into str4

    strcpy(str1, str2);
    printf("String copy (strcpy) :  %s\n ", str4);

    strcat(str1, str2);
    printf("String copy (strcpy) :  %s\n ", str4);

    strcmp(str1, str3);
    printf("String copy (strcpy) : %s\n ", str4);

    len = strlen(str2);
    printf("string length :  %d\n", len);
    return 0;


}
