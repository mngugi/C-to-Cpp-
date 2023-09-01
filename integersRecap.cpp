
#include <iostream>
#include <limits>
#include <limits.h>

int main(){

int value = 45645466;
std::cout << value << std:: endl;

std:: cout  << " Max int value:" << INT_MAX << std:: endl;
std:: cout  << " Min int value:" << INT_MIN << std :: endl;
std:: cout << "Size of int :"  << sizeof(int) << " bytes allocated for an integer type!" << std:: endl;
std:: cout << "Size of int :"  << sizeof(short) << " bytes allocated for short type!" << std:: endl;


return EXIT_SUCCESS;


}
