#include "Zombie.hpp"
Zombie::Zombie() { this->name = "default"; }
Zombie::Zombie(std::string name) : name(name) {}
Zombie::~Zombie() { std::cout << this->name << " died." << std::endl; }
