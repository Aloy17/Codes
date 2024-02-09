// #include <iostream>
// using std::cin;
// using std::cout;

// int main()
// {
//     std::string str1, str2;
//     cout << "Enter first string : ";
//     std::getline(cin, str1);
//     cout << "Enter first string : ";
//     std::getline(cin, str2);
//     int a = str1.length();
//     int b = str2.length();


//     if(a>b)
//     {
//         cout<<str1<<" is bigger"<<std::endl;

//     }
//     else
//     {
//         cout<<str2<<" is bigger"<<std::endl;
//     }

//     std::string str3=str1+str2;
//     cout<<"Concatenated string: "<<str3;

//     return 0;
// }

// #include<iostream>
// using std::cout;
// using std::cin;

// int main()
// {
//     std::string str1;
//     cout<<"Enter a string: ";
//     std::getline(cin,str1);
//     cout<<"Your string is "<<str1<<std::endl;
//     cout<<"Select which character to remove from the string ";
//     int n;
//     cin>>n;
//     str1.erase(n,1);

//     cout<<"Your new string is: "<<str1;


//     return 0;
// }

// #include<iostream>
// using std::cout;
// using std::cin;

// int main()
// {
//     int n;
//     std::string str1;
//     cout<<"Enter a string: ";
//     std::getline(cin,str1);
//     cout<<"Your string before removing spaces: "<<str1<<std::endl;
//     n=str1.find(" ");
//     str1.erase(n,1);
//     cout<<"Your string after removing spaces: "<<str1;

//     return 0;
// }

// #include<iostream>
// #include<algorithm>
// using std::cout;
// using std::cin;

// int main()
// {
//     std::string str1;
//     cout<<"Enter a string: ";
//     std::getline(cin,str1);
//     cout<<"Your string is "<<str1<<std::endl;
//     std::reverse(str1.begin(),str1.end());
//     cout<<"Your reversed string is :"<<str1;
//     return 0;
// }

// #include<iostream>
// #include<sstream>
// using std::cout;
// using std::cin;

// int main()
// {
//     int words=0;
//     std::string str1,word;
//     cout<<"Enter a string: ";
//     std::getline(cin,str1);
//     std::istringstream iss(str1);
//     while(iss>>word)
//     {
//        ++words;
//     }
//     cout<<"Number of words in the string is: "<<words;

//     return 0;
// }

// #include<iostream>
// using std::cout;
// using std::cin;

// class Fibonacci
// {
//     int num1,num2;
//     public:
//     Fibonacci(int n1,int n2)
//     {
//         num1=n1;
//         num2=n2;
//     }

//     void generate(int n)
//     {
//         int next;
//         for (int i = 0; i <=n ; i++)
//         {
//             cout<<num1<<std::endl;
//             next=num1+num2;
//             num1=num2;
//             num2=next;
            
//         }
        
//     }

//     Fibonacci(const Fibonacci& Fib);
// };

//    Fibonacci::Fibonacci(const Fibonacci& Fib)
//     {
//         num1=Fib.num1;
//         num2=Fib.num2;
//     }
// int main()
// {
//     int n;
//     Fibonacci Fib(0,1);
//     cout<<"Enter the number of Fibonacci series: ";
//     cin>>n;
//     Fib.generate(n/2);
//     Fibonacci Fib1=Fib;
//     Fib.generate((n-n)/2);
    
//     return 0;
// }

// #include<iostream>
// using std::cout;
// using std::cin;

// class Num
// {
//     int a;
//     public:
//     void getdata()
//     {
//         cout<<"Enter a number: ";
//         cin>>a;
//     }
//     void setdata()
//     {
//         cout<<"Your number is : "<<a;
//     }

//     Num operator +(Num n2)
//     {
//         Num n3;
//         n3.a=a+ n2.a;
//     }
// };

// int main()
// {
//     Num n1,n2,n3;
//     n1.getdata();
//     n2.getdata();
//     n3=n1+n2;
//     n1.setdata();
//     cout<<std::endl;
//     n2.setdata();
//     cout<<std::endl;
//     n3.setdata();
//     return 0;
// }

// #include<iostream>
// #include<sstream>
// using namespace std;
// int main()
// {
//     int words=0;
//     string str1,word;
//     getline(cin,str1);
//     istringstream iss(str1);
//     while(iss>>word)
//     {
//         ++words;
//     }
   
//     cout<<words;
//     return 0;
// }
// #include<iostream>
// #include<fstream>
// #include<unistd.h> // Include the necessary header file for the sleep function
// using std::cout;
// using std::cin;

// int main()
// {
//     int n;
//     cout<<"Enter a number";
//     cin>>n;
//     sleep(5); // Introduce a 1-second delay
//     cout<<n;
//     return 0;
// }

/*#include<iostream>
using namespace std;

class Fibonacci
{
    int current,next;
    public:
    Fibonacci(int c=0,int n=1)
    {
        current=c;
        next=n;
    }

    Fibonacci(const Fibonacci &f1)
    {
        current=f1.next;
        next=f1.current+f1.next;
    }

    int display()const
    {
        return current;
    }
};

int main()
{
    Fibonacci fib;
    for (int i = 0; i < 10; i++)
    {
        cout<<fib.display()<<endl;
        fib=Fibonacci(fib);
    }
    
return 0;
}
*/

#include<iostream>
using namespace std;

int Factorial(int n)
{
    if (n==1)
    {
        return 1;
    }
    return n*Factorial(n-1);
}

int main()
{
int a;
cin>>a;
cout<<Factorial(a);
return 0;
}