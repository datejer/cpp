#include <iostream>

using namespace std;

int main() {
    int a;
    int w = 1;

    cout << "podaj liczbe: ";
    cin >> a;

    int i = a;

    if (a == 0) cout << "wynik = 1";
    if (a == 1) cout << "wynik = 1";

    do {
        w *= i;

        i--;
    } while (i >= 1);

    cout << "wynik = " << w;

    return 0;
}
