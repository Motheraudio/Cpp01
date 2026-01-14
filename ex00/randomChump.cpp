#include "Zombie.hpp"
void	Zombie::announce( void ) {std::cout << this->name << ": " << "BraiiiiiiinnnzzzZ..." <<std::endl;}
void	Zombie::randomChump( std::string name )
{
	Zombie n_zombie;
	n_zombie.name = name;
	n_zombie.announce();
}
