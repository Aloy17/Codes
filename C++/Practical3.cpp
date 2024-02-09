// #include<iostream>
// #include<string.h>
// using namespace std;

// class AddString{
//     public:
//         char s1[25] , s2[25];
//         AddString(char str1[], char str2[])
//         {
//             strcpy(this->s1, str1);
//             strcpy(this->s2, str2);
//         }
//         void operator+()
//         {
//             cout << "\nConcatenation: " << strcat(s1, s2) << endl;
//         }
// };

// int main()
// {
//     char str1[] = "Hello ";
//     char str2[] = "World";

//     AddString a1(str1, str2);

//     +a1;
//     return 0;
// }

// #include<iostream>
// using namespace std;

// class Item{
//     public:
//     int x, y;
//         void set(){
//             cout<<"Enter x and y"<<endl;
//             cin>>x>>y;
//         }
//         void operator -(){
//             x = -x;
//             y = -y;
//         }
//         void display(){
//             cout<<"After Changing Signs: "<<x<<"  "<<y<<endl;
//         }
// };
// int main()
// {
//     Item a;
//     a.set();
//     -a;
//     a.display();
//     return 0;
// }
#include<iostream>
#include<string.h>
using namespace std;

class CompareString
{
    public:
        char str[25];
        CompareString(char str1[])
        {
            strcpy(this->str, str1);
        }
        int operator==(CompareString s2)
        {
            // cout<<str<<s2.str;
            if(strcmp(str, s2.str) == 0)
                return 1;
            else
                return 0;
        }
};
void compare(CompareString s1, CompareString s2)
{
    if(s1 == s2)
        cout<< s1.str << " is Equal to "
            << s2.str << endl;
    else{
        cout << s1.str << "is not equal to "
             << s2.str << endl;
    }
}

void testcase1()
{
    char str1[] = "Hi";
    char str2[] = "Hi";

    CompareString s1(str1);
    CompareString s2(str2);

    cout << "\n\nComapring \"" << s1.str << "\" and \""
         << s2.str << "\"" << endl;

    compare(s1, s2);
}

void testcase2()
{
    char str1[] = "Hello ";
    char str2[] = "Hi";

    CompareString s1(str1);
    CompareString s2(str2);

    cout << "\n\nComapring \"" << s1.str << "\" and \""
         << s2.str << "\"" << endl;

    compare(s1, s2);
}

int main()
{
    testcase1();
    testcase2();

    return 0;
}