#include <iostream>
#include <string>

int maxArray(int *arr, int start, int end) 
{
    if (end - start <= 1) 
    {
        int r = std::max(arr[start], arr[end]);
        std::cout << "found: " << r << "\n";
        return r;
    }

    int mid = start + ((end - start) / 2);
    std::cout << "mid: " << mid << "\n";

    int tmpLeft = maxArray(arr, start, mid);
    int tmpRight = maxArray(arr, mid, end);

    std::cout << "tmpLeft: " << tmpLeft << " tmpRight: " << tmpRight << " mid: " << mid << "\n";
    int result = std::max(tmpLeft, tmpRight);

    return result;

}

int main()
{
    int arr[] = {1, 5, 9, 12, 15, 21, 29, 31, 34};
    int arr_size = 9;

    std::cout << "max value of array: ";

    int result = maxArray(arr, 0, arr_size - 1);

    std::cout << "result: " << result << std::endl;

}
