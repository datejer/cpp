#include <iostream>

using namespace std;

int main() {
    int n, i;
    double s1, s2, k1, k2;

    cout << "podaj liczbe elementow n: ";
    cin >> n;

    s1 = 1;
    s2 = 1;
    k1 = 2;
    k2 = -3;
    i = 1;

    while (i<=n) {
        s1 *= k1;
        k1 += 0.5;
        s2 *= k2;
        k2 *= 0.1;
        i++;
    }

    cout << "wynik = " << s1/s2;

    return 0;
}
