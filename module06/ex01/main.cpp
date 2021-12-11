#include <cstdint>
#include <sys/_types/_uintptr_t.h>
#include "serialize.hpp"


int main()
{
    weapon *f = new weapon("big sword", "just a big sword", 420);
    std::cout << "addr before: " << reinterpret_cast<void *>(f) << std::endl;
    uintptr_t f_s = serialize(f);
    weapon *f_p = deserialize(f_s);
    f_p->weapon_display(); 
    std::cout << "addr after: " << reinterpret_cast<void *>(f_p) << std::endl;
    free(f_p);
    return (0);
}