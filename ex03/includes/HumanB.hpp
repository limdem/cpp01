#ifndef HUMANB_HPP
# define HUMANB_HPP
# include "Weapon.hpp"
# include <iostream>
#include <string>

class   HumanB
{
    Weapon  *weapon;
    std::string name;
        public:
    HumanB(std::string);
    void    attack();
    void    setWeapon(Weapon &weapon);
};
#endif