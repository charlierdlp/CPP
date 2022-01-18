#include <iostream>
#include <fstream>

std::string replace(std::string line, std::string s1, std::string s2)
{
	for (int i = 0; line[i]; i++)
	{
		i = line.find(s1, i);
		if (i == -1)
			break ;
		line.erase(i, s1.length());
		line.insert(i, s2);
		i += s2.length();
	}
	return (line);
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
	s1 = argv[2];
	s2 = argv[3];
	if (s1.empty() || s2.empty())
	{
		std::cout << "Error: strings can't be empty" << std::endl;
		return (1);
	}
	std::ifstream src(argv[1]);
	std::ofstream dst(argv[1] + extension);
	while (getline(src, line))
	{
		dst << replace(line, s1, s2) << std::endl;
	}
	return (0);
}