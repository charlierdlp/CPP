#include "tools.hpp"

int main()
{
	int x = 42;
	int y = 24;
	float j = 42.42;
	float k = 24.24;

	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "j = " << j << std::endl;
	std::cout << "k = " << k << std::endl;

	std::cout << std::endl;

	::swap(x, y);
	::swap(j, k);
	std::cout << "x = " << x << std::endl;
	std::cout << "y = " << y << std::endl;
	std::cout << "j = " << j << std::endl;
	std::cout << "k = " << k << std::endl;
	std::cout << "min = " << ::min(x, y) << std::endl;
	std::cout << "max = " << ::max(x, y) << std::endl;
	std::cout << "min = " << ::min(j, k) << std::endl;
	std::cout << "max = " << ::max(j, k) << std::endl;
}