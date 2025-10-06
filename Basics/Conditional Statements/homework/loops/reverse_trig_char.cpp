#include<iostream>
using namespace std;

int main()
{
int n = 4;
for(int i=0;i<n;i++){
    //will print space
    for(int j=0;j<i;j++){
        cout<<" ";
    }
    //alphabet
    char ch='A'+i;
    for(int j=0;j<n-i;j++){
        cout<<ch;
    }
    cout<<endl;
}
return 0;
}