#include <iostream>
#include <string>

int kSmall(int k, int *arr, int start, int end)
{
    int pivotIndex = start + ((end - start) / 2);

    // partition the values of arr about P

    if (k < pivotIndex - first + 1)
    {
        return kSmall(k, arr, first, pivotIndex - 1);
    }
    else if (k == pivotIndex - first + 1)
    {
        return p;
    }
    else
    {
        kSmall(k - (pivotIndex - first + 1), arr, pivotIndex + 1, last);
    }
}


int main() 
{
    arr int[] = {4, 7, 3, 6, 8, 1, 9, 2};


}
