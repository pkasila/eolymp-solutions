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

    int n_min = 0;
    int n_max = 0;

    for (int i = 0; i < n; i++) {
        if (a[n_max] < a[i]) {
            n_max = i;
        }
        if (a[n_min] > a[i]) {
            n_min = i;
        }
    }

    int minv = a[n_min];
    int maxv = a[n_max];

    for (int i = 0; i < n; i++) {
        a[i] = a[i] - maxv + minv;
    }

    for (int i = 0; i < n; i++) {
        cout << a[i] << " ";
    }

    return 0;
}
