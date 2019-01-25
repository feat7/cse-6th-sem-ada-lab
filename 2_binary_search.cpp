#include <iostream>
using namespace std;

int binary_search(int arr[], int item, int len)
{
    int start = 0;
    int end = len;
    while (start <= end)
    {
        int mid = (start + end) / 2;

        if (item == arr[mid])
        {
            cout << "Item found at location " << mid + 1;
            return mid + 1;
        }
        if (item > arr[mid])
            start = mid + 1;
        else
            end = mid - 1;
    }
}

int main()
{
    int arr[] = {1, 4, 5, 7, 8, 9}; // sorted array

    int len = sizeof(arr) / sizeof(arr[0]);
    binary_search(arr, 8, len);
}