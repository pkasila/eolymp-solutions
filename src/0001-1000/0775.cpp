#include <iostream>
#include <list>

using namespace std;

int main() {
    int k, m, n;
    cin >> k >> m >> n;

    list<int> list;

    for (int i = 0; i < k; i++) {
        int v;
        cin >> v;
        list.emplace_back(v);
    }

    list.sort();

    int sum = 0;
    int counter = 0;
    while (sum < m * n) {
        counter++;
        sum += list.back();
        list.pop_back();
    }

    cout << counter << endl;
}
