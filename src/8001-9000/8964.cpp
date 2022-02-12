#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    int n_max = 0;

    for (int i = 0; i < n; i++) {
        if (a[n_max] < a[i]) {
            n_max = i;
        }
    }

    int maxv = a[n_max];

    vector<int> b;
    int maxc = 0;

    for (int i = 0; i < n; i++) {
        if (a[i] == maxv) {
            maxc++;
        } else {
            b.push_back(a[i]);
        }
    }

    for (int i = 0; i < maxc; i++) {
        b.push_back(maxv);
    }

    for (int i = 0; i < n; i++) {
        cout << b[i] << " ";
    }

    return 0;
}
