#include <iostream>
using namespace std;

int LinearSearch(int arr[], int size, int target)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == target)
        {
            return i;
        }
    }
    return -1;
}

int main()
{
    int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};
    int target = 20;

    cout << LinearSearch(arr, size, target) << endl;
    return 0;
}