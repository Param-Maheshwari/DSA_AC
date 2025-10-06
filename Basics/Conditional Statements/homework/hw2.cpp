#include <iostream>
using namespace std;

int main() {
    int n,x=1;
    cout<<"Enter value of n : ";
    cin>>n;

    for(int i=1;i<=n;i++){
        x = x * i;
    }

    cout<<"Factorial of n : "<<x;
    return 0;
}