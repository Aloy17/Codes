/*#include<iostream>
#include<fstream>
using std::cout;
using std::cin;
//Creating a text file using C++
int main(){ 
std::fstream myFile;
/*myFile.open("Ryane.txt",std::ios::out);

if(myFile.is_open())
{
    myFile<<"Success";
    myFile.close();
}

//The latest command will override the text file, so use append
myFile.open("Ryane.txt",std::ios::out);
if(myFile.is_open())
{
    myFile<<"Success1";
    myFile.close();
}

myFile.open("Ryane.txt", std::ios::in);
if(myFile.is_open())
{
    std::string line;
    while (getline(myFile,line))
    {
        cout<<line<<std::endl;
    }
    myFile.close();
    
}
return 0;
}*/

#include<iostream>
#include<fstream>
using std::cout;
using std::cin;

int main()
{ 
    /*std::string st="HEY HEY HEY"; //Created a string
    std::ofstream out("Ryane.txt");//Created a file
    out<<st;//Entered a string within the file*/
    
    //Taking lines from a text and storing it in st2, then displaying it.
    std::string st2;
    std::ifstream in("Ryane.txt");
    std::getline(in,st2);
    cout<<st2;

    
    
    
    return 0;
}

#include<iostream>
#include<fstream>
using std::cout;
using std::cin;

//Combining both
int main()
{
    //Entered a value of string in str, and sent it to the Txt file
    std::string str;
    std::ofstream out("Ryane.txt");
    cout<<"Enter your name: ";
    cin>>str;
    out<<"Hello I'm "+str;
    out.close();//Close the Txt file

    std::string content;
    std::ifstream in("Ryane.txt");
    std::getline(in,content);
    cout<<content;




return 0;
}


#include<iostream>
#include<fstream>
using std::cout;
using std::cin;

int main()
{
    std::ofstream out;
    out.open("Ryane.txt");
    out<<"This is Ryane ";
    out<<"I'm 19";
    out.close();

    std::ifstream in;
    std::string str,str2;
    in.open("Ryane.txt");
    // std::getline(in,str); ---->Using functions
    // cout<<str;
    // while (in.eof()==0)------>Using while loop
    // {
    //     std::getline(in,str);
    //     cout<<str<<std::endl;
    // }
    
    in.close();

    return 0;
}