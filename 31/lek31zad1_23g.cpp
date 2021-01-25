#include <iostream>

using namespace std;

int main() {
    int s1 = 0;
    int k1 = 2;
    int s2 = 1;
    int k2 = 3;
    int i = 1;
    int n;

    cout << "podaj liczbe elementow n: ";
    cin >> n;

    do {
        if (i % 2) {
            s1 -= k1;
            s2 *= k2;
        } else {
            s1 += k1;
            s2 *= -k2;
        }

        k1 += 5;
        k2 += 4;
        i++;
    } while (i <= n);

    cout << "wynik = " << (double)s1/s2 << endl;

    return 0;
}
