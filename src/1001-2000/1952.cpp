#include <iostream>
#include <vector>

int main() {
    int n;
    std::cin >> n;

    std::vector<int> a(n);

    for (int i = 0; i < n; i++) {
        std::cin >> a[i];
    }

    // find max
    int n_max = 0;
    int n_min = 0;
    for (int i = 0; i < n; i++) {
        if (a[i] > a[n_max]) {
            n_max = i;
        }
        if (a[i] < a[n_min]) {
            n_min = i;
        }
    }

    int max = a[n_max];
    int min = a[n_min];

    for (int i = 0; i < n; i++) {
        if (a[i] == max) {
            a[i] = min;
        }
    }

    for (int i = 0; i < n; i++) {
        std::cout << a[i] << " ";
    }

    return 0;
}
