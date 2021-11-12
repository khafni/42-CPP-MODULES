#include "Fixed.hpp"
#include <iostream>

// int main()
// {
//     Fixed f(1234.4321f);
//     Fixed f1(1134.4321f);
//     std::cout << f.toInt() << std::endl;
//     std::cout << f.toFloat() << std::endl;
//     std::cout << f << std::endl;
//     --f;
//     --f;
//     --f;
//     --f;
//     --f;
//     --f;
//     std::cout << f << std::endl;
//     std::cout << " plk" << Fixed::max(f, f1);

//     return (0);
// }

int main(void) {


  Fixed a;
  Fixed const b(Fixed(5.05f) * Fixed(2));
  std::cout << a << std::endl;
    std::cout << ++a << std::endl;
    std::cout << a << std::endl;
    std::cout << a++ << std::endl;
    std::cout << a << std::endl;
    std::cout << b << std::endl;
    std::cout << Fixed::max( a, b ) << std::endl;
  return 0;
}