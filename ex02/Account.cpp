#include "Account.hpp"
#include <time.h>
#include <iostream>

int Account::_nbAccounts = 0;
int	Account::_totalAmount = 0;
int	Account::_totalNbDeposits = 0;
int	Account::_totalNbWithdrawals = 0;

Account::Account(int initial_deposit)
{
	this->_accountIndex = Account::_nbAccounts;
	this->_amount = initial_deposit;
	Account::_totalAmount += initial_deposit;
	this->_nbDeposits = 0;
	this->_nbWithdrawals = 0;

	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";" 
    << "amount:" << this->_amount << ";"
    << "created" << std::endl;
	Account::_nbAccounts++;
}

Account::~Account()
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";" 
    << "amount:" << this->_amount << ";"
    << "closed" << std::endl;
}


void Account::_displayTimestamp()
{
	time_t rawtime;
	struct tm *timeinfo;
	char buffer [80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime (buffer,80,"[%Y%m%d_%H%M%S]",timeinfo);
	std::cout << buffer;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << Account::_nbAccounts << ";" 
    << "total:" << Account::_totalAmount << ";"
	<< "deposits:" << Account::_totalNbDeposits << ";"
    << "withdrawals:" << Account::_totalNbWithdrawals << std::endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";" 
    << "amount:" << this->_amount << ";"
	<< "deposits:" << _nbDeposits << ";"
	<< "withdrawals:" << _nbWithdrawals << std::endl;
}

void	Account::makeDeposit( int deposit )
{
	int previous;

	this->_nbDeposits++;
	Account::_totalNbDeposits++;
	previous = this->_amount;
	Account::_totalAmount += deposit;
	this->_amount += deposit;
	
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";"
	<< "p_amount:" << previous << ";"
	<< "deposit:" << deposit << ";"
	<< "amount:" << this->_amount << ";"
	<< "nb_deposits:" << Account::_nbDeposits << std::endl;
}

bool	Account::makeWithdrawal( int withdrawal )
{
	int previous;

	previous = this->_amount;

	_displayTimestamp();

	std::cout << " index:" << this->_accountIndex << ";"
	<< "p_amount:" << previous << ";";
	if (withdrawal > this->_amount)
	{
		std::cout << "withdrawal:refused" << std::endl;
		return (false);
	}
	Account::_totalNbWithdrawals++;
	Account::_totalAmount -= withdrawal;
	this->_nbWithdrawals++;
	this->_amount -= withdrawal;
	std::cout << "withdrawal:" << withdrawal << ";"
	<< "amount:" << this->_amount << ";"
	<< "nb_withdrawals:" << Account::_nbWithdrawals << std::endl;
	return (true);
}

int	Account::getNbAccounts( void )
{
	return(Account::_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(Account::_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(Account::_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(Account::_totalNbWithdrawals);
}

