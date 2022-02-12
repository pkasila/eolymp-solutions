#include <iostream>

using namespace std;

struct Time {
    int hours, minutes, seconds;
};

int time_to_int(Time t) {
    return t.seconds + t.minutes * 60 + t.hours * 60 * 60;
}

Time int_to_time(int t) {
    Time r;
    r.seconds = t % 60;
    r.minutes = t / 60 % 60;
    r.hours = t / 60 / 60;
    return r;
}

int main()
{
    Time t1;
    Time t2;

    scanf("%02d:%02d:%02d %02d:%02d:%02d", &t1.hours, &t1.minutes, &t1.seconds, &t2.hours, &t2.minutes, &t2.seconds);

    int diff = abs(time_to_int(t2) - time_to_int(t1));

    if (diff > 12 * 60 * 60) {
        diff = 24 * 60 * 60 - diff;
    }

    Time t = int_to_time(diff);

    printf("%02d:%02d:%02d", t.hours, t.minutes, t.seconds);

    return 0;
}
