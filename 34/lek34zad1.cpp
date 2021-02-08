#include <iostream>
#include <cstdlib>

using namespace std;

int main () {
    int n;

    cout << "Podaj liczbe n: " << endl;
    cin >> n;

    cout << "Dzielnikami liczby " << n << " sa: ";

    int dzielnik = 2;

    while (n > 1) {
        while (n % dzielnik == 0) {
            cout << dzielnik << " ";
            n = n / dzielnik;
        }
        dzielnik++;
    }

    return 0;
}
