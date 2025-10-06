//Sum of numbers from 1 to N that are divisible by 3.

#include <iostream>
using namespace std;

int main() {
    int n,x,sum = 0;
    cout<<"Enter value of n : ";
    cin>>n;
    for(int i=1; i<=n; i++){
        if(i%3==0){
            x = i;
            sum = sum + x;
        }
    }
    cout<<"Sum of numbers divisible by 3 : "<<sum;
    return 0;
}