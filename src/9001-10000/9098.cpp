#include <iostream>

long long f(long long i) {
    if (i <= 0)
        return 0;
    if (i % 4 == 0)
        return i;
    if (i % 4 == 1)
        return 1;
    if (i % 4 == 2)
        return i ^ 1;
    return 0;
}

int main() {
    long long l, r;

    std::cin >> l >> r;

    long long res = f(r) ^ f(l - 1);

    std::cout << res << std::endl;
}
