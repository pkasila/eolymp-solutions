#include <iostream>
#include <list>
#include <string>

using namespace std;

struct Point {
    int x, y;
};

bool comp(const pair<int, Point> &a, const pair<int, Point> &b) {
    if (a.second.x == b.second.x) {
        return a.second.y < b.second.y;
    } else {
        return a.second.x < b.second.x;
    }
}

int main() {
    int n;
    cin >> n;
    list<pair<int, Point>> list;

    for (int i = 0; i < n; i++) {
        Point p{};
        cin >> p.x >> p.y;
        list.emplace_back(i, p);
    }

    list.sort(comp);

    for (const auto &i: list) {
        cout << i.first + 1 << ' ';
    }

}
