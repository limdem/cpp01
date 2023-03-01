#include "../includes/Weapon.hpp"
#include <string>

Weapon::Weapon(){}

Weapon::Weapon(std::string type)
{
    this->type = type;
}

const std::string& Weapon::getType()
{
    return (this->type);
}

void    Weapon::setType(std::string type)
{
    this->type = type;
}