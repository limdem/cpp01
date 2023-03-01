#include "../includes/Sed.hpp"
#include <iostream>
#include <fstream>


Sed::Sed(std::string s1, std::string s2)
{
    this->s1 = s1;
    this->s2 = s2;
}

void    Sed::sedforwinners(std::fstream& file_p, std::fstream& file_n)
{
    std::string line;
    std::size_t pos;
    int reader;
    int i;

    reader = 1;
    while (reader)
    {
        std::getline(file_p, line);
        pos = 0;
        i = 0;
        while (1)
        {
            pos = line.find(s1, pos);
            if (pos == std::string::npos)
            {
                file_n << line.substr(i);
                break ;
            }
            if (pos - i)
                file_n << line.substr(i, pos - i);
            file_n << s2;
            pos += s1.length();
            i = pos;
        }
        reader = !file_p.eof();
        if (reader)
            file_n << std::endl;
    }
}
