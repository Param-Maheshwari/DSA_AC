#include<iostream>
using namespace std;

void checkPrime(int n){
    bool isPrime = true;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<"Its a prime number";
    }
    else{
        cout<<"Its not a prime number";
    }
    }
int main()
{
int n;
cout<<"Enter the value of n: ";
cin>>n;
checkPrime(n);
return 0;
}