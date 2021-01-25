#include <iostream>

using namespace std;

int main() {
    int x, niezera = 0, w = 1;

    do {
        cout << "podaj liczbe rozna od zera: ";
        cin >> x;

        if (x == 0) continue;
        else niezera++;

        w *= x;
    } while (w <= 10000);

    cout << "ilosc liczb roznych od zera: " << niezera << endl;
    cout << "wartosc iloczynu: " << w << endl;

    return 0;
}
