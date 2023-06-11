## Welcome to the C-Programing-Recap wiki!
---
Installing GTK for C - GUI
```c
$ sudo dnf install gtk3-devel gstreamer1-devel clutter-devel webkit2gtk3-devel libgda-devel gobject-introspection-devel

$ sudo dnf install devhelp gtk3-devel-docs clutter-doc

compile a program with gcc using:

$ gcc hello.c -o hello `pkg-config --cflags --libs gtk+-3.0`


```

Verify GTK Installation: Double-check that the GTK development package is installed correctly on your system. You can use the package manager specific to your operating system to confirm the installation. For example, on Ubuntu, you can run the following command:

bash
Copy code
dpkg -l libgtk-3-dev
This command will check if the libgtk-3-dev package is installed. If it's not installed, you can try reinstalling it.

Check the GTK Include Path: Ensure that the GTK header files are present in the include path. You can locate the GTK header files on your system using the locate command. For example:

`locate gtk.h`
This command will list the locations where the gtk.h header file is found. Note the directory path, and when compiling the code, add the -I flag followed by that path. For example:


`**gcc -o program program.c -I/path/to/gtk/headers `pkg-config --cflags --libs gtk+-3.0`**`

Update Your System: Ensure that your system is up to date with the latest software packages and updates. This step can help in case there were any missing dependencies or compatibility issues.


---


### HelloWorldFunc.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a simple hello world using a function
*
*Function to me is the beginning of coding , however learning basics
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

---
### sumaverage.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a simple sum and average program
*
* add two numbers and perform the average examples of scanf()
*****************************************************************/
#include<stdio.h>

int main(void)

{
  int first_number , second_number , sum;
  float average;

  // enter the values for first and second number

  printf("Enter the first number:");
   scanf("%d", &first_number);

  printf("Enter the second number:");
   scanf("%d", &second_number);

  // add the sum

  sum = first_number + second_number ;

  // calculate the average

  average = sum/2.0 ;

  printf("Sum is %d and Average %f is :", sum , average);
  getch();

  return 0;



}
```
This code reads two integers from the user and calculates their sum and average.

The scanf function is used to read the values of first_number and second_number from the user. The & operator is used to pass the address of the variables, so that scanf can store the values read from the user in the appropriate memory locations.

The sum of the two numbers is calculated by adding first_number and second_number and storing the result in the sum variable. The average is calculated by dividing the sum by 2.0 and storing the result in the average variable.

Finally, the printf function is used to print the sum and average. The %d format specifier is used to print an integer, and the %f format specifier is used to print a float. The getch function is used to pause the program and wait for the user to press a key before exiting.

The output of the program will be the sum and average of the two numbers entered by the user. For example, if the user enters 3 and 5, the output will be:

`Sum is 8 and Average 4.000000 is :`



---
### 2.headers1.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : This program uses a Arithmetic.h
*  created by the author
*****************************************************************/
#include <stdio.h>
#include "Arithmetic.h"

int main()
{

    printf("---- Start My Headers ---- \n\n");
    Subtract(4500, 1700);
    Add(120, 5);
    Division(133000056, 260 );
    Multiplication(6987, 5);
    Modulus(6800, 25);
    printf("---- End My Headers ---- \n");
    return 0;

}
```

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

---

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


---

### array2.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a simple array program
*
*
*****************************************************************/
#include<stdio.h>

