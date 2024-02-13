#include <iostream>

int Add(int a, int b);

int main() {
    int (*func)(int, int) = Add;

    int a = func(14, 56);

    std::cout << a << std::endl;

    return 0;
}

int Add(int a, int b) {
    return a + b;
}