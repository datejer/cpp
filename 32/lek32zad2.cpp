#include <iostream>

using namespace std;

int main() {
    int a;
    int b;
    int i = 1;
    int w = 1;

    cout << "podaj liczbe: ";
    cin >> a;

    cout << "podaj potege: ";
    cin >> b;

    if (b == 0 && a != 0) cout << "wynik = 1";
    if (a == 0 && b == 0) cout << "nie istnieje";

    do {
        w *= a;

        i++;
    } while (i <= b);

    cout << "wynik = " << w;

    return 0;
}
