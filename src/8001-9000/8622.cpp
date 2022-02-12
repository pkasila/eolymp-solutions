#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    int n1 = n % 10;
    int n2 = n / 10 % 10;
    int n3 = n / 100 % 10;
    int n4 = n / 1000;

    if (n1 == 0 || n2 == 0 || n3 == 0 || n4 == 0) {
        cout << "NO" << endl;
        return 0;
    }

    bool flag = (n % n1 == 0) && (n % n2 == 0) && (n % n3 == 0) && (n % n4 == 0);

    cout << (flag ? "YES" : "NO") << endl;

    return 0;
}
