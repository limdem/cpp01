#include "../includes/Zombie.hpp"
#include <iostream>
#include <string>

Zombie::~Zombie()
{
    std::cout << name << " has been destroyed" << std::endl;
}

void    Zombie::announce(void)
{
    std::cout << name << ": BraiiiiiiinnnzzzZ..." << std::endl;
}

void    Zombie::set_name(std::string name)
{
    this->name = name;
}