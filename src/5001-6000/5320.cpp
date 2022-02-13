#include <iostream>
#include <bitset>

int main() {
    int a, n;
    std::cin >> a >> n;

    std::string v = std::bitset<64>(a).to_string();
    for (int i = 64 - n; i < 64; i++) {
        std::cout << v[i];
    }

    return 0;
}
