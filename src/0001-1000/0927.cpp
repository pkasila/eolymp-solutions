#include <iostream>

int main() {
    int n;
    std::cin >> n;

    int sum = 0;

    for (int i = 0; i < n; i++) {
        int count;
        double price;
        std::cin >> count >> price;

        if (price < 50) {
            sum += count;
        }
    }

    std::cout << sum;

    return 0;
}
