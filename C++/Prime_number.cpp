// #include<iostream>
// #include<stdlib.h>
// using namespace std;
// int main(){
//   int a,b,c;
//   cout<<"Prime number check"<<endl<<endl;
//   cout<<"Enter a number ";
//   cin>>a;
//   for(b=1;b<=a;b++)
//   {
//     if(a%b==0)
//     { c++; }
//   }
//     if (c==2)
//     {     cout<<"Prime number"<<endl;   }
//     else
//     {    cout<<"Not a prime number"<<endl;    }

//   system("pause");
//   return 0;
// }

#include <iostream>
#include <string>
#include <vector>

class Account
{
protected:
  std::string accountNumber;
  double balance;

public:
  Account(const std::string &accountNumber, double balance)
      : accountNumber(accountNumber), balance(balance) {}

  virtual void deposit(double amount)
  {
    if (amount <= 0)
    {
      throw std::invalid_argument("Invalid deposit amount");
    }
    balance += amount;
  }

  virtual void withdraw(double amount)
  {
    if (amount <= 0 || amount > balance)
    {
      throw std::invalid_argument("Invalid withdrawal amount");
    }
    balance -= amount;
  }

  virtual void displayBalance() const
  {
    std::cout << "Account Number: " << accountNumber << std::endl;
    std::cout << "Balance: " << balance << std::endl;
  }
};

class SavingsAccount : public Account
{
private:
  double interestRate;

public:
  SavingsAccount(const std::string &accountNumber, double balance, double interestRate)
      : Account(accountNumber, balance), interestRate(interestRate) {}

  void applyInterest()
  {
    double interest = balance * interestRate;
    balance += interest;
  }
};

class CurrentAccount : public Account
{
private:
  double overdraftLimit;

public:
  CurrentAccount(const std::string &accountNumber, double balance, double overdraftLimit)
      : Account(accountNumber, balance), overdraftLimit(overdraftLimit) {}

  void withdraw(double amount) override
  {
    if (amount <= 0 || amount > balance + overdraftLimit)
    {
      throw std::invalid_argument("Invalid withdrawal amount");
    }
    balance -= amount;
  }
};

int main()
{
  std::vector<Account *> accounts;
  accounts.push_back(new SavingsAccount("SA001", 5000, 0.05));
  accounts.push_back(new CurrentAccount("CA001", 10000, 5000));

  try
  {
    accounts[0]->deposit(1000);
    accounts[0]->displayBalance();

    accounts[1]->withdraw(15000);
    accounts[1]->displayBalance();
  }
  catch (const std::exception &e)
  {
    std::cout << "Exception: " << e.what() << std::endl;
  }

  for (auto account : accounts)
  {
    delete account;
  }

  return 0;
}
