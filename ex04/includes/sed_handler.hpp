#ifndef SED_HANDLER_HPP
# define SED_HANDLER_HPP

# include <iostream>
# include <fstream>

typedef struct  s_sed_handler
{
    std::string s1;
    std::string s2;
    std::string filename;
    std::fstream file_p;
    std::fstream file_n;
    const char    *filename_str;
} t_sed_handler ;
#endif