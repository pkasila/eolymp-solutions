#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;
    int k = 1, res = 0;
    while (n--) {
        res += k;
        k = k << 1;
    }
    cout << res;
    return 0;
}
