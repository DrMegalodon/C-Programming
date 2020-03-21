#include <iostream>

double fu(int g) {
    g = g * g;
    return g;
}

int main()
{
    int a = 11;
    a = fu(a);
    std::cout << fu(a) << "\t" << a << std::endl;
}
