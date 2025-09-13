#include "DivideAndRule.hpp"
#include <iostream>
#include <vector>

// struct Account
// {
// 	int id;
// 	int value;


// 	Account() :
// 		id(-1),
// 		value(0)
// 	{
	
// 	}

// 	friend std::ostream& operator << (std::ostream& p_os, const Account& p_account)
// 	{
// 		p_os << "[" << p_account.id << "] - [" << p_account.value << "]";
// 		return (p_os);
// 	}
// };

// struct Bank
// {
// 	private : 
// 		int liquidity;
// 		std::vector<Account *> clientAccounts;

// 	public :
// 		Bank() :
// 			liquidity(0)
// 		{

// 		}

// 	int	getLiquidity()
// 	{
// 		return (this->liquidity);
// 	}

// 	void	setLiquidity(int liquidity)
// 	{
// 		this->liquidity = liquidity;
// 	}

// 	friend std::ostream& operator << (std::ostream& p_os, const Bank& p_bank)
// 	{
// 		p_os << "Bank informations : " << std::endl;
// 		p_os << "Liquidity : " << p_bank.liquidity << std::endl;
// 		for (auto &clientAccount : p_bank.clientAccounts)
//         p_os << *clientAccount << std::endl;
// 		return (p_os);
// 	}
// };

// int Account::_nbAccounts = 0;
// int Account::_totalAmount = 0;
// int Account::_totalNbDeposits = 0;
// int Account::_totalNbWithdrawals = 0;

Account::Account(): id(-1), value(0)
{
}

Account::Account(int value, int id)
{
	_value = value;
	_id = id;
	std::cout << "The account n°" << _id << "makes a first deposit of" << _value << "galactical brouzoufs" << std::endl;
}

Account::~Account()
{
}

Bank::Bank() : liquidity(0)
{
}

Bank::Bank(int liquidity)
{
	_liquidity = liquidity;
	std::cout << "The Bank liquidity for depature is" << _liquidity << "galactical brouzoufs" << std::endl;
}

Bank::~Bank()
{
}

int	Bank::getLiquidity() const
{
	return (Bank::_liquidity);
}

void	Bank::setLiquidity(int liquidity)
{
	_liquidity = liquidity;
}

int	Account::getValue() const
{
	return (Account::_value);
}

void	Account::setValue(int value)
{
	_value = value;
}

int	Account::getId() const
{
	return (Account::_id);
}

void	Account::setId(int id)
{
	_id = id;
}



int main()
{
	Account accountA = Account();
	accountA._id = 0;
	accountA._value = 100;

	Account accountB = Account();
	accountB._id = 1;
	accountB._value = 100;

	Bank bank = Bank();
	bank._liquidity = 999;
	bank.clientAccounts.push_back(&accountA);
	bank.clientAccounts.push_back(&accountB);

	std::cout << "Account : " << std::endl;
	std::cout << accountA << std::endl;
	std::cout << accountB << std::endl;

	std::cout << " ----- " << std::endl;

	std::cout << "Bank : " << std::endl;
	std::cout << bank << std::endl;

	bank._liquidity -= 200;
	accountA._value += 400;

	std::cout << "Account : " << std::endl;
	std::cout << accountA << std::endl;
	std::cout << accountB << std::endl;

	std::cout << " ----- " << std::endl;

	std::cout << "Bank : " << std::endl;
	std::cout << bank << std::endl;

	return (0);
}
