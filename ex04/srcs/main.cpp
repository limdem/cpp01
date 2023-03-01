#include "../includes/sed_handler.hpp"
#include "../includes/Sed.hpp"
#include <iostream>
#include <fstream>

void    closing(t_sed_handler *handler)
{
    handler->file_p.close();
    handler->file_n.close();
}

int initialization(t_sed_handler *handler, int argc, char *argv[])
{
    if (argc != 4)
    {
        std::cout << "Wrong number of arguments" << std::endl;
        return (1);
    }
    handler->file_p.open(argv[1], std::ios::in);
    if (!handler->file_p)
    {
        std::cout << "Failed to open the file" << std::endl;
        return (1);
    }
    handler->filename = argv[1];
    handler->filename += ".replace";
    handler->filename_str = handler->filename.c_str();
    handler->file_n.open(handler->filename_str, std::ios::out);
    if (!handler->file_n)
    {
        std::cout << "Failed to open the file" << std::endl;
        return (1);
    }
    handler->s1 = argv[2];
    handler->s2 = argv[3];
    return (0);
}

int main(int argc, char *argv[])
{
    t_sed_handler   handler;

    if (initialization(&handler, argc, argv))
        return (1);
    Sed sed(handler.s1, handler.s2);
    sed.sedforwinners(handler.file_p, handler.file_n);
    closing(&handler);
    return (0);
}