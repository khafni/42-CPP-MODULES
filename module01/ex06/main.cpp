#include "Karen.hpp"

int main(int argc, char **argv)
{
    Karen k;
    if (argc != 2)
    {
        std::cout << "wrong argument";
        return (0);
    }
    k.complain(argv[1]);
    return 0;
}