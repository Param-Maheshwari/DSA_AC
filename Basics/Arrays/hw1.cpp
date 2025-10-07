// Find the index of smallest and largest number in the array

#include <iostream>
#include <climits>
using namespace std;

int main()
{
    int size = 5;
    int nums[size] = {12, 41, -5, 16, -20};
    int smallest = INT_MAX;
    int largest = INT_MIN;
    int smallest_idx = -1;
    int largest_idx = -1;

    for (int i = 0; i < size; i++)
    {
        if (nums[i] < smallest) {
            smallest = nums[i];
            smallest_idx = i;
        }
        if (nums[i] > largest) {
            largest = nums[i];
            largest_idx = i;
        }
    }

    cout << "Smallest : " << smallest << " at index " << smallest_idx << endl;
    cout << "Largest : " << largest << " at index " << largest_idx << endl;
    return 0;
}