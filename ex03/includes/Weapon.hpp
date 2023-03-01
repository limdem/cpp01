#ifndef WEAPON_HPP
# define WEAPON_HPP
# include <string>

class   Weapon
{
    std::string type;
        public:
    Weapon();
    Weapon(std::string);
    const std::string& getType();
    void    setType(std::string);
};
#endif