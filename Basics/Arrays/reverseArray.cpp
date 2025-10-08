#include <iostream>
using namespace std;

int reverseArray(int arr[], int size)
{
    int start = 0;
    int end = size - 1;
    swap(arr[start], arr[end]);
    start++;
    end--;
    return 0;
}

int main()
{
    int size = 5;
    int arr[size] = {10, 20, 30, 40, 50};
    int target = 20;

    reverseArray(arr, size);

    for (int i = 0; i < size; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}