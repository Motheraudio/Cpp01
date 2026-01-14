#include "Zombie.hpp"
int main()
{
	Zombie zombie;
	Zombie *ptr;
	zombie.randomChump("hello");
	ptr = zombie.newZombie("Alloc");
	ptr->announce();
	delete (ptr);
}