int main ()
{
    int a[20];
    int i, j;
 // array output
    for (i=0; i<20; i++)
    {
       a[i] = i + 20;
    }
    for(j=0; j<20; j++)
    {
        printf("Elements in [%d] = %d\n ", j , a[j]);
    }

    return 0;
}
```
The program initializes an array of 20 integers called a. Then, it uses a for loop to fill each element of the array with its index plus 20. Next, the program prints out each element of the array using another for loop.

The output of this program would be a list of integers from 20 to 39, with each integer on its own line. The first number would be 20, the second number would be 21, and so on until the last number, which would be 39.

---

### array3.c
**Code:**

```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : A simple c program for passing array parameter using a
* function
*
*****************************************************************/
#include<stdio.h>
// this  program calla for the function Aveg
double Aveg(int arr[], int size);
int main ()
{
int arr_balance[5] = {1000,2000,3000,1700,5000};
double avg;
avg = Aveg(arr_balance, 5);  // pass a pointer to the array as sn argument

// output

printf("Average is: %f", avg);

}
// this program the following function, which takes an array as an argument along
//with another argument and based on the passed arguments, it returns the
//average of the numbers passed through the array
// According to C programming tutorial
double Aveg(int arr[], int size) //function Aveg
{
    int i;
    double avg;
    double sum;

    for (i=0; i < size; ++i)
    {
        sum += arr[i];
    }
    avg = sum/size;
    return avg;
}
```


---

### arraypointer.c
**Code: **
```C
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
```
This program is similar to the first program, but it introduces some new concepts. The program declares an array of 5 integers called arr_balance, initializes it with some values, and then declares a pointer called p to a double type. The pointer p is then assigned the address of the first element of the arr_balance array.

The program then uses two for loops to print out the values of the elements in the arr_balance array. The first for loop uses the pointer p to access the elements of the array, while the second for loop uses the name of the array as a pointer to access the elements.

The output of this program would be a list of 5 floating-point numbers, each on its own line. The first number would be the value of the first element of the arr_balance array, the second number would be the value of the second element, and so on until the last number, which would be the value of the fifth element.

---

### formal_parameters.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : A simple program for Declaring formal parameters
*Formal parameters are treated as local variables inside the main function
*they take precedence over global variables
*
*****************************************************************/

# include <stdio.h>
int fruits;  /** global variable declaration outside the function **/
int main ()

{

/** local variable declaration **/
int bananas, oranges;
int fruits = 0;

/** initialization  **/

bananas = 120;
oranges = 80;

fruits = sum(bananas,oranges);
printf ("the total number of fruits = %d\n", fruits);



return 0;

}

/** function sum declaration **/
int sum(int bananas, int oranges)
{
printf ("the number of bananas = %d\n", bananas);
printf ("the number of oranges = %d\n", oranges);

return bananas + oranges ;
}
```
This program declares a global variable called fruits and a main function that declares and initializes two local variables, bananas and oranges. The main function then calls a function called sum, which takes two arguments, bananas and oranges. These arguments are called formal parameters, and they are treated as local variables inside the sum function.

The sum function prints out the values of the bananas and oranges variables, adds them together, and returns the result. The main function then prints out the result returned by the sum function.

The output of this program would be the following three lines:

**Code**
```C
the number of bananas = 120
the number of oranges = 80
the total number of fruits = 200
```

---

### function_max.c
**Code**
```C
#include <stdio.h>

// function declaration
int max(int num1, int num2);

int main()
{
 // local variable definition

int a = 1000;
int b = 200;

int ret;

// calling a function to get max value
ret = max(a,b);

printf("Max value is: %d\n", ret);

return 0;

}


// function returning the max between 2 numbers

int max(int num1, int num2)
{
  // local variable declaration
  int result;
  if (num1 > num2)
   result = num1;
  else
   result = num2;

  return result;

}
```
This program defines a function called max that takes two integers as arguments and returns the larger of the two. The main function declares two local variables, a and b, and initializes them with some values. It then calls the max function and passes a and b as arguments.

The max function compares num1 and num2 and assigns the larger value to the local variable result. It then returns result to the calling function.

In this case, the main function prints out the value returned by the max function. The output of the program would be a single line with the larger of the two values: "Max value is: 1000".

---
### getandputchars.c
**Code:**

```C
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
```

This program uses the getchar and putchar functions to read a single character from the user and then print it back out.

The getchar function reads a character from the standard input (usually the keyboard) and returns it as an integer. In this case, the character is stored in the variable s.

The putchar function takes a single character as an argument and prints it to the standard output (usually the screen). In this case, the character stored in s is printed out.

The output of this program would be a prompt asking the user to enter a value, followed by the character that the user entered and a newline. For example, if the user entered the letter 'a', the output would be:

**Code**
```C
Enter a value: 
Entered: a
```
---

### getsandputs.c
**Code:**

```C
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
```
This program is similar to the previous program, but it uses the gets and puts functions instead of getchar and putchar.

The gets function reads a line of text from the standard input (usually the keyboard) and stores it in a character array (in this case, sentence). The puts function takes a character array as an argument and prints it to the standard output (usually the screen).

The output of this program would be a prompt asking the user to enter a value, followed by the line of text that the user entered. For example, if the user entered the string "Hello, world!", the output would be:

