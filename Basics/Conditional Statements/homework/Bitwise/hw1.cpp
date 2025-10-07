// Check the number is power of 2 or not without loops

#include <iostream>
using namespace std;

bool isPowerOfTwo(int n)
{
    return n > 0 && (n & (n - 1)) == 0;
};
int main()
{
    int n;
    cout << "Enter value of n : ";
    cin >> n;
    if (isPowerOfTwo(n))
    {
        cout << "n is power of 2" << endl;
    }
    else
    {
        cout << "n is not a power of 2" << endl;
    }
    return 0;
}