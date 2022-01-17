#include <iostream>
#include <fstream>

std::string replace(std::string line, std::string s1, std::string s2)
{

}

int main(int argc, char **argv)
{
	std::string s1;
	std::string s2;
	std::string line;
	std::string extension = ".replace";

	if (argc != 4)
	{
		std::cout << "Error: wrong arguments" << std::endl;
		return (1);
	}
	s1 = argv[1];
	s2 = argv[2];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Error: strings can't be empty" << std::endl;
	}
	std::ifstream src(argv[1]);
	std::ofstream dst(argv[1] + extension);
	while (getline(src, line))
	{
		line = replace(line, s1, s2);
	}
	

}