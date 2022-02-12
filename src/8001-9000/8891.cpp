#include <iostream>

using namespace std;

int main() {
    int n;
    cin >> n;

    bool even = n % 2 == 0;
    bool neg_three = (n % 3 == 0) && n < 0;

    if (even && !neg_three)
    {
        cout << "YES" << endl;
    }
    else if (!even && neg_three)
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }

    return 0;
}
