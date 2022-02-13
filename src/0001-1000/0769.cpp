#include <iostream>

int main() {
    int x1, x2, x3;
    int y1, y2, y3;

    std::cin >> x1 >> y1;
    std::cin >> x2 >> y2;
    std::cin >> x3 >> y3;

    int x4 = x1 ^ x2 ^ x3;
    int y4 = y1 ^ y2 ^ y3;

    std::cout << x4 << " " << y4 << std::endl;

    return 0;
}
