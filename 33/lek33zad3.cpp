#include <iostream>

using namespace std;

int main() {
    int x, y, w;

    cout << "poczatek przedzialu: ";
    cin >> x;

    cout << "koniec przedzialu: ";
    cin >> y;

    while(x <= y) {
        w += x;
        x++;
    }

    cout << "wynik = " << w;

    return 0;
}
