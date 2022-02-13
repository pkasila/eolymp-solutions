#include <iostream>

int main() {
    int i, n, val, res;

    std::cin >> n;
    res = n;
    for (i = 1; i < n; i++) {
        std::cin >> val;
        res ^= val ^ i;
    }
    std::cout << res << std::endl;
}
