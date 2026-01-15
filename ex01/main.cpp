#include "Zombie.hpp"
int main()
{
  Zombie zombie;
  Zombie *ptr = zombie.zombieHorde(10, "Mike");
  for (int i = 0; i < 10; i++)
    ptr[i].announce();
  delete (ptr);
}
