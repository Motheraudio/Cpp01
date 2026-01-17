#include "HumanB.hpp"
HumanB::HumanB(std::string name): name(name), weapon(NULL){}
void HumanB::attack() {
	if (weapon == NULL)
	{
		std::cout << this->name << " is unarmed. RIP!" << std::endl;
		return ;
	}
	std::cout << this->name 
		<< " attacks with their "
		<< this->weapon->getType()
		<< std::endl;
}
void HumanB::setWeapon(Weapon &weapon)
{
	this->weapon = &weapon;
}
