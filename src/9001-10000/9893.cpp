#include <iostream>
#include <vector>

using namespace std;

int main()
{
    int n;

    cin >> n;

    vector<vector<int>> m(n, vector<int>(n));

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            m[i][j] = i + j + 2;
        }
    }

    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cout << m[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}
