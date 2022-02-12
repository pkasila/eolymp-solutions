#include <iostream>
#include <cmath>
#include <vector>

struct Point {
    double x, y;
};

struct Diagonals {
    double a, b;
};

// Когда нечего делать: вперед классы!!!

class Parallelogram {
public:
    Point points[4];
    Point center();
    Diagonals diagonals();
};

Point Parallelogram::center() {
    return {
            (points[2].x + points[0].x) / 2,
            (points[2].y + points[0].y) / 2
    };
}

Diagonals Parallelogram::diagonals() {
    return {
            sqrt(pow(points[2].y - points[0].y, 2) + pow(points[2].x - points[0].x, 2)),
            sqrt(pow(points[3].y - points[1].y, 2) + pow(points[3].x - points[1].x, 2))
    };
}

int main() {
    Parallelogram p{};

    for (int i = 0; i < 4; i++) {
        std::cin >> p.points[i].x >> p.points[i].y;
    }

    Point center = p.center();
    Diagonals ds = p.diagonals();

    printf("%.3f %.3f\n%.3f %.3f\n", center.x, center.y, ds.a, ds.b);
    return 0;
}
