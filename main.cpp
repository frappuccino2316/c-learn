#include <iostream>

int main() {
    int* p1 = new int(100);
    int* p2 = new int[5];

    *p1 = 200;

    p2[0] = 2;
    p2[1] = 42;
    p2[2] = 53;
    p2[3] = 172;
    p2[4] = 19273;

    std::cout << *p1 << std::endl;
    for (int i = 0; i < 5; ++i) {
        std::cout << p2[i] << std::endl;
    }
    std::cout << p1 << ", " << p2 << std::endl;

    delete p1;
    delete[] p2;
}
