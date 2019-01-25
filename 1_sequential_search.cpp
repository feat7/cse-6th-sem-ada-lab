#include <iostream>
#include <list>
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

int linked_list_search(list<int> linked_list, int item)
{
    list<int>::iterator it;
    int count = 1;
    for (it = linked_list.begin(); it != linked_list.end(); ++it)
    {
        if (item == *it)
        {
            cout << "Item found at " << count;
            return 1;
        }
        count++;
    }
    cout << "Item not found at " << *it;
    return 0;
}

int main()
{
    int arr[] = {10, 40, 333, 30, 21, 33, 57, 88};
    list<int> linked_list = {10, 40, 333, 30, 21, 33, 57, 88};

    int len = sizeof(arr) / sizeof(arr[0]);

    // linear_search(arr, 30, len);
    linked_list_search(linked_list, 30);
}