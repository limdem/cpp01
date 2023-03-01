#include "../includes/Zombie.hpp"
#include <iostream>

void    randomChump(std::string name)
{
    Zombie  zomb;

    zomb.set_name(name);
    zomb.announce();
}

void    stack_zombie()
{
    std::cout << "Creation of a Zombie in the stack" << std::endl;
    randomChump("Foo");
}

Zombie* newZombie(std::string name)
{
    Zombie  *zomb;

    zomb = new (std::nothrow) Zombie;
    if (!zomb)
        return (NULL);
    zomb->set_name(name);
    return (zomb);
}

int    heap_zombie()
{
    Zombie  *zomb;

    std::cout << "Creation of a Zombie in the heap" << std::endl;
    zomb = newZombie("Bar");
    if (!zomb)
        return (1);
    zomb->announce();
    delete zomb;
    return (0);
}

int main(void)
{
    stack_zombie();
    if (heap_zombie())
        return (1);
    return (0);
}