#include <iostream>
#include <deque>
#include <vector>
#include <algorithm>

using namespace std;

struct Point {
    int y, x;
};

int main() {
    char c;
    int n, m;
    cin >> m >> n;
    getchar();
    vector<vector<int>> v(m, vector<int>(n));
    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            c = getchar();
            if (c == '#') {
                v[i][j] = -2;
            } else if (c == '.') {
                v[i][j] = -1;
            }
        }
        getchar();
    }
    int res = 0;

    for (int i = 0; i < m; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == -2) {
                res++;
                v[i][j] = res;
                deque<Point> q;
                Point p {i, j};
                q.push_back(p);

                while (!q.empty()) {
                    Point cur = q.front();
                    q.pop_front();

                    if (cur.x + 1 < n) {
                        Point a = cur;
                        a.x += 1;
                        a.y += 0;

                        if (v[a.y][a.x] == -2) {
                            v[a.y][a.x] = v[cur.y][cur.x];
                            q.push_back(a);
                        }
                    }

                    if (cur.y + 1 < m) {
                        Point a = cur;
                        a.x += 0;
                        a.y += 1;

                        if (v[a.y][a.x] == -2) {
                            v[a.y][a.x] = v[cur.y][cur.x];
                            q.push_back(a);
                        }
                    }

                    if (cur.x - 1 >= 0) {
                        Point a = cur;
                        a.x += -1;
                        a.y += 0;

                        if (v[a.y][a.x] == -2) {
                            v[a.y][a.x] = v[cur.y][cur.x];
                            q.push_back(a);
                        }
                    }

                    if (cur.y - 1 >= 0) {
                        Point a = cur;
                        a.x += 0;
                        a.y += -1;

                        if (v[a.y][a.x] == -2) {
                            v[a.y][a.x] = v[cur.y][cur.x];
                            q.push_back(a);
                        }
                    }
                }
            }
        }
    }

    cout << res;

    return 0;
}
