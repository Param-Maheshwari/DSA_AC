// Calculate the sum and product of all elements in an array

#include <iostream>
using namespace std;

int sumAndProduct(int arr[], int size, int &sum, int &product)
{
    sum = 0;
    product = 1;
    for (int i = 0; i < size; i++)
    {
        sum += arr[i];
        product *= arr[i];
    }
    return 0;
}

int main()
{
    int size = 5;
    int arr[size] = {1, 2, 3, 4, 5};
    int sum, product;
    sumAndProduct(arr, size, sum, product);
    cout << "Sum: " << sum << endl;
    cout << "Product: " << product << endl;
    return 0;
}