#ifndef KAREN_HPP
# define KAREN_HPP
# include <iostream>
class Karen
{
    void debug(void);
    void info(void);
    void warning(void);
    void error(void);
    std::string fun_names[4];
    void (Karen::*func_ptrs[4])(void);
    public:
        void complain(std::string level);
        Karen(); 
};

#endif