#include <iostream>
#include <list>
#include <string>

using namespace std;

bool comp(const string &a, const string &b) {
    return a + b > b + a;
}

int main() {
    long long n;
    list<string> list;
    string str;

    do {
        cin >> n;
        if (n) {
            list.clear();
            for (long long i = 0; i < n; i++) {
                cin >> str;
                list.push_back(str);
            }

            list.sort(comp);

            for (auto &i: list) {
                cout << i;
            }

            cout << endl;
        }
    } while (n);
}
