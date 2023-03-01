#include "../includes/HumanA.hpp"
#include <iostream>
#include <string>


HumanA::HumanA(std::string name, Weapon &weapon):weapon(weapon),name(name){}

void    HumanA::attack()
{
    std::cout << this->name << " attacks with " << this->weapon.getType() << std::endl;
}