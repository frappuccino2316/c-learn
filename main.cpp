#include <iostream>
#include <string>

int main() {
    int a = 13;
    int* b = &a;
    int c = a;
    int* d = &c;
    int& e = a;
    int* f = &e;
    std::cout << a << ", " << b << ", " << c << ", " << d << ", " << e << ", " << f << std::endl;

    return 0;
}
