//
//Marnie Rimes
//HW05 ex05 Liang 12.25
//
#include<iostream>
#include<string>
#include<vector>

//Account class
class Account
{
private:
	string name;
	int id;
	double balance;
	double static annualInterestRate;
public:
	//default constructor
	Account() 
	{
		id = 0;
		balance = 0;
		annualInterestRate = 0;
	}
	//constructor with name, id, and balance
	Account(string name, int id, double balance)
	{
		
	}
	vector<Transaction> transactions;
	void getMonthlyInterestRate()
	{
		return annualInterestRate % 12;
	}
	void withdraw(amount)
	{
		balance -= amount;
	}
	void deposit(amount)
	{
		balance += amount;
	}
};

//Transaction class
class Transaction
{
private:
	
	char type;
	double amount;
	double balance;
	string description;

public:
	Transaction(char type, double amount, double balance, string description)
	{

	}
};

#include<iostream>
using namespace std;

int main()
{
	Account a
}