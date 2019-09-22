#include <iostream>
#include <string>

int
numberOfGroups(int n, int k)
{
    // number of ways to choose k out of n things
    //  is the sum of number of ways to choose k - 1 out of n - 1 things
    //  and the number of ways to to choose k out of n - 1 things
    int result;

    if ( (n == k) || (k == 0) )
    {
        result = 1;
    }
    else if (k > n)
    {
        result = 0;
    }
    else
    {
        result = numberOfGroups(n - 1, k - 1) + numberOfGroups(n - 1, k);
    }

    return result;
}

int
main()
{
   int n;
   std::cout << "number of things: ";
   std::cin >> n;
   int k;
   std::cout << "choose how many: ";
   std::cin >> k;

   int result = numberOfGroups(n, k);
   std::cout << "result: " << result << std::endl;
}
