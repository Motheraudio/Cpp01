#include "Zombie.hpp"
Zombie::Zombie() { this->name = "default"; }
void Zombie::announce()
{
  std::cout << this->name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}
Zombie::Zombie(std::string name) : name(name) {}
Zombie::~Zombie() { std::cout << this->name << " died." << std::endl; }
