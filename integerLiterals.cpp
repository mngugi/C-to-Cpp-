#include <iostream>
/*

Decimal Integer Literal: This is the most common form of integer literal and is represented in base 10. It consists of a sequence of digits without any prefixes. For example:

int decimalLiteral = 12345;
Octal Integer Literal: An octal literal is represented in base 8 and starts with a '0' prefix. It can include digits from 0 to 7. For example:

int octalLiteral = 01234;  // Equivalent to decimal 668
Hexadecimal Integer Literal: A hexadecimal literal is represented in base 16 and starts with a '0x' or '0X' prefix. It can include digits from 0 to 9 and letters from A to F (case-insensitive). For example:


int hexLiteral = 0x1A3F;  // Equivalent to decimal 6719
Binary Integer Literal: Binary literals are a C++14 feature. They represent numbers in base 2 and start with a '0b' or '0B' prefix, followed by 0s and 1s. For example:


int binaryLiteral = 0b110101;  // Equivalent to decimal 53
Integer Suffixes: You can also use suffixes to specify the type of the integer literal. For example:

u or U for unsigned (e.g., 123u)
l or L for long (e.g., 123L)
ll or LL for long long (e.g., 123LL)
ul or UL for unsigned long (e.g., 123UL)


 */

 int main() {

 int decimalLiteral = 12345;
 int octalLiteral = 01234;  // Equivalent to decimal 668
 int hexLiteral = 0x1A3F;  // Equivalent to decimal 6719
 int binaryLiteral = 0b110101;  // Equivalent to decimal 53

std::cout << decimalLiteral << std::endl;
std::cout << octalLiteral << std::endl;
std::cout << hexLiteral << std::endl;
std::cout << binaryLiteral << std::endl;




 return EXIT_SUCCESS;
 }

