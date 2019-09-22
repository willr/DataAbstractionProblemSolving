#include <iostream>
#include <string>

int binary_search(int *arr, int start, int end, int target)
{
    if (start > end) 
    {
        return -1;
    }

    if (end < start) 
    {
        return -1;
    }

    int mid = start + (end - start)/2;
    int mid_val = arr[mid];
    if (mid_val == target)
    {
        return mid;
    }

    // int new_mid = -1;
    if (target < mid_val) 
    {
        end = mid - 1;
    }

    if (target > mid_val)
    {
        start = mid + 1;
    }

    return binary_search(arr, start, end, target);
}

int main()
{
    int arr[] = {1, 5, 9, 12, 15, 21, 29, 31};
    int arr_size = 8;

    std::cout << "find the value: ";
    int target;
    std::cin >> target;

    int result = binary_search(arr, 0, arr_size - 1, target) + 1;

    std::cout << "result: " << result << std::endl;

}
