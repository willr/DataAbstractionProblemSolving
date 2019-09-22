#include <iostream>

//Write a recursive C++ function that writes the digits of a positive decimal integer in reverse order.

void
writeRevOrder(int number)
{
    if (number < 0)
    {
        return;
    }

    const int NumberBase = 10;
    if (number < NumberBase) 
    {
        std::cout << number;
    }
    else
    {
        int tmp = number % NumberBase;
        std::cout << tmp;

        writeRevOrder(number / NumberBase);
    }
}

int
main()
{
    int num;
    std::cout << "a number to reverse: ";
    std::cin >> num;

    writeRevOrder(num);
    std::cout << std::endl;
}
