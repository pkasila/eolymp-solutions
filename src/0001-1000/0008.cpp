#include <iostream>
#include <cmath>

using namespace std;

int main() {
    long long n, k;
    long double length, width;
    cin >> n;
    length = floor(sqrt(n));
    width = ceil(n / length);
    k = 2 * n + length + width;
    cout << k << endl;
    return 0;
}
