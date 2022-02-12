#include <iostream>

using namespace std;

struct Time {
    uint64_t days, hours, minutes, seconds;
};

Time int_to_time(uint64_t t) {
    Time r;
    r.seconds = t % 60;
    r.minutes = t / 60 % 60;
    r.hours = t / 60 / 60 % 24;
    r.days = t / 60 / 60 / 24;
    return r;
}

int main()
{
    uint64_t seconds;
    cin >> seconds;

    Time t = int_to_time(seconds);

    cout << t.days << " " << t.hours << " " << t.minutes << " " << t.seconds << endl;

    return 0;
}
