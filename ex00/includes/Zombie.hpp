#ifndef ZOMBIE_HPP
# define ZOMBIE_HPP
# include <string>

class Zombie
{
        std::string name;
    public:
        ~Zombie();
        void    announce(void);
        void    set_name(std::string);
};
#endif