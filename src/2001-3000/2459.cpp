#include <iostream>
#include <string>
#include <vector>

using namespace std;

string reverse(string s) {
    s.replace(2, 1, "");
    s.replace(4, 1, "");
    string y(s.rbegin(), s.rend());
    return y;
}

bool is_leap(int year) {
    bool leap;
    if ((year % 400) == 0) leap = true;
    else if ((year % 100) == 0) leap = false;
    else if ((year % 4) == 0) leap = true;
    else leap = false;
    return leap;
}

int get_days(int month, int year) {
    vector<int> ms = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
    if (is_leap(year)) {
        ms[1] = 29;
    }
    return ms[month - 1];
}

int main() {
    string s, y;
    getline(cin, s);
    y = reverse(s);
    int day = stoi(y.substr(0, 2));
    int month = stoi(y.substr(2, 2));
    int year = stoi(y.substr(4, 4));
    if ((month >= 1) && (month <= 12) && (day >= 1) && (day <= (get_days(month, year)))) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}
