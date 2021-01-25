#include <iostream>

using namespace std;

int main() {
    int n, i;
    double s;

    cout << "podaj liczbe elementow n: ";
    cin >> n;

    s = 0;
    i = 1;

    while (i<=n) {
        s += 1./(2*i);
        i++;
    }

    cout << "wynik = " << s;

    return 0;
}
