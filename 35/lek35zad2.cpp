#include <iostream>
#include <cmath>

using namespace std;

int main() {
    int n;
    int m = 10;

    cout << "Podaj liczbe n: ";
    cin >> n;

    int k = 0;
    int i = n;
    do {
        i /= 10;
        k++;
    } while (i != 0);

    int wynik = fmod(n * n, pow(m, k));

    if (n == wynik) cout << endl << "tak" << endl;
    else cout << endl << "nie" << endl;

    return 0;
}
