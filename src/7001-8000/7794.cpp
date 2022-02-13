#include <iostream>

bool check(long long l, long long r, long long n) {
    return l <= r - r % n;
}

int main() {
    long long tests;
    std::cin >> tests;

    while (tests--) {
        long long a, n;
        std::cin >> a >> n;

        long long b = 0;
        long long now = 0;

        for (long long i = 60; i >= 0; i--) {
            now ^= (1ll << i) & a;

            if (!check(now, now + (1ll << i) - 1, n)) {
                now ^= (1ll << i);
                b ^= (1ll << i);
            }
        }

        std::cout << b << std::endl;
    }

    return 0;
}
