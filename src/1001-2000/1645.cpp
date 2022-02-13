#include <iostream>

bool check(int64_t x) {
    return ((x & (x + 1)) == 0);
}

int main() {
    int64_t n;
    std::cin >> n;
    int64_t res = n;
    for (int64_t i = 0; i < n && !check(res); i++) {
        int64_t temp = res;
        int64_t b = 0;
        for (int j = 0; j < 64; j++) {
            if (temp & (1ll << j)) {
                b = (1ll << j);
            }
        }
        temp ^= b;
        temp <<= 1;
        temp |= 1;
        res = temp;
    }
    std::cout << res << std::endl;
    return 0;
}
