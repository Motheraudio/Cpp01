#include "Zombie.hpp"
Zombie::Zombie(){this->name = "";}
Zombie::Zombie(std::string name): name(name){}
Zombie::~Zombie()
{
	if (!(this->name.empty()))
		std::cout << this->name << " died." << std::endl;
}

