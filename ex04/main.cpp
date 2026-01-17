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
	std::string outfile_name(argv[1]);
	outfile_name += ".replace";
	std::string oldnew[2];
	std::string buff;
	oldnew[0] = argv[2];
	oldnew[1] = argv[3];
	std::ifstream input(argv[1], std::ios_base::in);
	if (input.fail())
	{
		std::cout << "in file fail" << std::endl;
		return (1);
	}
	std::ofstream output (outfile_name.c_str(), std::ios_base::out);
	if (output.fail())
	{
		std::cout << "out file fail" << std::endl;
		return (1);
	}
	while(getline(input, buff))
	{
		ssize_t pos = buff.find(oldnew[0]);
		while (pos != (ssize_t)(std::string::npos))
		{
			buff.erase(pos, oldnew[0].length());
			buff.insert(pos, oldnew[1]);
			pos = buff.find(oldnew[0], pos);
		}
		output << buff;
		if (!input.eof())
			output << std::endl;
	}
}
