#include <iostream>

int main() {
    int n, k;

    std::cin >> n >> k;

    n = n >> k;
    n = n << k;

    std::cout << n << std::endl;
}
