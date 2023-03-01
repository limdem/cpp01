#ifndef SED_HPP
# define SED_HPP
# include <iostream>
# include <fstream>

class   Sed
{
    std::string s1;
    std::string s2;
        public:
    Sed(std::string, std::string);
    void    sedforwinners(std::fstream&, std::fstream&);
};

#endif
