// #include<iostream>
// #include<string>
// using namespace std;
// class employee{
//     public:
//     int id,salary;
//     string name,department;
//     void getdata()
//     {
//         cout<<"Enter ID: "; 
//         cin>> id;
//         cout<<"Enter name: "; 
//         cin>> name;
//         cout<<"Enter salary: "; 
//         cin>> salary;
//         cout<<"Enter department: "; 
//         cin>>department; 
//         cout<<endl;
//     }
    
//     void display()
//     {
//         cout<<"ID is "<<id<<endl;
//         cout<<"Name is "<<name<<endl;
//         cout<<"Salary is "<<salary<<endl;
//         cout<<"Department is "<<department<<endl;
//     }
// };
// int main() {
//     employee e1,e2;
//     e1.getdata();
//     e1.display();
//     e2.getdata();
//     e2.display();         
//     return 0;
// }
/*#include<iostream>
using std::cout;
using std::cin;

class Student
{
    std::string Name;
    int RollNo, Marks1,Marks2,Marks3;
public:
   void getdata()
   {
    cout<<"Enter Student name: ";
    std::getline(cin,Name);
    cout<<"Enter Roll no: ";
    cin>>RollNo;
    cout<<"Enter Marks\n";
    cout<<"Subject 1: ";
    cin>>Marks1;
    cout<<"Subject 2: ";
    cin>>Marks2;
    cout<<"Subject 3: ";
    cin>>Marks3;
   }

   void setdata(std::string name,int rollno, int marks1, int marks2, int marks3)
   {
    Name=name;
    RollNo=rollno;
    Marks1=marks1;
    Marks2=marks2;
    Marks3=marks3;
   }

   void display()
   {
    cout<<"Student name: "<<Name<<std::endl;
    cout<<"Roll no: "<<RollNo<<std::endl;
    cout<<"Subject 1 "<<Marks1<<std::endl;
    cout<<"Subject 2 "<<Marks2<<std::endl;
    cout<<"Subject 3 "<<Marks3;
   }
};

int main(){ 
Student s;
s.getdata();
cout<<"\nDisplaying student details \n"<<std::endl;
s.display();
return 0;
}*/


//WAP to increment the employee salaries on the basis of their designation (Manager-5000, General Manager-10000, CEO-20000, worker-2000). Use employee name, id, designation and salary as data member and inc_sal as member function (Use array of object).
/*#include<iostream>
using std::cout;
using std::cin;

class Employee
{
    
public:
    std::string EmployeeName, Designation;
    int ID,Salary=0;

    void inc_sal()
    {
        if(Designation=="Manager"||"manager")
        {
            (Salary+=5000);
        }

        else if (Designation=="General manager"||"General Manager"||"general manager")
        {
            (Salary+=10000);
        }

        else if (Designation=="CEO"||"ceo")
        {
            (Salary+=20000);
        }

        else
        {
            (Salary+=2000);
        }

    }
    void display()
    {
        cout<<"Employee name: "<<EmployeeName<<std::endl;
        cout<<"Designation: "<<Designation<<std::endl;
        cout<<"ID: "<<ID<<std::endl;
        cout<<"Salary after increment: "<<Salary;
    }   
        
        

};

int main(){ 

Employee employees[4]={
    {"Ryane Bose","CEO",24,20000},
    {"Jayden Bose","General Manager",25,10000},
    {"Raja Bose","Manager",26,5000},
    {"Jyoti Bose","Worker",27,1000}
};

for (int i = 0; i < 4; i++)
{
    employees[i].inc_sal();
    employees[i].display();
    cout<<"\n"<<std::endl;
}


return 0;
}*/

//Write a class bank, containing data member: Name of Depositor, A/c type, Type of A/c, Balance amount. Member function: To assign initial value, To deposit an amount, to withdraw an amount after checking the balance (which should be greater than Rs. 500) , To display name & balance
/*#include<iostream>
using std::cout;
using std::cin;

class Bank
{
    std::string Name,AccountType;
    int CurrentAmount=10000;
    int Withdraw, Balance;
public:
    void getdata()
    {
        cout<<"Enter Name: ";
        std::getline(cin,Name);
        cout<<"Account type: ";
        cin>>AccountType;
        cout<<"Current Amount: "<<CurrentAmount<<std::endl;
        cout<<"After Depositing: "<<(CurrentAmount+=5000)<<std::endl;
        cout<<"Enter amount to withdraw: ";
        cin>>Withdraw;
        Balance=CurrentAmount-Withdraw;
        cout<<"Balance amount: "<<Balance;
    }
};

int main(){ 
Bank customer;
customer.getdata();
return 0;
}*/

//WAP to define nested class ‘student_info’ which 15% contains data members such as name, roll number and sex and also consists of one more class ‘date’ ,whose data members are day, month and year. The data is to be read from the keyboard & displayed on the screen
#include<iostream>
using std::cout;
using std::cin;

class Student_info
{
    public:
    std::string Name;
    char Sex;
    int RollNo;
class Date   
{
    public:
    int Month,Year,Day;
};
    Date dob;
    
void getdata()
{
    cout<<"Student name: ";
    std::getline(cin,Name);
    cout<<"Gender: ";
    cin>>Sex;
    cout<<"Roll no: ";
    cin>>RollNo;
    cout<<"Enter Date of Birth: ";
    cin>>dob.Day>>dob.Month>>dob.Year;
}

void display()
{
    cout<<"Student Name: "<<Name<<std::endl;
    cout<<"Gender: "<<Sex<<std::endl;
    cout<<"Roll no: "<<RollNo<<std::endl;
    cout<<"Date of Birth "<<dob.Day<<"/"<<dob.Month<<"/"<<dob.Year;
}

};

int main(){ 
Student_info Ryane;
Ryane.getdata();
cout<<"\nDisplaying Details \n";
Ryane.display();
return 0;
}


//Friend Functions
#include<iostream>
using std::cout;
using std::cin;

class EquilateralTriangle
{
private:
    float a,circumference,area;
public:
    void setA(float length)
    {
        a=length;
        circumference=a*3;
        area=(1.73*a*a)/4;
    }
    //friend void PrintResult(EquilateralTriangle);

    friend class Homework;//Friend Class, friend functions or classes are not vice versa, can't be inherited.
};

class Homework{
public:
void PrintResult(EquilateralTriangle et)
{
    cout<<et.circumference<<std::endl;
    cout<<et.area;
}

};
//Declaring a friend function(inside the class, can have multiple friend functions)
int main()
{
    EquilateralTriangle et;
    et.setA(3);
    Homework h;
    h.PrintResult(et);

return 0;
}