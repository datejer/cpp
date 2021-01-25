#include <iostream>
using namespace std;

int main()
{
    double s1, s2, k1, k2;
    int n, i;

    cout << "podaj liczbe elementow n: ";
    cin >> n;

    s1 = 1;
    s2 = 1;
    k1 = 1;
    k2 = -0.2;
    i = 1;

    while (i<=n) {
        s1 *= k1;
        k1 *= -1;
        s2 *= k2;
        k2 += 0.3;
        i++;
    }

    cout << "wynik = " << s1/s2;

    return 0;
}
