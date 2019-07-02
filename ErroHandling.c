/****************************************************************
* Author : Mwangi Ngugi
* Purpose :
*errno value       Error
* 1             Operation not permitted
* 2             No such file or directory
* 3             No such process
* 4             Interrupted system call
* 5             I/O error
* 6             No such device or address
* 7             Argument list too long
* 8             Exec format error
* 9             Bad file number
* 10            No child processes
* 11            Try again
* 12            Out of memory
* 13            Permission denied
* obtained from https://www.geeksforgeeks.org/error-handling-c-programs/
*****************************************************************/
#include <stdio.h>
#include <errno.h>

int main()
{

    FILE *fp;

    fp = fopen("ProgramsTAMMY.pdf", "r");
    printf("The error number is %d\n", errno);
    printf("The error message is : %s\n",
                         strerror(errno));
    perror("Message from perror");

    return 0;

}
