#include "Harl.hpp"
Harl::Harl()
{
	this->arr[0] = "DEBUG";
	this->arr[1] = "INFO";
	this->arr[2] = "WARNING";
	this->arr[3] = "ERROR";
	this->func[0] = &Harl::debug;
	this->func[1] = &Harl::info;
	this->func[2] = &Harl::warning;
	this->func[3] = &Harl::error;
}
void Harl::complain ( std::string level )
{
	for(int i = 0; i < 4; i++)
		if (level == arr[i])
			(this->*func[i])();
}

void Harl::debug( void )
{
	std::cout << "u ok?" << std::endl;
}
void Harl::info( void )
{
	std::cout << "i am currently ok" << std::endl;
}
void Harl::warning( void )
{
	std::cout << "I might be not ok" << std::endl;
}
void Harl::error( void )
{
	std::cout << "I am not ok" << std::endl;
}
