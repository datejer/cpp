#include <iostream>

using namespace std;

int main() {
    int s, k, i, n;

    cout << "podaj liczbe elementow n: ";
    cin >> n;

    s = 0;
    k = 2;
    i = 1;

    while (i<=n) {
        if (i%2 != 0) s -= k;
        else s += k;
        k += 3;
        i++;
    }

    cout << "s = " << s << endl;

    return 0;
}
