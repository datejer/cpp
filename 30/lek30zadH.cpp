#include <iostream>

using namespace std;

int main() {
    long a, b;

    cout << "podaj liczbe: ";
    cin >> a;

    cout << "podaj potege: ";
    cin >> b;

    if (b == 0) {
        cout << "wynik = 1";
        return 1;
    }
    if (a == 0 && b == 0) {
        cout << "0 do potegi 0 nie istnieje";
        return 1;
    }

    long i = 0;
    long s = 1;

    while (i<b) {
        s = s * a;
        i++;
    }

    cout << "wynik = " << s;

    return 0;
}
