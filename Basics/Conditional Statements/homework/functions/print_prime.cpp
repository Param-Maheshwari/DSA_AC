#include<iostream>
using namespace std;

bool checkPrime(int n){
    if(n<=1) return false;
    for(int i=2; i*i<=n; i++){
        if(n%i == 0){
            return false;
        }
    }
    return true;   
}
int main()
{
int n;
cout<<"Enter the value of n: ";
cin>>n;

cout<<"Prime numbers upto "<<n<<" are : ";

 for(int i=2; i<n; i++){
    if(checkPrime(i)){
        cout<<i<<" ";
    }
}
    cout<<endl;
return 0;
}