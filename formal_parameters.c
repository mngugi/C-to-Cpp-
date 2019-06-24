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
