// Reverse the number

#include <iostream>
using namespace std;

int reverseNUmber(int n)
{
    int rev = 0;
    while (n != 0)
    {
        int digit = n % 10;
        rev = rev * 10 + digit;
        n /= 10;
    }
    return rev;
}

int main()
{
    int n;
    cout << "Enter the number to be reversed : ";
    cin >> n;

    cout << "Reversed Integer : " << reverseNUmber(n) << endl;

    return 0;
}