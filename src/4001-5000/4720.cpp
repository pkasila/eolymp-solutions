#include <iostream>
using namespace std;

int main() {
    int blackUpX, blackUpY, blackDownX, blackDownY;
    int whiteUpX, whiteUpY, whiteDownX, whiteDownY;

    int pointX, pointY;
    cin >> blackUpX >> blackUpY >> blackDownX >> blackDownY;
    cin >> whiteUpX >> whiteUpY >> whiteDownX >> whiteDownY;
    cin >> pointX >> pointY;

    bool isBlack = pointX <= blackDownX && pointX >= blackUpX && pointY <= blackUpY && pointY >= blackDownY;
    bool isWhite = pointX < whiteDownX && pointX > whiteUpX && pointY < whiteUpY && pointY > whiteDownY;

    cout << (isBlack && !isWhite ? "HAPPY" : "SAD");

    return 0;
}
