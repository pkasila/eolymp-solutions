#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    long long leaves = (4 + ((n - 1) << 1)) / 2 * n + 1;
    cout << leaves << endl;

    return 0;
}
