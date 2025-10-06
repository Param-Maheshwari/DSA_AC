#include<iostream>
using namespace std;

int main()
{
int n = 4;
for(int i = 0; i<n; i++){
    //Loop 1 for spaces : n-i-1
    for(int j=0; j<(n-i-1); j++){
        cout<<" ";
    }
    //Loop 2 for left half side : i+1
    for(int j=1; j<=(i+1); j++){
        cout<<j;
    }
    //Loop 3 for right half side : backward(i to 1)
    for(int j=i; j>0; j--){
        cout<<j;
    }
    cout<<endl;
}
return 0;
}