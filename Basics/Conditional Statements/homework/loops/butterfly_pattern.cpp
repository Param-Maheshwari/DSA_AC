#include<iostream>
using namespace std;

int main()
{
int n=4;
//First Half
for(int i=0;i<n;i++){
    //left stars
    for(int j=0; j<(i+1); j++){
        cout<<"*";
    }
    //spaces between
    for(int j=0; j<(n*2-2*(i+1));j++){
        cout<<" ";
    }
    //right stars
    for(int j=0; j<(i+1); j++){
        cout<<"*";
    }
    cout<<endl;
}

//Second Half
for(int i=0; i<n; i++){
    //left stars
    for(int j=0; j<(n-i);j++){
        cout<<"*";
    }
    //spaces between
    for(int j=0; j<(n*2-2*(n-i));j++){
        cout<<" ";
    }
    //right stars
    for(int j=0; j<(n-i);j++){
        cout<<"*";
    }
    cout<<endl;
}
return 0;
}