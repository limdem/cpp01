#include "../includes/Harl.hpp"
#include <iostream>
#include <sstream>
#include <string>

void    initialize_levels(std::string levels[])
{
    levels[0] = "DEBUG";
    levels[1] = "INFO";
    levels[2] = "WARNING";
    levels[3] = "ERROR";
}

void    initialization(std::string levels[], char *message, int *index)
{
    std::string s;
    std::stringstream   ss;

    initialize_levels(levels);
    ss << message;
    ss >> s;
    *index = 0;
    while (*index < 4)
    {
        if (levels[*index] == s)
            break ;
        (*index)++;
    }
}

void    display_message(std::string levels[], int index)
{
    Harl    harl;
    
    switch (index)
    {
            case 0:
                harl.complain(levels[0]);
                break ;
            case 1:
                harl.complain(levels[1]);
                break ;
            case 2:
                harl.complain(levels[2]);
                break ;
            case 3:
                harl.complain(levels[3]);
                break ;
            default:
                std::cout << "[ Probably complaining about insignificant problems ]" << std::endl;
    }
    if (index < 3)
        display_message(levels, index + 1);
}

int main(int argc, char *argv[])
{
    std::string levels[4];
    int i;

    if (argc != 2)
        return (0);
    i = 0;
    initialization(levels, argv[1], &i);
    display_message(levels, i);
    return (0);
}