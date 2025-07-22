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
	}

	void Run();
	void Quit();
	void Input();
	void CreateAccount(char* name);
	bool Deposit(int money );
	bool Withdraw(int money);
	void Inquire();

private:
	bool isQuit;
	int accountNum;
	Account* account[100];
};

