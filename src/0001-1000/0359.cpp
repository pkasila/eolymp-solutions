#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

struct Point {
    double x, y;
};

int main() {

    double r;

    vector<Point> points(3, Point{});

    cin >> r;

    for (int i = 0; i < points.size(); i++) {
        cin >> points[i].x >> points[i].y;
    }

    double a = points[2].y - points[1].y;
    double b = points[1].x - points[2].x;
    double c = -points[1].x*points[2].y + points[1].y*points[2].x;

    double d = abs(a * points[0].x + b * points[0].y + c) / sqrt(1.0 * a * a + b* b);

    if (d > r)  {
        cout << "-1";
    } else if (d == r) {
        cout << "0";
    } else {
        double length = 2 * sqrt(1.0 * r * r - d * d);
        printf("%.5lf",length);
    }

    return 0;
}
