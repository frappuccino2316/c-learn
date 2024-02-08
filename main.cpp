#include <iostream>
#include <string>

int main() {
    int a;
    std::cout << "数値を入力してください:";
    std::cin >> a;
    int b = a * 2;
    std::cout << a << "を2倍した数は、" << b << "です。" << std::endl;

    return 0;
}
