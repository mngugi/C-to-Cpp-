
#include <iostream>
#include <cstdlib>

 // create add1 function of type int
    int add1(int k)
    {
        int l = k + 2 ;
        return l ;

    }
// create a second function add2 of type int
    int add2(int i) // arguments to the function is 1. First argument is of type int
    {

        int j = i + 4 ;
        return j;
    }
// create a function overload

    int add2(int k, int j)
    {

        int n = (k + j) + 6  ;

        return n ;
    }


int  main() {

std::cout <<  add1(4) << "\n" ;

std::cout << add2(2)  << "\n" ;

std::cout << add2(5)  << "\n" ;

return EXIT_SUCCESS;


}
