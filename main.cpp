#include <iostream>
#include <string>
#include <bitset>

void HelloWorld(int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << "[" << i << "] " << "Hello World!" << std::endl;
    }
}

int main() {
    HelloWorld(15);

    return 0;
}
