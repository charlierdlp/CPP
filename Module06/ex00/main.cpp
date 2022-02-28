// https://stackoverflow.com/questions/103512/why-use-static-castintx-instead-of-intx

#include "Scalar.hpp"

int main (int argc, char **argv)
{
	if (argc != 2)
	{
		std::cout << "Wrong arguments! " << std::endl;
		return 1;
	}
	Scalar	conversion(argv[1]);
	
	return 0;
}