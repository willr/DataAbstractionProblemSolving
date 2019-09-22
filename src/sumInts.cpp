#include <iostream>
#include <math.h>

// Given an integer n > 0, write a recursive C++ function that writes the integers 1, 2, . . ., n .

void 
writeInt(int start, int end)
{
    if (start > end)
    {
        return;
    }

    if (start == end)
    {
        std::cout << start << std::endl;
    }
    else
    {
        std::cout << start << ", ";
    }
    writeInt(start + 1, end);
}


// Given an integer n > 0, write a recursive C++ function that returns the sum of the squares of 1 through n .

void
writeIntSquare(int start, int end)
{
    if (start > end)
    {
        return;
    }

    if (start == end)
    {
        std::cout << std::pow(start, 2) << std::endl;
    }
    else
    {
        std::cout << std::pow(start, 2) << ", ";
    }
    writeIntSquare(start + 1, end);
}

int
main()
{
    int end;
    std::cout << "stop integer (inclusive): ";
    std::cin >> end;

    writeInt(1, end);

    writeIntSquare(1, end);

}
