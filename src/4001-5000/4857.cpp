#include <iostream>

using namespace std;

int main() {
    int g, s, h, r, m;
    cin >> g >> s >> h >> r >> m;

    int max = g;
    if (s > max) max = s;
    if (h > max) max = h;
    if (r > max) max = r;

    int res = max / m;
    if (max % m > 0) res++;

    cout << res << endl;

    return 0;
}
