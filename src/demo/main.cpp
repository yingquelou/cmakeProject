#include <iostream>
int main(const int argc, const char *argv[], const char *env[])
{
    for (size_t i = 0; argv[i]; ++i)
        std::cout << argv[i] << '\n';
    for (size_t i = 0; env[i]; ++i)
        std::cout << env[i] << '\n';
    return 0;
}