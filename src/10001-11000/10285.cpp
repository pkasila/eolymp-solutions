#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main() {
    int n;
    string input_string;
    cin >> n >> input_string;
    for (int len = 1; len <= n; len++) {
        vector<string> a;
        a.reserve(n - len + 1);
        for (int i = 0; i <= n - len; i++) {
            string t = input_string.substr(i, len);
            a.emplace_back(t);
        }
        sort(a.begin(), a.end());
        bool ok = true;
        for (int i = 1; i < a.size(); i++) {
            if (a[i] == a[i - 1])
                ok = false;
        }
        if (ok) {
            cout << len;
            return 0;
        }
    }
    return 0;
}
