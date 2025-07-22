#pragma once
#include <iostream>
#include "Account.h"

class Bank
{
public:
	Bank()
	{
		isQuit = false;
		accountNum = 0;
		name = new char[100];
	}

	~Bank()
	{
		delete[] name;
	}

	void Run();
	void Quit();
	void Input();
	void CreateAccount(char* name);
	void Deposit(int id,int money );
	void Withdraw(int id, int money);
	void Inquire();
	void PrintGuide();
	void NameInput();
	int IdInput();
	int BalanceInput();

private:
	bool isQuit;
	int accountNum;
	Account* account[100];
	char* name;
};

