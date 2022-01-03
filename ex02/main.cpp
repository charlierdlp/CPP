#include <time.h>
#include <iostream>

void _displayTimestamp()
{
	time_t rawtime;
	struct tm *timeinfo;
	char buffer [80];

	time(&rawtime);
	timeinfo = localtime(&rawtime);
	strftime (buffer,80,"[%Y%m%d_%H%M%S]",timeinfo);
    std::cout << buffer;
}

int main()
{
    _displayTimestamp();
    std::cout << " index:" << 0 << ";" 
    << "amount:" << 42 << ";"
    << "created" << std::endl;
	return (0);
}