**Code**
```C
Enter a value: 
Entered: Hello, world!
```
It's important to note that the gets function is considered to be dangerous to use because it does not check the size of the input, which can lead to a buffer overflow vulnerability. It is recommended to use fgets instead.

---
### intcharfloat.c
**Code**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : Combining int char float
*
*
*****************************************************************/
#include<stdio.h>  // standard in put out put header function , which contains string package
#include<conio.h>  // console character input function


void main()

{
   int h = 1000;
   float n = 995.5;
   char s = 'sure' ;


    printf("Hi kamaa can i get change for, %d\n", h);
    printf("oops!! you have made a minor error this change is %f\n", n);
    printf("let check, %c\n", s);


    return 0;
}
```
This program is a simple program that demonstrates how to combine and print out variables of different types using the printf function.

The program declares an integer h, a floating-point number n, and a character s. It then uses the printf function to print out each of these variables, along with some text.

The printf function is a standard C function for printing output to the console. It takes a format string as its first argument, followed by a list of variables to be printed. The format string specifies how the variables should be formatted and includes placeholders for each variable.

In this case, the first printf statement prints out an integer using the %d placeholder, the second printf statement prints out a floating-point number using the %f placeholder, and the third printf statement prints out a character using the %c placeholder.

The output of this program would be three lines of text, with the values of the h, n, and s variables printed in the appropriate placeholders:

**Code**
Hi kamaa can i get change for, 1000
oops!! you have made a minor error this change is 995.500000
let check, s

---

### local_variables.c
**Code**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : A simple program for Declaring local variable
*
*local variables are declared inside a function block;
* and can only be used by statements that are inside that function
*
*****************************************************************/

# include <stdio.h>

int main ()
{

/** local variable declaration **/
int bananas, oranges;
int fruits;

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
This program is a simple program that demonstrates how to declare and use local variables in C.

The program declares three local variables: bananas, oranges, and fruits. It initializes bananas and oranges with some values and then adds them together to calculate the total number of fruits.

Local variables are variables that are declared inside a function block and can only be used by statements that are inside that function. In this case, the bananas, oranges, and fruits variables are all local variables because they are declared inside the main function.

The program then uses the printf function to print out the values of the bananas, oranges, and fruits variables.

The output of this program would be three lines of text, with the values of the bananas, oranges, and fruits variables printed in the appropriate placeholders:

**Code**
```C
the number of bananas = 120
the number of oranges = 80
the total number of fruits = 200

```
---
### parametarized.c
**Code**
```C
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
```
This program demonstrates the use of a preprocessor macro in C. A macro is a piece of code that is replaced by the preprocessor with a predefined value or block of code.

The program defines a macro called MAX that returns the larger of two values. The macro is defined using the #define preprocessor directive and is followed by the name of the macro and the code to be expanded. The code to be expanded can include placeholders for arguments, which are represented by (i) and (j) in this case.

The MAX macro is then used in the printf function to print out the larger of the two values, 50 and 80.

The output of this program would be a single line of text with the larger of the two values: "the maximum number is 80".

---
### preprocessors1.c
**Code**

```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : Preprocessors operators
* the macro is normally confined to a single line
*#define Substitutes a preprocessor macro.
*#include Inserts a particular header from another file.
*#undef Undefines a preprocessor macro.
*#ifdef Returns true if this macro is defined.
*#ifndef Returns true if this macro is not defined.
*#if Tests if a compile time condition is true.
*#else The alternative for #if.
*#elif #else and #if in one statement.
*#endif Ends preprocessor conditional.
*#error Prints error message on stderr.
*#pragma Issues special commands to the compiler, using a standardized
*****************************************************************/
#include <stdio.h>

