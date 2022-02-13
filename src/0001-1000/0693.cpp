#include <iostream>
#include <stack>
#include <utility>
#include <algorithm>

using namespace std;

int main() {
    long long n, a, b, c, x, sum = 0;
    cin >> n >> a >> b >> c >> x;

    stack<pair<long long, long long>> s;

    for (int i = 0; i < n; i++) {
        x = (a * x * x + b * x + c) / 100 % 1000000;

        if (x % 5 < 2) {
            if (!s.empty())
                s.pop();
        } else {
            if (s.empty()) {
                s.push(pair(x, x));
            } else {
                s.push(pair(x, min(x, s.top().second)));
            }
        }

        if (!s.empty()) {
            sum += s.top().second;
        }
    }
    cout << sum << endl;
    return 0;
}
