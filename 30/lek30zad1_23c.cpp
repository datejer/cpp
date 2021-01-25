#include <iostream>

using namespace std;

int main() {
    int s = 0, k = 1, i = 1, n;

    cout << "podaj liczbe elementów n: ";
    cin >> n;

    while (i<=n) {
        k *= i;
        s += k;
        i++;
    }

    cout << "s = " << s;

    return 0;
}
