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


