# C-programing-Recap

## Welcome to the C-programing-Recap wiki!
### HelloWorldFunc.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a simple hello world using a function
*
*Function to me is the beging of coding , however learning basics
* is important
*****************************************************************/
#include<stdio.h>
void start()
{
	printf("Hello World C Coders");
}
int main()
{
   // calls the start function
   start();
   return 0;
}
```
This code defines a simple C program that prints "Hello World C Coders" to the console. The program consists of two functions: start and main.

The start function is defined with the void return type, which means it does not return a value when it is called. It simply prints the string "Hello World C Coders" to the console using the printf function.

The main function is the entry point of the program. It is defined with the int return type, which means it returns an integer value when it is called. In this case, the main function calls the start function and then returns 0 to indicate that the program ran successfully.

To compile and run this program, you would need to save the code to a file with a .c extension, such as "hello.c", and then use a C compiler to compile the code. For example, you could use the gcc compiler on the command line as follows: `gcc hello.c -o hello`
This would create an executable file called "hello" that you could run to execute the program. When you run the program, it will print "Hello World C Coders" to the console.

---

### Arithmetic.h
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : Creating  headers
* this is an arithmetic.h header
*
*****************************************************************/
void Subtract(int i, int j)
{
    printf("Subtraction Results = %d\n\n", i-j);
}

void Add(int i, int j)
{
    printf("Addition Results = %d\n\n", i+j);
}

void Multiplication(int i, int j)
{
    printf("Multiplication Results = %d\n\n", i * j);
}

void Division(int i, int j)
{
    printf("Division Results = %d\n\n", i/j);
}
void Modulus(int i, int j)
{
    printf("Division Results = %d\n\n", i%j);
}
```
This code defines a set of functions that perform various arithmetic operations, including addition, subtraction, multiplication, division, and modulus.

The functions are defined with the void return type, which means they do not return a value when they are called. Instead, they perform their computation and print the result using the printf function.

The int type is used for the parameters i and j, which means that these parameters are expected to be integers when the functions are called.

The printf function is used to print the result of the computation to the console. Each function has a different format string that specifies how the result should be printed. For example, the Add function uses the format string "Addition Results = %d\n\n", which means that the result should be printed as a decimal integer followed by a newline character.

This code could be used in a C program by including the header file and calling the functions with appropriate arguments. For example:

**Code**
```C
#include "arithmetic.h"

int main() {
  Add(10, 5);
  Subtract(10, 5);
  Multiplication(10, 5);
  Division(10, 5);
  Modulus(10, 5);
  return 0;
}
```
This would print the results of the arithmetic operations to the console.

---

### Data_typeInt.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : simple program to show data type integer i.e, int
*****************************************************************/
#include<stdio.h>
#include<conio.h>

void main()

{
  int a, b, c;  // declare a int variables a,b and c ; then assign values 145 and 255
  a = 145 ;
  b = 255 ;
  c = a + b ;

  printf(" Sum of two integers a and b is: %d\n", c); // percentile format for integer is %d

  return 0;


}
```
This code defines a simple C program that declares three integer variables a, b, and c, and then calculates the sum of a and b and stores the result in c.

The int data type is used to declare the variables a, b, and c. This indicates that these variables are integers, which are whole numbers with no decimal point.

The values 145 and 255 are assigned to the variables a and b, respectively, using the assignment operator =. The sum of a and b is then calculated and stored in the variable c.

The result is printed to the console using the printf function, which takes a format string as its first argument. The format string in this case is " Sum of two integers a and b is: %d\n", which specifies that the result should be printed as a decimal integer followed by a newline character. The %d in the format string is a placeholder that is replaced by the value of the c variable when the printf function is called.

The return 0 statement at the end of the main function indicates that the program ran successfully and can be used to indicate the status of the program to the operating system or to other programs that may be calling it.

---

### Data_typechar.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a simple char datatype example
*
*
*****************************************************************/
#include<stdio.h>
#include<conio.h>

int main(void)

{
   //dchar w[10];
   char w = 'T' ; //

  printf("Character value for w is: %c\n", w); // percentile format for character is %c

  return 0;


}
```
This code defines a simple C program that declares a character variable w and assigns it the value 'T'. It then prints the value of w to the console using the printf function.

The char data type is used to declare the variable w. This indicates that w is a character, which is a single letter, number, or symbol. Characters are represented in C using single quotes, as in 'T'.

The value of w is printed to the console using the printf function, which takes a format string as its first argument. The format string in this case is "Character value for w is: %c\n", which specifies that the value of w should be printed as a character followed by a newline character. The %c in the format string is a placeholder that is replaced by the value of the w variable when the printf function is called.

The return 0 statement at the end of the main function indicates that the program ran successfully and can be used to indicate the status of the program to the operating system or to other programs that may be calling it.

---

### Data_typefloat.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a simple program to show data type integer i.e, int
*
*
*****************************************************************/

#include<stdio.h>
#include<conio.h>

void main()

{
 float f = 0.25 ; //

  printf("Float value for f is: %f\n", f); // percentile format for float is %f

  return 0;


}
```
This code defines a simple C program that declares a floating-point variable f and assigns it the value 0.25. It then prints the value of f to the console using the printf function.

The float data type is used to declare the variable f. This indicates that f is a floating-point number, which is a number with a decimal point. Floating-point numbers are used to represent values that may be very large or very small, or that may have a large degree of precision.

The value of f is printed to the console using the printf function, which takes a format string as its first argument. The format string in this case is "Float value for f is: %f\n", which specifies that the value of f should be printed as a floating-point number followed by a newline character. The %f in the format string is a placeholder that is replaced by the value of the f variable when the printf function is called.

The return 0 statement at the end of the main function indicates that the program ran successfully and can be used to indicate the status of the program to the operating system or to other programs that may be calling it.

---

### Data_types.c
**Code:**

```C
// a simple program to show data type integer i.e, int
#include<stdio.h>
#include<conio.h>

