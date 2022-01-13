#include "Karen.hpp"

int level(std::string level)
{
	if (!level.compare("DEBUG"))
		return (0);
	else if (!level.compare("INFO"))
		return (1);
	else if (!level.compare("WARNING"))
		return (2);
	else if (!level.compare("ERROR"))
		return (3);
	return (-1);
}

int main (int argc, char **argv)
{
	Karen Becky;


	if (argc != 2)
	{
		std::cout << "Wrong arguments, don't be a Karen!" << std::endl;
		return(1);
	}
	switch (level(argv[1]))
	{
		case 0:
			Becky.complain("DEBUG");
		case 1:
			Becky.complain("INFO");
		case 2:
			Becky.complain("WARNING");
		case 3:
			Becky.complain("ERROR");
			break ;
		default:
			std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
	}
	return(0);
}