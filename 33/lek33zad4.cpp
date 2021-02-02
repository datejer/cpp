#include <iostream>

using namespace std;

int main() {
    int n, parzyste = 0, nieparzyste = 0;

    for (int i = 0; i < 20; i++) {
        cout << "podaj liczbe calkowita: ";
        cin >> n;

        if (n % 2 == 0) parzyste++;
        else nieparzyste++;
    }

    cout << endl << "parzyste: " << parzyste << endl;
    cout << "nieparzyste: " << nieparzyste;

    return 0;
}
