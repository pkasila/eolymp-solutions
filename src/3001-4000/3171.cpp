#include <iostream>

using namespace std;

struct Date {
    int year, month, day;
};

int main()
{
    int x, y, r;
    cin >> x >> y >> r;

    int xa, ya;
    cin >> xa >> ya;

    int ra = (xa - x) * (xa - x) + (ya - y) * (ya - y);

    if (ra <= r * r) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
