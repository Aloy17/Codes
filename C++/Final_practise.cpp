// #include<iostream>
// #include<algorithm>
// using namespace std;

// int main()
// {
//     int n;
//     string str1, str2;
//     getline(cin,str1);
//     str1.erase(remove(str1.begin(),str1.end(),' '), str1.end());
//     cout<<str1;
//     return 0;
// }

// #include<iostream>
// #include<sstream>
// using namespace std;

// int main()
// {
//     int words=0;
//     string str,word;
//     getline(cin,str);
//     istringstream iss(str);
//     while(iss>>word)
//     {
//         words++;
//     }
//     cout<<words;
//     return 0;
// }


// Write a class bank, containing data member: Name of Depositor, A/c type, Balance amount. Member function: To assign initial value, To deposit an amount, to withdraw an amount after checking the balance (which should be greater than Rs. 500) , To display name & balance. 
// #include <iostream>
// using namespace std;

// class Bank
// {
//     string Deponame, Actype;
//     int Withdraw;

//     public:
//     int balance=10000;
//     void getdata()
//     {
//         cout<<"Enter name: ";
//         cin>>Deponame;

//         cout<<"Account type: ";
//         cin>>Actype;

//     }

//     void setdata(string name,string ac, int withdraw)
//     {
//         Deponame=name;
//         Actype=ac;
//         Withdraw=withdraw;
//     }

//     void display()
//     {
//         cout<<Deponame<<endl;
//         cout<<Actype<<endl;
//         cout<<balance;

//     }

//     void withdraw()
//     {
//         cout<<"Amount you'd like to withdraw?: ";
//         cin>>Withdraw;

//         if(Withdraw<balance)
//         {
//             balance-=Withdraw;
//         }

//         else
//         {
//             cout<<"Insufficient balance";
//         }
//     }

// };

// int main()
// {
//     Bank b;
//     b.getdata();
//     b.withdraw();
//     b.display();
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Animal
// {
//     public:
//     void display()
//     {
//         cout<<"This is an animal";
//     }
// };

// class Dog : public Animal
// {
//     public:
//     void bark()
//     {
//         cout<<"This animal can bark";
//     }
// };

// class Cat :  public Dog
// {
//     public:
//     void meow()
//     {
//         cout<<"This animal cannot bark as it's a cat";
//     }
// };
// int main()
// {
//     Cat c1;
//     c1.display();
//     cout<<"\n";
//     c1.bark();
//     cout<<"\n";
//     c1.meow();
//     return 0;
// }

/*#include<iostream>
using namespace std;

class base
{
    public:
    int a,b;

    base(int x,int y)
    {
        a=x;
        b=y;
    }

    base (const base &b1)
    {
        a=b1.a;
        b=b1.b;
    }

    void display()
    {
        cout<<"A = "<<a<<endl;
        cout<<"B = "<<b<<endl;
    }
};
int main()
{
    base b(1,2);
    base b1=b;
    b.display();
    b1.display();
    return 0;
}*/

// #include<iostream>
// using namespace std;

// class Fibonacci 
// {
//     int current, next;

// public:
//     // Regular constructor
//     Fibonacci(int c = 0, int n = 1) 
//     {
//         current=c;
//         next=n;
//     }
//     // Copy constructor
//     Fibonacci(const Fibonacci &old_fib) {
//         current = old_fib.next;
//         next = old_fib.current + old_fib.next;
//     }

//     int getCurrent() const {
//         return current;
//     }
// };

// int main() {
//     Fibonacci fib;  // Start with 0 and 1

//     for(int i = 0; i < 10; i++) {
//         cout << fib.getCurrent() << " ";
//         fib=Fibonacci(fib);  // Generate next number in the series
//     }

//     return 0;
// }

/*#include<iostream>
using namespace std;

static int c=0;
class base
{

    public:
    base()
    {
        c++;
        cout<<"Constructor no "<<c<<endl;
    }

    ~base()
    {
        cout<<"I AM A DESTRUCTOR"<<endl;
    }
};

int main()
{
    base b1,b2,b3;
    return 0;
}
*/



#include <iostream>
using namespace std;

class Animal {
public:
    virtual void sound() {
        cout << "The animal makes a sound" << endl;
    }
};

class Dog : public Animal {
public:
    void sound() override {
        cout << "The dog barks" << endl;
    }
};

int main() {
    Dog dog;
    Animal& animal=dog;
    animal.sound();
    return 0;
}