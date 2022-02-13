#include <iostream>

int main() {
    int n, ones = 0, bits = 0;
    int min, max;

    std::cin >> n;
    while (n) {
        if (n % 2) ones++;
        bits++;
        n >>= 1;
    }

    min = (1 << ones) - 1;
    max = min << (bits - ones);

    std::cout << max - min << std::endl;
    return 0;
}
