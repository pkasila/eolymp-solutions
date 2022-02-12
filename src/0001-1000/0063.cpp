#include <iostream>

using namespace std;

int main()
{
    long long m, n;
    cin >> m >> n;

    long long cheese = (m * n - (m + n - 1)) + 1;
    cout << cheese << endl;

    return 0;
}
