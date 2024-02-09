#include<iostream>
using std::cout;
using std::cin;

class Printer
{
private:
    std::string Name;
    int Paper;
public:
    
    Printer(std::string name,int paper)
    {
        Name=name;
        Paper=paper;
    }

    void print(std::string txt)
    {
        int Req_Paper=txt.length()/10;
        
        if(Req_Paper>Paper)
        {
            throw "No paper";
        }

        cout<<"Printing "<<txt<<std::endl;
        Paper-=Req_Paper;
    }
    
};

int main()
{
    Printer p("HpEprint",10);
    try
    {
      p.print("Mission Successful");
      p.print("Mission Successful");
      p.print("Mission Successful");
      p.print("Mission Successful");
    }

    catch (const char *txtException)
    {
        cout<<"Exception "<<txtException;
    }


    return 0;
}

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


