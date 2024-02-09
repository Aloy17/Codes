#include<iostream>
using namespace std;
int main(){
    int first=0,second=1,next,num,i;
    cout<<"FIBONACCI CREATOR"<<endl;
    cout<<"How many fibonacci numbers ";
    cin>>num;
    for(i=0;i<=num;++i)
    {cout<<first<<endl;
    next=first+second; 
    first=second;
    second=next;
    }
    return 0;
}


