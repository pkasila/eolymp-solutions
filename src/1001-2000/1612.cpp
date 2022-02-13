#include <iostream>

int main() {
    long long i;

    std::cin >> i;

    std::cout << (i & (i - 1)) << std::endl;
}
