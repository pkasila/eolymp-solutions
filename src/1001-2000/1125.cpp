#include <iostream>
#include <cmath>

using namespace std;

int main() {
    while(true) {
        int hours, minutes;

        cin >> hours >> minutes;

        if (hours == 0 && minutes == 0) {
            break;
        }

        double h_angle = 360.0 / 12 * (hours + (double)minutes/60);
        double m_angle = 360.0 / 60 * minutes;

        double angle = abs(h_angle - m_angle);

        if (angle > 180) {
            angle = abs(180 - (angle - 180));
        }

        printf("At %d:%02d the angle is %.1f degrees.\n", hours, minutes, angle);
    }

    return 0;
}
