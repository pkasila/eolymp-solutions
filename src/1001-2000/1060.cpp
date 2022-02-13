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
    int n;
    cin >> n;
    c = getchar();
    vector<vector<int>> v(n, vector<int>(n));
    int empty = 200000, close = 200001, plus = 200002;
    Point start, end;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            c = getchar();
            if (c == '.') {
                v[i][j] = empty;
            } else if (c == 'O') {
                v[i][j] = close;
            } else if (c == '@') {
                start.x = j;
                start.y = i;
                v[i][j] = 0;
            } else if (c == 'X') {
                end.x = j;
                end.y = i;
                v[i][j] = empty;
            }
        }
        c = getchar();
    }

    deque<Point> q;
    q.push_back(start);
    bool pos = false;

    while (!q.empty()) {
        Point cur = q.front();
        q.pop_front();
        Point a = cur;
        a.x++;

        if (a.x < n) {
            if (v[a.y][a.x] == empty) {
                v[a.y][a.x] = v[cur.y][cur.x] + 1;
                q.push_back(a);
                if (a.x == end.x && a.y == end.y) {
                    pos = true;
                    break;
                }
            }
        }

        a = cur;
        a.y++;

        if (a.y < n) {
            if (v[a.y][a.x] == empty) {
                v[a.y][a.x] = v[cur.y][cur.x] + 1;
                q.push_back(a);
                if (a.x == end.x && a.y == end.y) {
                    pos = true;
                    break;
                }
            }
        }

        a = cur;
        a.x--;

        if (a.x >= 0) {
            if (v[a.y][a.x] == empty) {
                v[a.y][a.x] = v[cur.y][cur.x] + 1;
                q.push_back(a);
                if (a.x == end.x && a.y == end.y) {
                    pos = true;
                    break;
                }
            }
        }

        a = cur;
        a.y--;

        if (a.y >= 0) {
            if (v[a.y][a.x] == empty) {
                v[a.y][a.x] = v[cur.y][cur.x] + 1;
                q.push_back(a);
                if (a.x == end.x && a.y == end.y) {
                    pos = true;
                    break;
                }
            }
        }
    }


    if (!pos) {
        cout << "N";
        return 0;
    } else {
        cout << "Y" << endl;
    }

    Point cur = end;

    while (!(cur.x == start.x && cur.y == start.y)) {
        if (cur.x + 1 < n) {
            Point a = cur;
            a.x += 1;
            a.y += 0;
            if (v[a.y][a.x] == v[cur.y][cur.x] - 1) {
                v[cur.y][cur.x] = plus;
                cur = a;
                continue;
            }
        }
        if (cur.y + 1 < n) {
            Point a = cur;
            a.x += 0;
            a.y += 1;
            if (v[a.y][a.x] == v[cur.y][cur.x] - 1) {
                v[cur.y][cur.x] = plus;
                cur = a;
                continue;
            }
        }
        if (cur.x - 1 >= 0) {
            Point a = cur;
            a.x += -1;
            a.y += 0;
            if (v[a.y][a.x] == v[cur.y][cur.x] - 1) {
                v[cur.y][cur.x] = plus;
                cur = a;
                continue;
            }
        }
        if (cur.y - 1 >= 0) {
            Point a = cur;
            a.x += 0;
            a.y += -1;
            if (v[a.y][a.x] == v[cur.y][cur.x] - 1) {
                v[cur.y][cur.x] = plus;
                cur = a;
                continue;
            }
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (v[i][j] == plus) {
                cout << "+";
            } else if (v[i][j] == close) {
                cout << "O";
            } else if (j == start.x && i == start.y) {
                cout << "@";
            } else {
                cout << ".";
            }
        }
        cout << endl;
    }
    return 0;
}
