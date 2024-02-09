#include <iostream>
#include <stdlib.h>
using namespace std;
int main()
{
  string y, n, a, b;

  cout << "Hello, this is a simple test to check if you're gay,\n are you ready to take the test?" << endl
       << endl;

FAIL:
  cout << "Answer in Yes or No only" << endl;
  cin >> y;

  if (y == "Yes" || y == "yes")
  {
    cout << "Good, now for the rules" << endl;
  GAY:
    cout << "You'll be asked a series of questions, you need to answer them with either yes or no,do you understand?  " << endl
         << endl;
    cin >> y;

    if (y == "Yes" || y == "yes")
    {
      cout << "Good\n here we go ;)\n What's your name?" << endl;
      cin >> a;
      cout << "Ugly name you should change it, anyways do you have long hair?\n";
      cin >> a;
      if (a == "Yes" || a == "yes")
        cout << "You're Gay";
    }
    else
    {
      cout << "Hope you die";
    }
  }

  else if (y == "No" || y == "no")
  {
    cout << "IDC you're taking the test. ";
    goto GAY;
  }

  else
  {
    cout << "Wrong answer, try again \n";
    goto FAIL;
  }

  system("pause");
  return 0;
}