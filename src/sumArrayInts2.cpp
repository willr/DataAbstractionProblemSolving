#include <iostream>
#include <string>

int
sumInts(int start, int end)
{
    int result;
    if (start == end)
    {
        result = start;
    }
    else
    {
        result = start + sumInts(start + 1, end);
    }

    return result;
}

int
main()
{
    int startInt;
    std::cout << "start int: ";
    std::cin >> startInt;
    int endInt;
    std::cout << "end int: ";
    std::cin >> endInt;
    
    int result = sumInts(startInt, endInt);
    std::cout << "result: " << result << std::endl;


}
