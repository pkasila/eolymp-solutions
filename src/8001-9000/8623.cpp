#include <iostream>
#include <algorithm>

using namespace std;

int main() {
    int n;
    cin >> n;

    int to_sort[3] = {
            n % 10,
            n / 10 % 10,
            n / 100
    };

    std::sort(to_sort, to_sort+3);

    int max_val = to_sort[2] * 100 + to_sort[1] * 10 + to_sort[0];
    int square = max_val * max_val;
    cout << square << endl;

    return 0;
}
