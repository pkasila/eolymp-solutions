#include <iostream>

using namespace std;

int main() {
    unsigned short int k, w, a1, b1, a2, b2, a3, b3;
    cin >> k >> w >> a1 >> b1 >> a2 >> b2 >> a3 >> b3;

    bool condition = (((k <= b1) && (w >= a1))
                      || ((k <= b2) && (w >= a2))
                      || ((k <= b3) && (w >= a3))
                      || ((k <= b1 + b2) && (w >= a1 + a2))
                      || ((k <= b2 + b3) && (w >= a2 + a3))
                      || ((k <= b1 + b3) && (w >= a1 + a3))
                      || ((k <= b1 + b2 + b3) && (w >= a1 + a2 + a3)));
    cout << (condition ? "YES" : "NO");

    return 0;
}
