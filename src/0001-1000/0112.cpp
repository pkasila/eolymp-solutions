#include <iostream>

using namespace std;

int main() {
    double t1, t2, t3;
    cin >> t1 >> t2 >> t3;

    if (t1*t2*t3 == 0) {
        cout << 0.00;
        return 0;
    }

    double t = (t1 * t2 * t3) / (t1 * t2 + t1 * t3 + t2 * t3);

    printf("%.2f", t);

    return 0;
}
