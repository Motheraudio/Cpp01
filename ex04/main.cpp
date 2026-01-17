#include <iostream>
#include <fstream>
#include <string>
int main (int argc, char **argv)
{
	if (argc != 4)
	{
		std::cout << "Unexpected amount of arguments" << std::endl;
		return (1);
	}
	std::string oldnew[2];
	oldnew[0] = argv[2];
	oldnew[1] = argv[3];
	std::ifstream input(argv[1]);
	if (input.fail())
	{
		std::cout << "read fail" << std::endl;
		return (1);
	}
	while(getline(input))
	
}
