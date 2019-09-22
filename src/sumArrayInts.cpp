#include <iostream>
#include <string>

// Write a recursive function that will compute the sum of the first n integers 
//  in an array of at least n integers.

int 
sumInts(const int arr[], int pos)
{
    int result;
    if (pos <= 0)
    {
        result = arr[pos];
    }
    else
    {
        int tmp = arr[pos];
        result = tmp + sumInts(arr, pos - 1);
    }
    return result;
}


int
main()
{
    int pos;
    std::cout << "count position: ";
    std::cin >> pos;
    int arr[] {1, 2, 3, 4, 5, 6, 7, 8, 9};
    
    pos = std::min(9, pos);
    int result = sumInts(arr, pos - 1);
    std::cout << "result: " << result << std::endl;

}
