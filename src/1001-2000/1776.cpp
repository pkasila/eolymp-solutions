#include <iostream>
#include <stack>
#include <vector>

using namespace std;

struct Point {
    int y, x;
};

int main() {
    int n;
    cin >> n;
    while (n != 0) {
        int t, r;
        cin >> r;

        while (r != 0) {
            stack<int> s;
            int k = 0;
            t = r;
            k++;

            for (int i = 1; i <= n; i++) {
                s.push(i);

                while (!s.empty() && t == s.top()) {
                    s.pop();
                    if (k != n)
                        cin >> t;
                    k++;
                }
            }

            for (int i = k; i < n; i++) {
                cin >> t;
            }

            if (s.empty()) {
                cout << "Yes" << endl;
            } else {
                cout << "No" << endl;
            }

            cin >> r;
        }
        cin >> n;
        cout << endl;
    }

    return 0;
}
