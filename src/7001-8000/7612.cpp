#include <iostream>

using namespace std;

int main() {
    cout.precision(4);
    double height, width = 0;
    cin >> height;
    cin >> width;
    double b = max(height, width);
    double a = min(width, height);
    double c = min(a, max(b / 3, a / 2));
    cout << fixed << c;
}
