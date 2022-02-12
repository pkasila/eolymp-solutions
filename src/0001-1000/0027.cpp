#include <iostream>

int main() {
    unsigned long n, tmp_n, power = 1;

    std::cin >> n;

    tmp_n = n;

    while (tmp_n) {
        tmp_n >>= 1;
        power <<= 1;
    }

    tmp_n = n;

    unsigned long max_n = n;

    do {
        n = n << 1;
        n = n % power + (n >= power ? 1 : 0);
        if (max_n < n)
            max_n = n;
    } while (tmp_n != n);

    std::cout << max_n << std::endl;

    return 0;
}
