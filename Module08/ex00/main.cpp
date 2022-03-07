#include "easyfind.hpp"
#include <list>


int main()
{
	std::list<int> list1;

	list1.push_back(1);
	list1.push_back(2);
	list1.push_back(3);
	list1.push_back(4);
	list1.push_back(5);

	try
	{
		easyfind(list1, 3);
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}

	try
	{
		easyfind(list1, 6);
	}
	catch (std::exception &e)
	{
		std::cout << "Not found" << std::endl;
	}
	
	return 0;
}