#define msg_for(i,j) \
     printf(#i  " and " #j ": Third best please!\n" )

int main(void)
{
    msg_for( Egypt, Kenya);

    return 0;
}
```
This program is similar to the previous program, but it demonstrates the use of the # operator to stringize a macro argument.

The # operator is used to convert a macro argument into a string literal. In this case, the msg_for macro takes two arguments, i and j, and prints out a message using the printf function. The message includes the values of i and j, which are stringized using the # operator.

The msg_for macro is then used in the main function to print out a message with the arguments "Egypt" and "Kenya".

The output of this program would be a single line of text with the values of the i and j arguments: "Egypt and Kenya: Third best please!".

---

### pointers1.c
**Code**

```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : A simple c program introducing pointers
* Pointers in c are used for dynamic memory allocation
** ***************************************************************/
#include <stdio.h>

int main()
{
  int a;
  char arr[20];

  printf("Address of a variable: %x\n", &a);
  printf("Address of a variable: %x\n", &arr);

  return 0 ;

}

```
This program is a simple program that demonstrates how to use pointers in C. Pointers are variables that hold the memory address of another variable.

The program declares an integer variable a and a character array arr. It then uses the & operator to get the memory address of each variable and prints it out using the printf function.

The & operator is used to get the memory address of a variable. In this case, the &a expression gets the memory address of the a variable, and the &arr expression gets the memory address of the arr array.

The output of this program would be two lines of text with the memory addresses of the a and arr variables in hexadecimal format:

**Code**
```C
Address of a variable: xxxxxx
Address of a variable: xxxxxx
```
---
### pointers2.c
**Code**

```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : Introduction to Pointers in C programming
* A pointer is a direct access to a memory location
*
*****************************************************************/
#include<stdio.h>
#include<conio.h>
int main()
{
int var = 400; // variable declaration
int *ip;      // pointer declaration
ip = &var;    // stores address of var in pointer variable
int *ptr = NULL;

printf("Memory address of var variable: %x\n", &var);
printf("Address stored in ip variable: %x\n", ip);
printf("Value of *ip variable: %d\n", *ip);
printf("The NULL value of *ptr is: %d\n ", ptr );

return 0;

}
```
This program is a simple program that demonstrates the basic concepts of pointers in C.

The program declares an integer variable var and a pointer variable ip. It then assigns the memory address of var to ip using the & operator. The ip variable now points to the memory location of var.

The program also declares a second pointer variable ptr and assigns it the value NULL, which is a special value used to indicate that a pointer does not point to a valid memory location.

The program then uses the printf function to print out the memory address of var, the value stored in ip, and the value of ptr.

The output of this program would be four lines of text with the memory address of var, the value stored in ip, the value of *ip, and the value of ptr:

**Code**
```C
Memory address of var variable: xxxxxx
Address stored in ip variable: xxxxxx
Value of *ip variable: 400
The NULL value of *ptr is: 0
```
---

### pointers3.c
**Code**

```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a C program for pointer increment the variable pointer to
* access each succeeding element of the array
*
*
*****************************************************************/
#include<stdio.h>
const int MAX = 3;

int main()
{
    int var[] = {100,250,380};
    int i, *ptr;

    // array address in pointer

    ptr = var;
    for (i=0; i<MAX; i++)
    {
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Address of var[%d] = %x\n", i, *ptr);

        ptr++;  // move to next memory location

    }
    return 0;
}
```
This program is a simple program that demonstrates how to use pointers to access elements of an array in C.

The program declares an integer array var with three elements and a pointer variable ptr. It then assigns the memory address of the first element of var to ptr.

The program then enters a loop that iterates over the elements of var. For each iteration, it prints out the memory address of the element using the ptr variable, and the value of the element using the *ptr expression.

The ptr variable is then incremented using the ptr++ statement, which moves it to the next memory location. This allows the loop to access each successive element of the array.

The output of this program would be six lines of text with the memory addresses and values of the elements of the var array:

**Code**
```C
Address of var[0] = xxxxxx
Value of var[0] = 100
Address of var[1] = xxxxxx
Value of var[1] = 250
Address of var[2] = xxxxxx
Value of var[2] = 380
```
---

### pointers4.c
**Code**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a C program for pointer decrementing  the variable pointer to
* access each succeeding element of the array
*
*
*****************************************************************/
#include<stdio.h>
const int MAX = 3;

int main()
{
    int var[] = {100,250,380};
    int i, *ptr;

    // array address in pointer

    ptr = var;
    for (i=MAX; i>0; i--)
    {
        printf("Address of var[%d] = %x\n", i, ptr);
        printf("Address of var[%d] = %x\n", i, *ptr);

        ptr--;  // move to next memory location

    }
    return 0;
}

```

This code is using a pointer to access and print the addresses and values of the elements of the array var.

The pointer ptr is initialized to the starting address of the array var. Then, the loop iterates from MAX to 0 and in each iteration, it prints the address of the current element and the value stored at that address. The pointer is decremented after each iteration, so it points to the next element in the array.

The output of the program will be the addresses and values of the elements of the array var in reverse order, since the loop is iterating backwards.

For example, if the starting address of the array var is 0x7fff5fbff9d0, the output will be:

**Code**
```C
Address of var[3] = 0x7fff5fbff9d0
Address of var[3] = 100
Address of var[2] = 0x7fff5fbff9cc
Address of var[2] = 250
Address of var[1] = 0x7fff5fbff9c8
Address of var[1] = 380

---
### pointers5.c
**Code**

```C
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
    char *names[] = { "Mamadu","Pote", "Balde", "Seidou", "Dialo"};

    int i = 0;
    for (i = 0; i<MAX; i++)
    {
        printf("Value of names[%d] = %s\n", i , *(names+i));
    }

    return 0;
}

