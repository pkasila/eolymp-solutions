#include <iostream>
#include <iomanip>
#include <deque>
#include <stack>
#include <cmath>

using namespace std;

long double gcd(long double a, long double b) {
    while (b) {
        a = a - b * floor(a / b);
        swap(a, b);
    }
    return a;
}

long double lcm(long double a, long double b) {
    return a * (b / gcd(a, b));
}

struct Config {
    int S, M, H, K;
};

struct Stacks {
    stack<int> s, m, h;
};

int main() {
    Config config{};
    cin >> config.S >> config.M >> config.H >> config.K;

    deque<int> clock;
    for (int i = 1; i <= config.K; i++)
        clock.push_back(i);

    Stacks stacks{};

    while (stacks.h.size() != config.H) {
        stacks.s.push(clock.front());
        clock.pop_front();
        if (stacks.s.size() == config.S) {
            stacks.m.push(stacks.s.top());
            stacks.s.pop();
            while (!stacks.s.empty()) {
                clock.push_back(stacks.s.top());
                stacks.s.pop();
            }
            if (stacks.m.size() == config.M) {
                stacks.h.push(stacks.m.top());
                stacks.m.pop();
                while (!stacks.m.empty()) {
                    clock.push_back(stacks.m.top());
                    stacks.m.pop();
                }
            }
        }
    }

    while (!stacks.h.empty()) {
        clock.push_back(stacks.h.top());
        stacks.h.pop();
    }

    int *permutation = new int[config.K + 1];
    for (int i = 1; i <= config.K; i++) {
        permutation[i] = clock.front();
        clock.pop_front();
    }

    bool *used = new bool[config.K + 1];
    long double permutation_order = 1;
    for (int i = 1; i <= config.K; i++) {
        if (!used[i]) {
            long double cycle_length = 1;
            for (size_t x = i; permutation[x] != i; x = permutation[x]) {
                used[x] = true;
                cycle_length++;
            }
            permutation_order = lcm(permutation_order, cycle_length);
        }
    }
    cout << setprecision(0) << fixed << permutation_order << endl;
    return 0;
}
