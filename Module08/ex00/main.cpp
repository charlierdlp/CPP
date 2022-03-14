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
		if (easyfind(list1, 3))
			std::cout << "Element found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Element not found" << std::endl;
	}

	try
	{
		if (easyfind(list1, 3))
			std::cout << "Element found" << std::endl;
	}
	catch (std::exception &e)
	{
		std::cout << "Element not found" << std::endl;
	}
	
	return 0;
}