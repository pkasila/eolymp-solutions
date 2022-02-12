#include <iostream>

using namespace std;

int main() {
    int n, k;
    cin >> n >> k;

    int min = (n + k - 1) / k;
    int max = n - k + 1;

    cout << min << " " << max << endl;

    return 0;
}
