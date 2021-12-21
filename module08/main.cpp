#include <cctype>
#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

auto func(int n) -> int
{
    return (n + 2);
}

auto lf = [] () {std::co}

int main()
{
    // std::vector<int> v1;
    // std::map<int , double> m1;
    // m1[1] = 1.2;
    // std::map<int , double>::iterator i = std::find(m1.begin(), m1.end(), 1);
    std::string s = "hello world";
    std::for_each(s.begin(), s.end(), [] (char &c) {c = std::toupper(c); });
    std::cout << s << std::endl;
    // if (i!= m1.end())
    //     std::cout << "found" << std::endl;
    // v1.push_back(1);
    // v1.push_back(2);
    // v1.push_back(3);
    // v1.push_back(4);
   // auto i = (v1.begin() + v1.size());
    //std::cout << *((v1.begin() + v1.size() / 2));
    return (0);
}