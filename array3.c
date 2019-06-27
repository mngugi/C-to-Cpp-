
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
