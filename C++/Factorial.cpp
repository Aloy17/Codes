// #include<iostream>
// using namespace std;
// int main(){ 
// int a,b=1;

// cin>>a;

// for(;a>=1;--a)
// {b*=a;}
// cout<<b;
// return 0;
// }




#include<iostream>
using namespace std;

int factorial(int a)
{
    if(a<=1)
    {
        return 1;
    }
    return a*factorial(a-1);
};

int main()
{
int n;
cin>>n;
try
{
    if(n<0)
    {throw (n);}
    else
    {
    cout<<factorial(n);
    }
}
catch(int n)//for multiple errors, either create multiple catch blocks. OR create catch(...) each dot signifies each possible error
{
    cout<<"Number is negative ("<<n<<")";
}
return 0;
}


