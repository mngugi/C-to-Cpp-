/****************************************************************
* Author : Mwangi Ngugi
* Purpose : getchar() and putchar()
** r - Opens an existing text file for reading purpose.
* w -  Opens a text file for writing. If it does not exist, then a new file is
*      created. Here your program will start writing content from the
*      beginning of the file.
* a -  Opens a text file for writing in appending mode. If it does not exist,
*      then a new file is created. Here your program will start appending
*      content in the existing file content.
* r+ - Opens a text file for both reading and writing.
* w+ - Opens a text file for both reading and writing. It first truncates the file
*     to zero length if it exists, otherwise creates a file if it does not exist.
* obtained from tutorials point notes
*****************************************************************/
#include <stdio.h>

int main()
{

    FILE *fp;
    char buff[25000];
    fp = fopen("C Programs\C ProgramsTAMMY", "w+");
    fscanf(fp, "%s", buff);
    printf("1: %s\n", buff);

    fgets(buff, 2500, (FILE*)fp);
    printf("2: %s\n", buff);

    fgets(buff, 2500, (FILE*)fp);
    printf("3: %s\n", buff);


    fclose(fp);

}
