#include <iostream>

using namespace std;

int main() {
    int n, i, k, s;

    cout << "Podaj liczbe elementow n: ";
    cin >> n;

    s = 0;
    k = -10;
    i = 1;

    while (i<=n) {
        s += k;
        k += 6;
        i++;
    }

    cout << "s = " << s << endl;

    return 0;
}
