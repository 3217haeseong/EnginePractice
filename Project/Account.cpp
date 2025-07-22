#include "Account.h"

int Account::GetBalance()
{
    return balance;
}

int Account::GetId()
{
    return id;
}

char* Account::GetName()
{
    return name;
}

void Account::SetBalance(int num)
{
    balance = num;
}
