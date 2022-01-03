#include "Account.hpp"
#include <time.h>

Account::Account(int initial_deposit)
{
	_displayTimestamp();
}

Account::~Account()
{

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

void _displayTimestamp()
{
	time_t rawtime;
	struct tm *timeinfo;
	char buffer [80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime (buffer,80,"[%Y%m%d_]",timeinfo);
}
