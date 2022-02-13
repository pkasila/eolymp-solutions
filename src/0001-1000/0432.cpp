#include <iostream>
#include <queue>

using namespace std;

struct Point {
    int x, y, z;

    Point(int x0, int y0, int z0) {
        x = x0;
        y = y0;
        z = z0;
    }
};

int main() {
    int l, r, c;
    cin >> l >> r >> c;
    while ((l != 0) && (r != 0) && (c != 0)) {
        int arr[l + 2][r + 2][c + 2];
        bool arr_boolean[l + 2][r + 2][c + 2];
        char u;
        int start_x, start_y, start_z;
        int finish_x, finish_y, finish_z;
        for (int x = 0; x < l + 2; x++) {
            // read data
            for (int y = 0; y < r + 2; y++) {
                for (int z = 0; z < c + 2; z++) {
                    arr_boolean[x][y][z] = false;
                    if ((x == 0) || (y == 0) || (z == 0) || (x == l + 1) || (y == r + 1) || (z == c + 1)) {
                        arr[x][y][z] = -1;
                    } else {
                        cin >> u;
                        if (u == '#') {
                            arr[x][y][z] = -1;
                        }
                        if (u == '.') {
                            arr[x][y][z] = 0;
                        }
                        if (u == 'S') {
                            arr[x][y][z] = 0;
                            start_x = x;
                            start_y = y;
                            start_z = z;
                        }
                        if (u == 'E') {
                            arr[x][y][z] = 0;
                            finish_x = x;
                            finish_y = y;
                            finish_z = z;
                        }
                    }
                }
            }
        }

        // queue
        queue<Point> points;
        // push starting Point
        points.push(Point{start_x, start_y, start_z});

        // search
        while (!points.empty()) {
            // save coords
            int x = points.front().x;
            int y = points.front().y;
            int z = points.front().z;

            // right
            if (arr[x + 1][y][z] >= 0) {
                if (arr[x + 1][y][z] != 0) {
                    arr[x + 1][y][z] = min(arr[x + 1][y][z], arr[x][y][z] + 1);
                } else {
                    arr[x + 1][y][z] = arr[x][y][z] + 1;
                }
                if (arr_boolean[x + 1][y][z] == 0) {
                    arr_boolean[x + 1][y][z] = true;
                    points.push(Point{x + 1, y, z});
                }
            }

            // left
            if (arr[x - 1][y][z] >= 0) {
                if (arr[x - 1][y][z] != 0) {
                    arr[x - 1][y][z] = min(arr[x - 1][y][z], arr[x][y][z] + 1);
                } else {
                    arr[x - 1][y][z] = arr[x][y][z] + 1;
                }
                if (arr_boolean[x - 1][y][z] == 0) {
                    arr_boolean[x - 1][y][z] = true;
                    points.push(Point{x - 1, y, z});
                }
            }

            // top
            if (arr[x][y + 1][z] >= 0) {
                if (arr[x][y + 1][z] != 0) {
                    arr[x][y + 1][z] = min(arr[x][y + 1][z], arr[x][y][z] + 1);
                } else {
                    arr[x][y + 1][z] = arr[x][y][z] + 1;
                }
                if (arr_boolean[x][y + 1][z] == 0) {
                    arr_boolean[x][y + 1][z] = true;
                    points.push(Point{x, y + 1, z});
                }
            }

            // bottom
            if (arr[x][y - 1][z] >= 0) {
                if (arr[x][y - 1][z] != 0) {
                    arr[x][y - 1][z] = min(arr[x][y - 1][z], arr[x][y][z] + 1);
                } else {
                    arr[x][y - 1][z] = arr[x][y][z] + 1;
                }
                if (arr_boolean[x][y - 1][z] == 0) {
                    arr_boolean[x][y - 1][z] = true;
                    points.push(Point{x, y - 1, z});
                }
            }

            // level higher
            if (arr[x][y][z + 1] >= 0) {
                if (arr[x][y][z + 1] != 0) {
                    arr[x][y][z + 1] = min(arr[x][y][z + 1], arr[x][y][z] + 1);
                } else {
                    arr[x][y][z + 1] = arr[x][y][z] + 1;
                }
                if (arr_boolean[x][y][z + 1] == 0) {
                    arr_boolean[x][y][z + 1] = true;
                    points.push(Point{x, y, z + 1});
                }
            }

            // level lower
            if (arr[x][y][z - 1] >= 0) {
                if (arr[x][y][z - 1] != 0) {
                    arr[x][y][z - 1] = min(arr[x][y][z - 1], arr[x][y][z] + 1);
                } else {
                    arr[x][y][z - 1] = arr[x][y][z] + 1;
                }
                if (arr_boolean[x][y][z - 1] == 0) {
                    arr_boolean[x][y][z - 1] = true;
                    points.push(Point{x, y, z - 1});
                }
            }

            // delete Point
            points.pop();
        }

        // last check
        if (arr[finish_x][finish_y][finish_z] != 0)
            cout << "Escaped in " << arr[finish_x][finish_y][finish_z] << " minute(s)." << endl;
        else
            cout << "Trapped!" << endl;

        cin >> l >> r >> c; // read new data
    }

    return 0;
}
