#include <iostream>
#include <string>

int
solveParade(int n)
{
    int result;
    if (n == 1)
    {
        // base case float or band
        result = 2;
    } 
    else if (n == 2)
    {
        // base case float-float, band-float, float-band
        result = 3;
    }
    else
    {
        result = solveParade(n - 1) + solveParade(n - 2);
    }

    return result;
}

int
main()
{
   int paradeLen;
   std::cout << "How long is the parade? ";
   std::cin >> paradeLen;

   int result = solveParade(paradeLen);
   std::cout << "result: " << result << std::endl;
}
