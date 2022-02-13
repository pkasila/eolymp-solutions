#include <iostream>
#include <list>

using namespace std;

int main() {
    int n;

    list<pair<string, string>> students;

    cin >> n;

    string name, surname;

    for (int i = 0; i < n; i++) {
        cin >> name >> surname;
        students.emplace_back(surname+name, name+" "+surname);
    }

    students.sort();

    for (auto & s : students) {
        cout << s.second << endl;
    }


    return 0;
}
