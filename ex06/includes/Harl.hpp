#include <string>

class   Harl
{
    void    debug( void );
    void    info( void );
    void    warning( void );
    void    error( void );
        public:
    void    complain( std::string level );
};

void    initialize_levels(std::string[]);
void    display_message(int i);