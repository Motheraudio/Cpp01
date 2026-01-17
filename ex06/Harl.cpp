#include "Harl.hpp"
Harl::Harl()
{
	this->arr[0] = "DEBUG";
	this->arr[1] = "INFO";
	this->arr[2] = "WARNING";
	this->arr[3] = "ERROR";
}
void Harl::complain ( std::string &level )
{
	int i = 0;
	while (i < 4)
	{
		if (level == arr[i])
			break;
		i++;
	}
	switch(i){
		case 0:
			{
				this->debug();
				i++;
			}
		case 1:
			{
				this->info();
				i++;
			}
		case 2:
			{
				this->warning();
				i++;
			}
		case 3:
			{
				this->error();
				break;
			}
		default:
			{
				std::cout
					<< "[ Probably complaining about insignificant problems ]"
					<< std::endl;
			}
		
	}
}

void Harl::debug( void )
{
	std::cout << "[ DEBUG ]" << std::endl << "u ok?" << std::endl << std::endl;
}
void Harl::info( void )
{
	std::cout << "[ INFO ]" << std::endl << "i am currently ok" << std::endl << std::endl;
}
void Harl::warning( void )
{
	std::cout << "[ WARNING ]" << std::endl << "I might be not ok" << std::endl << std::endl;
}
void Harl::error( void )
{
	std::cout << "[ ERROR ]" << std::endl << "I am not ok" << std::endl << std::endl;
}
