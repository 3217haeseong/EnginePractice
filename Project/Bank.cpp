#include "Bank.h"
#include "Windows.h"

void Bank::Run()
{
	while (true)
	{
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
	char num = std::cin.get();

	if (num==1)
	{
		std::cout << "Success\n";
		NameInput();
		CreateAccount(name);
	}
	else if ((int)num==2)
	{
		int PassId;
		int PassBalance;

		PassId= IdInput();
		PassBalance = BalanceInput();
		Deposit(PassId,PassBalance);
	}
	else if ((int)num==3)
	{
		int PassId;
		int PassBalance;

		PassId = IdInput();
		PassBalance = BalanceInput();
		Withdraw(PassId, PassBalance);
	}
	else if ((int)num==4)
	{
		Inquire();
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
		std::cout << account[accountNum]->GetId() << "\n";
		std::cout << account[accountNum]->GetName() << "\n";
		std::cout << account[accountNum]->GetBalance() << "\n";
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
	std::cout << "�̸��� �Է����ּ��� : \n";
	std::cin.getline(name,1000);
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


