#include <iostream>

using namespace std;

int main() {
    int n;
    int s = 0;
    int k = 3;
    int i = 1;

    cout << "podaj liczbe elementow n: ";
    cin >> n;

    do {
        s += 2. * k / i;
        k *= 2;
        i++;
    } while (i <= n);

    cout << "wynik = " << s << endl;

    return 0;
}
