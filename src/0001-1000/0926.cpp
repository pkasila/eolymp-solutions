#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>
#include <numeric>

struct Point {
    double x, y;
};

enum TriangleType {
    TriangleTypeImpossible,
    TriangleTypeRight,
    TriangleTypeObtuse,
    TriangleTypeAcute,
};

class Triangle {
private:
    std::vector<double> sides;
public:
    explicit Triangle(std::vector<double> sides);

    Triangle(Point p0, Point p1, Point p2);

    TriangleType type();

    double perimeter();

    double area();

    std::vector<double> heights();
};

Triangle::Triangle(std::vector<double> sides) {
    this->sides = std::move(sides);
}

Triangle::Triangle(Point p0, Point p1, Point p2) {
    // calculate sides

    double a = sqrt((p1.x - p0.x) * (p1.x - p0.x) + (p1.y - p0.y) * (p1.y - p0.y));
    double b = sqrt((p2.x - p0.x) * (p2.x - p0.x) + (p2.y - p0.y) * (p2.y - p0.y));
    double c = sqrt((p2.x - p1.x) * (p2.x - p1.x) + (p2.y - p1.y) * (p2.y - p1.y));

    sides = std::vector(3, 0.0);
    sides[0] = a;
    sides[1] = b;
    sides[2] = c;
    std::sort(sides.begin(), sides.end());
}

TriangleType Triangle::type() {
    std::vector<double> s = this->sides;
    std::sort(s.begin(), s.end());

    if (s[2] >= s[1] + s[0]) {
        return TriangleTypeImpossible;
    } else {
        double c = s[2] * s[2] - s[1] * s[1] - s[0] * s[0];
        if (c == 0)
            return TriangleTypeRight;
        else if (c > 0)
            return TriangleTypeObtuse;
        else
            return TriangleTypeAcute;
    }
}

double Triangle::perimeter() {
    return std::accumulate(sides.begin(), sides.end(), 0.0);
}

double Triangle::area() {
    double hp = perimeter() / 2;
    return sqrt(hp * (hp - sides[0]) * (hp - sides[1]) * (hp - sides[2]));
}

std::vector<double> Triangle::heights() {
    return {
            (2/sides[0])*area(),
            (2/sides[1])*area(),
            (2/sides[2])*area()
    };
}

int main() {
    double a, b, c, d, f;
    std::cin >> a >> b >> c >> d >> f;

    Triangle t1({a, b, f});
    Triangle t2({d, c, f});

    double area = t1.area() + t2.area();

    printf("%.4lf\n", area);

    return 0;
}
