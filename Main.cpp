#include <iostream>
#include <cmath>

void funct(int &ptrA) {
    ptrA = pow(ptrA,2);
}

int main1()
{
    int a = 11;
    funct(a);
    std::cout << a << std::endl;
}

// нахождение n-ого числв фибоначчи интеративным способом

int func(int c) {
    int f = 0;
    int f2 = 1;
    int t = 0;
    for (int i = 0; i < c; i++) {
        t = f2;
        f2 = f + f2;
        f = t;
    }
    c = f;
    return c;
}

int main2()
{   n = 10;
    std::cout << func(n-1) << std::endl;
} 

// нахождение n-ого числв фибоначчи рекурсивным способом

int fu(int c) {
    if (c == 0) {
        return 0; 
    }
    if (c == 1 || c == 2) {
        return 1; 
    }
    else {
        c = fu(c - 2) + fu(c - 1);
        return c;
    }
}

int main3()
{
    int n = 10;
    std::cout << fu(n-1) << std::endl;
}