```
In C, arrays are accessed using the square brackets notation, so names[i] would be the correct syntax to access the element at index i of the array names.

However, in this code, names is being treated as a pointer to the first element of the array, and pointers do not support the square brackets notation for accessing elements. Instead, you should use the dereference operator * to access the element pointed to by the pointer.

---

### readandoutput.c
**Code**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : Read and output characters
*
*
*****************************************************************/
#include<stdio.h>  // standard in put out put header function , which contains string package
#include<conio.h>  // console character input function

int main()
{
    char name[30];
    printf("Enter your name: ");
    scanf("%s", name);
    printf("Welcome to C, %s", name);
    getch();
}
```
This code reads a string from the user and prints it back to the screen.

The scanf function is used to read a string from the user and store it in the name array. The & operator is not needed when passing the name array to scanf, because arrays are already pointers to their first element.


The getch function is used to pause the program and wait for the user to press a key before exiting. This is useful when running the program in a console window, as it allows the user to see the output before the window closes.

---
### strings.c
**Code**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : a simple c string program
*
*
*****************************************************************/
#include<stdio.h>
#include<conio.h>

int main()
{
    char citizens[8] = {'n','e','t','i','z','e','n','s','\0'};

    printf("New type of Citizens: %s\n",citizens);

    return 0;
}
```
This code defines an array of characters called citizens and initializes it with the characters 'n', 'e', 't', 'i', 'z', 'e', 'n', 's', and '\0'. The '\0' character is the null character and it is used to mark the end of a string in C.

The printf function is then used to print the string represented by the citizens array. The %s format specifier is used to print a string, and the \n escape sequence is used to add a new line after the string.

The output of the program will be:

**Code**
`New type of Citizens: netizens`

---
### strings1.c
**Code**
```C
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
```
This code uses several string manipulation functions from the string.h library: strcpy, strcat, strlen, strcmp, strchr, and strstr.

However, there are some mistakes in the way these functions are being used.

### Version 2 of the code:

**Code**
```C
#include <stdio.h>
#include <string.h>

int main()
{
    char str1[20] = "Programming";
    char str2[20] = "good";
    char str3[20] = "Cybersec";
    char str4[20];
    char str5[20];

    int len;

    // copy str1 into str4
    strcpy(str4, str1);
    printf("String copy (strcpy) :  %s\n ", str4);

    // concatenate str1 and str2 and store the result in str5
    strcat(str1, str2);
    printf("String concatenation (strcat) :  %s\n ", str1);

    // compare str1 and str3 and print the result
    int result = strcmp(str1, str3);
    printf("String comparison (strcmp) : %d\n", result);

    // find the length of str2
    len = strlen(str2);
    printf("string length (strlen) :  %d\n", len);

    return 0;
}
```
The strcpy function copies the string in the second argument (str1 in this case) to the first argument (str4). The strcat function concatenates (appends) the string in the second argument (str2) to the string in the first argument (str1) and stores the result in the first argument. The strcmp function compares the two strings and returns an integer indicating the result of the comparison: 0 if the strings are equal, a positive number if the first string is lexicographically greater than the second, and a negative number if the first string is lexicographically smaller than the second. The strlen function returns the length of the string, not including the null character.

---

### structs1.c
**Code:**
```C
/****************************************************************
* Author : Mwangi Ngugi
* Purpose : introducing structure.
* Structure:  a struct statement that defines a new data type,
* with more than one number .
*
*****************************************************************/
struct Records
{
    char Title[50];
    char Student[50];
    char Course[100];
    int id;
};

