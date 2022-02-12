#include <iostream>

using namespace std;

struct Point {
    double x, y;
};

struct Triangle {
    Point a;
    Point b;
    Point c;
};

int main() {
    Triangle t{};
    Point o{};

    cin >> t.a.x >> t.a.y >> t.b.x >> t.b.y >> t.c.x >> t.c.y >> o.x >> o.y;
    double OAxAB = (t.a.x - o.x) * (t.b.y - t.a.y) - (t.b.x - t.a.x) * (t.a.y - o.y);
    double OBxBC = (t.b.x - o.x) * (t.c.y - t.b.y) - (t.c.x - t.b.x) * (t.b.y - o.y);
    double OCxCA = (t.c.x - o.x) * (t.a.y - t.c.y) - (t.a.x- t.c.x) * (t.c.y - o.y);

    if (OAxAB > 0 && OBxBC > 0 && OCxCA > 0 || OAxAB < 0 && OBxBC < 0 && OCxCA < 0) {
        cout << "In";
    }
    else if (OAxAB >= 0 && OBxBC >= 0 && OCxCA >= 0 || OAxAB <= 0 && OBxBC <= 0 && OCxCA <= 0) {
        cout << "On";
    }
    else {
        cout << "Out";
    }
    return 0;
}
