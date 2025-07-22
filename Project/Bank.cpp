#include "Bank.h"
#include "Windows.h"
#include <stdlib.h>

void Bank::Run()
{
	while (true)
	{
		if (isQuit)
		{
			break;
		}

		PrintGuide();
	    Input();
	}
}

void Bank::Quit()
{
	isQuit = true;
}

void Bank::Input()
{
	char num;

	std::cin >> num;
	std::cin.ignore();

	if (num == 'Q' || num == 'q')
	{
		// ����. 
		Quit();
	}else if ( (num-'0') == 1)
	{
		NameInput();
		CreateAccount(name);
	}
	else if ( (num-'0') == 2)
	{
		int PassId;
		int PassBalance;

		PassId= IdInput();
		PassBalance = BalanceInput();
		Deposit(PassId,PassBalance);
	}
	else if ((num - '0') ==3)
	{
		int PassId;
		int PassBalance;

		PassId = IdInput();
		PassBalance = BalanceInput();
		Withdraw(PassId, PassBalance);
	}
	else if ((num - '0') ==4)
	{
		Inquire();
	} else {
		return;
	}
}

void Bank::CreateAccount(char* name)
{
	account[accountNum] = new Account(accountNum, name);
	accountNum++;
}

void Bank::Deposit(int id, int money)
{
	int num;
	num = account[id]->GetBalance() + money;
	account[id]->SetBalance(num);
}

void Bank::Withdraw(int id, int money)
{
	int num;
	num = account[id]->GetBalance() - money;
	account[id]->SetBalance(num);
}


void Bank::Inquire()
{
	for (int ix = 0; ix < accountNum; ix++)
	{
		std::cout << account[ix]->GetId() << "\n";
		std::cout << account[ix]->GetName() << "\n";
		std::cout << account[ix]->GetBalance() << "\n";
	}
}

void Bank::PrintGuide()
{
	std::cout << "���� �� �ϳ��� �������ּ���.\n";
	std::cout << "1.���� ���� (CreateAccount)\n";
	std::cout << "2.�Ա� (Deposit)\n";
	std::cout << "3.��� (Withdraw)\n";
	std::cout << "4.��ü �� �ܾ� ��ȸ (Inquire)\n";
}

void Bank::NameInput()
{
	std::cout << "�̸��� �Է����ּ��� : ";
	std::cin.getline(name,100);
}

int Bank::IdInput()
{
	int num;

	std::cout << "Id�� �Է����ּ��� : \n";
	std::cin >> num;

	return num;
}

int Bank::BalanceInput()
{
	int num;

	std::cout << "Balance�� �Է����ּ��� : \n";
	std::cin >> num;

	return num;
}


