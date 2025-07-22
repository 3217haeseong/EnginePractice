#pragma once

class Account
{
public:
	Account(int accountNum, char* name)
	{
		id = accountNum;

		size_t length = strlen(name) + 1;
		this->name = new char[length];
		strcpy_s(this->name, length, name);
		
		balance = 0;
	}

	~Account()
	{
		
	}

private:
	int id;
	char* name;
	int balance;
};