int main()
{
    struct Records student1;
    struct Records student2;

    // student1 details
    strcpy(student1.Title,"Doctor" );
    strcpy(student1.Student,"Shaolin Osaka");
    strcpy(student1.Course,"Medicine Anatomy");
    student1.id = 2040672;

    // student2 details
    strcpy(student2.Title,"Engineer" );
    strcpy(student2.Student,"Okanawi Kagawa");
    strcpy(student2.Course,"Mechanical Engineering");
    student2.id = 2040745;

    printf("--------------------------------------- \n");

    // output student1
    printf("Student Title: %s\n",student1.Title);
    printf("Student Student: %s\n",student1.Student);
    printf("Student Course: %s\n",student1.Course);
    printf("Student Id: %d\n",student1.id);

    printf("---------------------------------------\n");

    // output student2

    printf("Student Title: %s\n",student2.Title);
    printf("Student Student: %s\n",student2.Student);
    printf("Student Course: %s\n",student2.Course);
    printf("Student Id: %d\n",student2.id);

    printf("---------------------------------------\n");

    return 0;
}

```
This code defines a struct called Records that has four fields: Title, Student, Course, and id. The struct is used to store information about a student, such as their name, course, and student ID.

Two variables of type struct Records, called student1 and student2, are declared and initialized with different values for each field. The strcpy function is used to copy strings to the Title, Student, and Course fields of each student.

The printf function is then used to print the values of the fields for both students. The output will be:


**Code**
```C
---------------------------------------
Student Title: Doctor
Student Student: Shaolin Osaka
Student Course: Medicine Anatomy
Student Id: 2040672
---------------------------------------
Student Title: Engineer
Student Student: Okanawi Kagawa
Student Course: Mechanical Engineering
Student Id: 2040745
---------------------------------------
```
### unions.c
**Code:**
```C
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
```
This code defines a union called Type that has three fields: a, b, and str. A union is a type of data structure in C that allows you to store different data types in the same memory location. In this case, the Type union can store an integer, a float, or a string.

The Type union is used to store different values in its fields. The integer 100 is stored in the a field, the float 1400.045 is stored in the b field, and the string "I love this game" is stored in the str field.

The printf function is then used to print the values of the fields of the Type union. The %d format specifier is used to print an integer, the %f format specifier is used to print a float, and the %s format specifier is used to print a string.

The output of the program will be:

**Code**
```C
Integer a : 100
Float b : 1400.045000
Character string  : I love this game
```
Note that the value of the b field may not be printed exactly as it was stored, due to the way floating-point numbers are represented in memory.

---

## C Graphical User Interface
### c-gui.c
**Code:**

```C
/** This Coding Exercise shows how to make GUI applications using GTK Toolkit  **/
/** GTK is based on Object Orientation  **/
/** GTK is event driven     **/
/** GTK reference page https://www.gtk.org/docs/getting-started/  **/

#include <gtk/gtk.h>
int main (int argc, char *argv[])
{
gtk_init (&argc, &argv);
GtkWidget *win = gtk_window_new (GTK_WINDOW_TOPLEVEL);
gtk_widget_show (win);
gtk_main ();
return 0;
}

```

This C code uses the GTK (GIMP Toolkit) library to create a GUI (graphical user interface) application. GTK is an open-source, cross-platform toolkit for creating graphical user interfaces. It is based on object-oriented programming principles and is event-driven, meaning that it responds to user interactions such as button clicks and key presses.

In this code, the gtk_init() function is used to initialize the GTK library and parse command line options. A new window is created using the gtk_window_new() function, which takes a parameter specifying the type of window to create (in this case, GTK_WINDOW_TOPLEVEL, which is a top-level window with a title bar and border). The gtk_widget_show() function is used to display the window on the screen. The gtk_main() function is an infinite loop that waits for events, such as user interactions, to occur and dispatches them to the appropriate event handlers. The code will run this loop until the application is closed by the user.

---
### lesson1b.cpp
**Code:**


```c++
//
//  lesson1b.cpp
//  C++Teaser
//
//  Created by peter  ngugi on 29/05/14.
//  Copyright (c) 2014 no. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
    int thisIsAnumber;
    std::cout << "Please Enter the a number:";
    cin>> thisIsAnumber;
    cin.ignore();
    
    cout<<"You entered: " << thisIsAnumber <<"\n";
    cin.get();

    return 0;

}

