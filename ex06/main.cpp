#include "Harl.hpp"
int main (int argc, char **argv)
{
	Harl Harl;
	if (argc != 2)
	{
		std::cout << "usage: ./harlFilter [log level]" << std::endl;
		return (1);
	}
	std::string level = argv[1];
	Harl.complain(level);
}
