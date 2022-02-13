#include <iostream>
#include <string>
#include <stack>
#include <utility>

using namespace std;

int main() {
    int i;
    cin >> i;

    char lost;
    cin.get(lost);

    while (i--) {
        string s;
        getline(cin, s);

        string opening = "([";
        string closing = ")]";
        int n = s.length();
        stack<char> st;
        bool f = true;
        for (int i = 0; i < n; i++) {
            if (opening.find(s[i]) != -1)
                st.push(s[i]);
            if (closing.find(s[i]) != -1) {
                if (st.empty()) {
                    f = false;
                    break;
                }
                if (closing.find(s[i]) == opening.find(st.top()))
                    st.pop();
                else {
                    f = false;
                    break;
                }
            }
        }
        if (st.empty() && f)
            cout << "Yes" << endl;
        else
            cout << "No" << endl;
    }


    return 0;
}
