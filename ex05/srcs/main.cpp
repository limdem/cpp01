#include "../includes/Harl.hpp"
#include <iostream>
#include <string>

void    initialize_levels(std::string levels[])
{
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
}

int main()
{
    Harl    harl;

    harl.complain("DEBUG");
    harl.complain("INFO");
    harl.complain("WARNING");
    harl.complain("ERROR");
    harl.complain("TEST");
    return (0);
}