#include "../includes/Zombie.hpp"
#include <string>
#include <iostream>

Zombie* zombieHorde( int N, std::string name)
{
    Zombie *zomb_horde;
    Zombie  zomb;
    int i;
    
    zomb.set_name(name);
    i = 0;
    zomb_horde = new (std::nothrow) Zombie[N];
    if (!zomb_horde)
        return (NULL);
    while (i < N)
    {
        zomb_horde[i] = zomb;
        i++;
    }
    return (zomb_horde);
}