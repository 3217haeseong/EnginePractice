#include "Bank.h"
#include "Windows.h"

void Bank::Run()
{
	while (true)
	{
		if (isQuit)
		{
			break;
		}

		Input();
	}
}

void Bank::Quit()
{
	isQuit = true;
}

void Bank::Input()
{
	if ((GetAsyncKeyState('Q') & 0x8000) || (GetAsyncKeyState('q') & 0x8000))
	{
		Quit();
	}
	else if (GetAsyncKeyState(VK_NUMPAD1) & 0x8000)
	{
		CreateAccount();
	}
	else if (GetAsyncKeyState(VK_NUMPAD2) & 0x8000)
	{
		Deposit();
	}
	else if (GetAsyncKeyState(VK_NUMPAD3) & 0x8000)
	{
		Withdraw();
	}
	else if (GetAsyncKeyState(VK_NUMPAD4) & 0x8000)
	{
		Inquire();
	}
}

void Bank::CreateAccount()
{
}

bool Bank::Deposit()
{
	return false;
}

bool Bank::Withdraw()
{
	return false;
}

void Bank::Inquire()
{
	
}
