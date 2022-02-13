#include <iostream>

int main() {
    long q, x, res, power_two;
    std::cin >> q;
    for (long i = 0; i < q; ++i) {
        std::cin >> x;
        res = 0;
        power_two = 1;
        while (x > 0) {
            if (x % 2 == 0)
                res += power_two;
            x >>= 1;
            power_two <<= 1;
        }
        std::cout << res << std::endl;
    }
    return 0;
}
