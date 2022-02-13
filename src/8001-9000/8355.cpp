#include <iostream>
#include <list>

using namespace std;

int main() {
    int n, op, temp;
    list<int> shelf;

    cin >> n;

    for (int i = 0; i < n; i++) {
        cin >> op;

        switch (op) {
            case 1: {
                cin >> temp;

                shelf.push_back(temp);

                break;
            }
            case 2: {
                cin >> temp;

                shelf.push_front(temp);

                break;
            }
            case 3: {
                cout << shelf.back() << endl;

                shelf.pop_back();

                break;
            }
            case 4: {
                cout << shelf.front() << endl;

                shelf.pop_front();

                break;
            }
        }
    }


    return 0;
}
