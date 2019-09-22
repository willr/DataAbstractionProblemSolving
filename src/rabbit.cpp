#include <iostream>
#include <string>
#include <vector>
#include <chrono>

int
recurse_rabbit(int n)
{
    int result;
    if (n <= 2)
    {
        result = 1;
    }
    else // n > 2, so n - 1 > 9 and n - 2 > 0
    {
        result = recurse_rabbit(n - 1) + recurse_rabbit(n - 2);
    }

    // std::cout << "rabbit(" << n << ") = " << result << std::endl;
    return result;
}

long long cache_rabbit(int n)
{
    static std::vector<long long> cache (n + 1);
    
    long long tmp = cache[n];
    if (tmp != 0)
    {
        return tmp;
    }

    long long result;
    if (n <= 2)
    {
        result = 1;
    }
    else // n > 2, so n - 1 > 9 and n - 2 > 0
    {
        result = cache_rabbit(n - 1) + cache_rabbit(n - 2);
    }
    cache[n] = result;

    return result;
}

long long interative_rabbit(int n)
{
    // initilize the base cases
    long long previous = 1;       // initially rabbit(1)
    long long current = 1;        // initially rabbit(2)
    long next = 1;           // result when rabbit is 1 or 2

    // compute next rabbit values when n >= 3
    for (int i = 3; i <= n; i++)
    {
        // current is rabbit(i - 1), previous is rabbit(i - 2)
        next = current + previous;      // rabbit(i)
        previous = current;             // get ready for the next iteration
        current = next;
    }
    return next;
}


int main()
{
    int upto;
    std::cout << "return the fibinacci number for: ";
    std::cin >> upto;
    
    auto start = std::chrono::steady_clock::now(); 
    long long rresult = recurse_rabbit(upto);
    auto elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start);
    std::cout << " recurse_result: " << rresult << " elapsed: " << elapsed.count() << std::endl;

    start = std::chrono::steady_clock::now();
    long long cresult = cache_rabbit(upto);
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start);
    std::cout << " cache_result: " << cresult << " elapsed: " << elapsed.count() << std::endl;

    start = std::chrono::steady_clock::now();
    long long iresult = interative_rabbit(upto);
    std::cout << " interative_rabbit: " << iresult << " elapsed: " << elapsed.count() << std::endl;
    elapsed = std::chrono::duration_cast<std::chrono::milliseconds>(std::chrono::steady_clock::now() - start);
}
