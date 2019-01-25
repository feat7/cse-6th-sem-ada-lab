#include <iostream>
using namespace std;

int linear_search(int arr[], int item, int len)
{
    for (int i = 0; i <= len; i++)
    {
        if (arr[i] == item)
        {
            cout << "item found at location " << i + 1;
            return i + 1;
        }
    }
    return 0;
}

int main()
{
    int arr[] = {10, 40, 333, 30, 21, 33, 57, 88};

    int len = sizeof(arr) / sizeof(arr[0]);

    linear_search(arr, 30, len);
}