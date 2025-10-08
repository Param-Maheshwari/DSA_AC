// Swap max and min number of an array

#include <iostream>
#include <climits>
using namespace std;

int MaxAndMinSwap(int arr[], int size)
{
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_idx = -1;
    int largest_idx = -1;
    for (int i = 0; i < size; i++)
    {
        if (arr[i] < smallest)
        {
            smallest = arr[i];
            smallest_idx = i;
        }
        if (arr[i] > largest)
        {
            largest = arr[i];
            largest_idx = i;
        }
    }
    if (smallest_idx != -1 && largest_idx != -1)
    {
        swap(arr[smallest_idx], arr[largest_idx]);
    }
    return 0;
}

int main()
{
    int arr[] = {7, 3, -1, 2, 8};
    int size = 5;
    MaxAndMinSwap(arr, size);
    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}