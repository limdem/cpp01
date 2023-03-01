#include "../includes/HumanB.hpp"
#include <stdio.h>

HumanB::HumanB(std::string name):weapon(NULL),name(name){}

void    HumanB::setWeapon(Weapon& weapon)
{
    this->weapon = &weapon;
}

void    HumanB::attack()
{
    if (this->weapon)
        std::cout << this->name << " attacks with " << this->weapon->getType() << std::endl;
    else
        std::cout << this->name << " attacks" << std::endl;
}