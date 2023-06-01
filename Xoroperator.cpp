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
