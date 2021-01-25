#include <iostream>

using namespace std;

int main() {
    int n, i, s;

    cout << "podaj liczbe elementow n: ";
    cin >> n;

    s = 0;
    i = 1;

    while (i<=n) {
        s += i;
        i++;
    }

    cout << "wynik = " << 2.*n/s;

    return 0;
}
