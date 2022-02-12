#include <iostream>

using namespace std;

int main() {
    long long a, b;
    cin >> a >> b;

    long long n = b - a + 1;
    long long r = ((a + b) * n) / 2;
    cout << r << endl;

    return 0;
}