void main()

{
  int a, b, c;  // declare a int variables a,b and c ; then assign values 145 and 255
  a = 145 ;
  b = 255 ;
  c = a + b ;

  printf(" Sum of two integers a and b is: %d\n", c);

  return 0;


}

```
This code defines a simple C program that declares three integer variables a, b, and c, and then calculates the sum of a and b and stores the result in c.

The int data type is used to declare the variables a, b, and c. This indicates that these variables are integers, which are whole numbers with no decimal point.

The values 145 and 255 are assigned to the variables a and b, respectively, using the assignment operator =. The sum of a and b is then calculated and stored in the variable c.

The result is printed to the console using the printf function, which takes a format string as its first argument. The format string in this case is " Sum of two integers a and b is: %d\n", which specifies that the result should be printed as a decimal integer followed by a newline character. The %d in the format string is a placeholder that is replaced by the value of the c variable when the printf function is called.

The return 0 statement at the end of the main function indicates that the program ran successfully and can be used to indicate the status of the program to the operating system or to other programs that may be calling it.

---

### ErrorHandling.c
**Code:**
```C
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
```
This code defines a simple C program that attempts to open a file called "ProgramsTAMMY.pdf" for reading. If the file does not exist or if there is an error opening the file, the errno global variable is set to a non-zero value indicating the error.

The errno.h header file is included in the program to define the errno global variable and the strerror function, which can be used to obtain a string representation of the error.

The fopen function is used to open the file, and the return value is stored in the fp file pointer. If the file cannot be opened, fp is set to NULL.

The value of errno is then printed to the console using the printf function, along with a string representation of the error obtained using the strerror function. The perror function is also called to print a message and the string representation of the error to the console.

If the file "ProgramsTAMMY.pdf" does not exist or if there is an error opening the file, the program will print an error message to the console indicating the cause of the error. The specific error message and error code will depend on the reason the file could not be opened.

---

### FileInandOut.c
**Code:**
```C
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
    fp = fopen("C Programs\newtext.txt", "w+");
    fprintf(fp, "...\n");
    fputs("This is a created text document \n",fp);
    fclose(fp);

}
```
The purpose of this code is to create a new text file called "newtext.txt" in the "C Programs" folder, and write the string "This is a created text document" to it.

The fopen function is used to open the file and create it if it doesn't exist, and the w+ mode specified in the second argument tells the function to open the file for writing and reading.

The fprintf function is then used to write the string "...\n" to the file, and the fputs function is used to write the string "This is a created text document \n" to the file.

Finally, the file is closed using the fclose function.

---

### Fileread.c
**Code:**
```C
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
```

This code is opening a file called "C Programs\C ProgramsTAMMY" in "w+" mode, which means it will be opened for writing and reading, and if the file doesn't exist it will be created.

The fscanf function is then being used to read a string from the file and store it in the buff buffer. The %s format specifier tells fscanf to read a string from the file and store it in buff.

The fgets function is then being used to read a line from the file and store it in the buff buffer. The first argument is the buffer to store the line in, the second argument is the maximum number of characters to read, and the third argument is the file to read from.

Finally, the file is being closed using the fclose function.

It's important to note that the fscanf and fgets functions are being used to read from the file, but it's not clear what data the file contains or where the file is located on the system, so it's not certain what the printf statements will output.

---

### Global_variables.c
**Code:**

```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : A simple program for Declaring Global variable
*
*local variables are declared outside a function block;
* and can only be used by statements that are inside that function
*
*****************************************************************/

# include <stdio.h>
int fruits;  /** global variable declaration outside the function **/
int main ()

{

/** local variable declaration **/
int bananas, oranges;


/** initialization  **/

bananas = 120;
oranges = 80;

fruits = (bananas + oranges);


printf ("the number of bananas = %d\n", bananas);
printf ("the number of oranges = %d\n", oranges);
printf ("the total number of fruits = %d\n", fruits);

return 0;


}

```
This code is a simple program that demonstrates the use of global and local variables in C.

At the top of the program, the global variable fruits is declared outside of any function. This means that it can be accessed by any code in the program, including inside the main function.

Inside the main function, two local variables called bananas and oranges are declared. These variables can only be used within the main function and are not accessible from other parts of the program.

The local variables are then initialized to the values 120 and 80, respectively. The global variable fruits is then set to the sum of bananas and oranges.

Finally, the values of the three variables are printed to the console using the printf function. The output of the program will be:

**Code**
```C
the number of bananas = 120
the number of oranges = 80
the total number of fruits = 200

```
### array1.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : A simple c program for array elements
*
*****************************************************************/

#include<stdio.h>
int main()
{
int i;
char  apple, banana, oranges;
// create an array of 10 elements

int fruit[10]={10,20,30,40,50,60,70,80,90,100};

for (i=0; i<10; i++)
{
 printf("Integer numbers in the array [%d] are: %d\n" , i,fruit[i] );
}
}
```
This C program defines an array of 10 integers called fruit and initializes it with the values 10, 20, 30, 40, 50, 60, 70, 80, 90, 100. It then uses a for loop to iterate through the elements of the array and prints each element to the console. The output of the program would be:

**Code**
```C
Integer numbers in the array [0] are: 10
Integer numbers in the array [1] are: 20
Integer numbers in the array [2] are: 30
Integer numbers in the array [3] are: 40
Integer numbers in the array [4] are: 50
Integer numbers in the array [5] are: 60
Integer numbers in the array [6] are: 70
Integer numbers in the array [7] are: 80
Integer numbers in the array [8] are: 90
Integer numbers in the array [9] are: 100
```
