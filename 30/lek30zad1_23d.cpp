#include <iostream>

using namespace std;

int main() {
    int i, s1, s2, k2, n;

    cout << "podaj liczbe elementow n: ";
    cin >> n;

    i = 1;
    s1 = 0;
    s2 = 1;
    k2 = 2;

    while (i <= n) {
        s1 += i;
        s2 *= k2;
        k2 += 4;
        i++;
    }

    cout << "wynik = " << (double)s1/s2;

    return 0;
}
