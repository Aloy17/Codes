#include<iostream>
using namespace std;
int main(){
    int a,b=0;
    cout<<"Enter a number ";
    cin>>a;
    for(;a>=1;--a)
    {b=b+a;}
    cout<<b;
    return 0;
}