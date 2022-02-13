#include <iostream>
#include <string>

using namespace std;

int main() {
    int n;
    cin >> n;
    if (n % 2 == 0)
        cout << "Ok";
    else {
        string str;
        cin >> str;

        char sum = 0;

        for (char c : str) {
            sum ^= c;
        }

        cout << sum << endl;
    }
    return 0;
}
