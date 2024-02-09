//  practical 1. code 1#include<iostream>
// using namespace std;
// int main(){ 
// float c,f;
// cout<<"Enter temperature in Celsius ";
// cin>>c;
// f=((c*9)/5)+32;
// cout<<"Temperature in Fahrenheit is "<<f<<"F";
// return 0;
// }


// practical 2. code 2 
// #include<iostream>
// using namespace std;
// int main(){ 
// int p,r,t,s;
// cout<<"Enter principal amount ";
// cin>>p;
// cout<<"Enter rate p.a ";
// cin>>r;
// cout<<"Enter time (in years) ";
// cin>>t;
// s=(p*r*t)/100;
// cout<<"Simple interest is "<<s;
// return 0;
// }


// practical 2. code 1 
// #include<iostream>
// using namespace std;
// int main(){ 
// int n;
// cout<<"Enter a number ";
// cin>>n;

// if(n>0)
// {cout<<"Positive number ";}

// else if(n<0)
// {cout<<"Negative number ";}

// else
// cout<<"Number is zero ";
// return 0;
// }

//  practical 2. code 2
// #include<iostream>
// using namespace std;
// int main(){ 
// int n;
// cout<<"Enter a number ";
// cin>>n;

// if(n%2==0)
// {cout<<"Even number";}

// else
// {cout<<"Odd number";}
// return 0;
// }

// practical 2. code 3
// #include<iostream>
// using namespace std;
// int main(){ 
// int a,b,c,d,e,r;
// cout<<"Grade calculator "<<endl;
// cout<<"Enter marks of Maths (out of 80)  ";
// cin>>a;
// cout<<"Enter marks of Science (out of 80) ";
// cin>>b;
// cout<<"Enter marks of English (out of 80) ";
// cin>>c;
// cout<<"Enter marks of Social Science (out of 80) ";
// cin>>d;
// cout<<"Enter marks of French (out of 80) ";
// cin>>e;
// r=((a+b+c+d+e)*100)/400;

// if(r>=90)
// cout<<"Grade A";

// else if (r>=75)
// cout<<"Grade B";

// else if(r>=65)
// cout<<"Grade C";

// else
// cout<<"Fail";


// return 0;
// }

// practical 2. code 4
// #include<iostream>
// using namespace std;
// int main(){
// float num1,num2,a,b;

// //Enter the numbers and operation
// cout<<"MINI CALCULATOR"<<endl<<endl;
// cout<<"Enter 2 numbers"<<endl;
// cin>>num1>>num2;
// cout<<endl;
// cout<<"Choose an operation"<<endl;
// cout<<"1 for addition, 2 for subtraction, 3 for product, 4 for quotient"<<endl<<endl;
// cin>>a;

// //If else statements
// if (a==1)
// {
//     b=num1+num2;
//     cout<<"Sum = "<<b;
// }
// else if (a==2)
// {
//     b=num1-num2;
//     cout<<"Difference = "<<b;
// }
// else if (a==3)
// {
//     b=num1*num2;
//     cout<<"Product = "<<b;
// }
// else if (a==4)
// {
//     b=num1/num2;
//     cout<<"Quotient = "<<b;
// }
// else
// {
//     cout<<"Wrong input";
// }
// cout<<endl;
    
//     return 0;
// }


// practical 3. code 1
// #include<iostream>
// using namespace std;
// int main(){ 
// int a,b=1;
// cout<<"Enter a number ";
// cin>>a;
// for(;a>=1;--a)
// b=b*a;
// cout<<"The factorial is "<<b;
// return 0;
// }


// practical 3 code 2
// #include<iostream>
// using namespace std;
// int main(){ 
//     int n,c;
//     cout<<"Enter a number ";
//     cin>>n;
//     for(int i=1;i<=n;++i)
//     {if(n%i==0)
//     {c++;}
//     }
    
//     if(c==2)
//     cout<<"Prime number ";

//     else
//     cout<<"Not a prime number";
// return 0;
// }


// practical 3 code 3
// #include<iostream>
// using namespace std;
// int main(){ 
// int a,b,c,d,n;
// cout<<"Following are Armstrong numbers from 1 to 1000"<<endl;
// for(n=1;n<=1000;++n)
//   {
//     if(n<10)
//    {cout<<n<<" ";}
  
//    else 
//   {a=n%10;
//    b=(n%100-a)/10;
//    c=(n%1000-b)/100;
//    d=((a*a*a)+(b*b*b)+(c*c*c));
   
//    if(d==n)
//    cout<<n<<" ";}
//    }
// return 0;
// }


// 
