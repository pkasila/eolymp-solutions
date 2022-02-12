#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int minutes;

    if (n == 0) {
        minutes = 0;
    } else if (n <= k) {
        minutes = 4;
    } else {
        minutes = 2 * n / k;
        if (2 * n % k) minutes++;
        minutes *= 2;

    }

    cout << minutes << endl;

    return 0;
}
