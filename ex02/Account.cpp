#include "Account.hpp"
#include <time.h>
#include <iostream>

Account::Account(int initial_deposit)
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";" 
    << "amount:" << this->_amount << ";"
    << "created" << std::endl;
}

Account::~Account()
{

}


void _displayTimestamp()
{
	time_t rawtime;
	struct tm *timeinfo;
	char buffer [80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime (buffer,80,"[%Y%m%d_%H%M%S]",timeinfo);
	std::cout << buffer << std::endl;
}

void Account::displayAccountsInfos()
{
	_displayTimestamp();
	std::cout << " accounts:" << _nbAccounts << ";" 
    << "total:" << _totalAmount << ";"
	<< "deposits:" << _totalAmount << ";"
    << "created" << std::endl;
}

void Account::displayStatus() const
{
	_displayTimestamp();
	std::cout << " index:" << this->_accountIndex << ";" 
    << "amount:" << this->_amount << ";"
	<< "deposits:" << this->_nbDeposits << ";"
	<< "withdrawals:" << this->_nbWithdrawals << std::endl;
}

int	Account::getNbAccounts( void )
{
	return(_nbAccounts);
}

int	Account::getTotalAmount( void )
{
	return(_totalAmount);
}

int	Account::getNbDeposits( void )
{
	return(_totalNbDeposits);
}

int	Account::getNbWithdrawals( void )
{
	return(_totalNbWithdrawals);
}