```
This is a simple C++ program that prompts the user to enter a number, reads the number from the user input, and then prints the number to the console. The program uses the "cin" and "cout" commands to read input and print output, respectively. The program also uses the "ignore" and "get" functions to clear the input buffer and wait for the user to press enter before ending the program.


---

### lesson2.cpp
**Code:**

```c++
//
//  lesson2.cpp
//  C++Teaser
//
//  Created by peter  ngugi on 29/05/14.
//  Copyright (c) 2014 no. All rights reserved.
//

#include <iostream>
using namespace std;
int main()
{
 int age;
 cout << "Please Enter your age:";
 cin >> age;
 
    cin.ignore();
    if (age < 100) {
        cout <<" You are pretty young!\n";
        
    } else if(age == 100) {
        cout << "You are old\n";
    
    }

    else {
         cout << "You are really old";
    
    }

    cin.get();

}


```

This is a simple C++ program that prompts the user to enter their age, reads the age from the user input, and then uses an if-else statement to print a message to the console based on the value of the age.

The program uses the "cin" command to read the age from the user input, and the "cout" command to print messages to the console. The program also uses the "ignore" function to clear the input buffer.

The if-else statement checks the value of the age variable, if the age is less than 100 it prints "You are pretty young!", if the age is equal to 100 it prints "You are old", otherwise it prints "You are really old".

Finally, the program uses the "get" function to wait for the user to press enter before ending the program.

---


### lesson3.cpp
**Code:**
```c++

//
//  lesson3.cpp
//  C++Teaser
//
//  Created by peter  ngugi on 29/05/14.
//  Copyright (c) 2014 no. All rights reserved.
//

#include <iostream>
using namespace std;

int main()

{
    int x;
    x=0;
    do {
        std::cout<< "Kenya ";
    } while (x !=0);
    
    cin.get();
}
```
This is a simple C++ program that uses a "do-while" loop to repeatedly print the string "Kenya " to the console.

The program initializes a variable "x" to the value 0. The do-while loop will execute the code block inside the loop as long as the condition in the while statement is true. In this case, the condition is "x !=0", which will always be true because x is always equal to 0.

This means that the code block inside the do-while loop will execute an infinite amount of times and will keep printing "Kenya " to the console.

The program also uses the "get" function to wait for the user to press enter before ending the program.
It is an infinite loop and it will run until the user stops it by closing the console window or stopping the execution.

---

### Xoroperator.cpp
**Code**
```cpp
#include <iostream>

int xorOperation(int a, int b);

int main()
{
    std::cout << xorOperation(1, 0) << std::endl;
    std::cout << xorOperation(1, 1) << std::endl;
    std::cout << xorOperation(0, 1) << std::endl;
    std::cout << xorOperation(0, 0) << std::endl;

    return 0;
}

int xorOperation(int a, int b)
{
    return (a || b) && !(a && b);
}


```
The code implements the XOR logic function using C++ and the iostream library. It should compile and run successfully. The XOR function takes two integer arguments a and b and returns the result of the XOR operation.


---

### Qunion.cpp

**Code:**

```cpp

The code is a simple GTK+ application that creates a top-level window and displays it. The following is a breakdown of what each line of code does:

`#include <gtk/gtk.h>`: This line includes the GTK+ header file, which contains all of the declarations for the GTK+ functions and widgets.
`int main (int argc, char *argv[])` : This line defines the main() function, which is the entry point for all GTK+ applications.
`gtk_init (&argc, &argv); `: This line initializes the GTK+ library and parses the command-line arguments.
`GtkWidget *win = gtk_window_new (GTK_WINDOW_TOPLEVEL);` : This line creates a new top-level window widget and stores it in the win variable.
`gtk_widget_show (win);` : This line displays the win window.
`gtk_main ();` : This line starts the GTK+ main loop, which will continue to run until the user closes the window.
`return 0;` : This line returns 0 from the main() function, which indicates that the application exited successfully.
When you run this code, it will create a new window with no title bar or border. 
You can resize and move the window, but you cannot close it. To close the window, you can click the window's close button or press the Ctrl+W keyboard shortcut

```




















