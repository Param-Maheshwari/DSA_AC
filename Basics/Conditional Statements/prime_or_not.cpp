#include <iostream>
using namespace std;

int main() {
    int n;
    cout<<"Enter value of n : ";
    cin>>n;
    bool isPrime = true;
    for(int i = 2; i*i <= n; i++){
        if(n%i==0){
            isPrime = false;
            break;
        }
    }
    if(isPrime == true){
        cout<<n<<" is a prime number"<<endl;
    }
    else{
        cout<<n<<" is not a prime number"<<endl;
    }
    return 0;
}