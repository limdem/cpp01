#include "../includes/Zombie.hpp"
#include <stdio.h>
#include <sstream>

#define NBR 5

int main()
{
    Zombie  *zomb_horde;
    int i;

    if (NBR < 0)
        return (1);
    zomb_horde = zombieHorde(NBR, "Foo");
    if (!zomb_horde)
        return (1);
    i = 0;
    while (i < NBR)
    {
        zomb_horde[i].announce();
        i++;
    }
    delete[] zomb_horde;
    return (0);
}