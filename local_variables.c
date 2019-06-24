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
