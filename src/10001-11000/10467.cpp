#include <iostream>
#include <list>

using namespace std;

int main() {
    int temp;
    string o, o1;
    list<int> l;

    while (cin >> o >> o1) {
        string op = o + " " + o1;

        if (op == "push front") {
            cin >> temp;

            l.push_front(temp);
        }

        if (op == "push back") {
            cin >> temp;

            l.push_back(temp);
        }

        if (op == "pop front") {
            l.pop_front();
        }

        if (op == "pop back") {
            l.pop_back();
        }
    }

    int s = 0;

    for (auto & a : l) {
        if (a % 2 == 1) {
            s += a;
        }
    }

    cout << s << endl;

    return 0;
}
