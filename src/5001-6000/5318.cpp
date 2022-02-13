#include <iostream>

int main() {
    int a, k;

    std::cin >> a >> k;

    a &= (1 << k) - 1;

    std::cout << a << std::endl;

}
