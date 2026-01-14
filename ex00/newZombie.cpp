#include "Zombie.hpp"

Zombie* Zombie::newZombie( std::string name)
{
	Zombie *ptr = new Zombie(name);
	return (ptr);
	
}
