#include <iostream>

using namespace std;

int main() {
    int liczba;
    int suma = 0;

    cout << "Podaj liczbe: ";
    cin >> liczba;

    if (liczba == 0) {
        cout << "Liczba nie jest doskonala";
    } else {
        for(int i = 1; i < liczba; i++) {
            if (liczba % i == 0) {
                cout << i << " ";
                suma = suma + i;
            }
        }

        cout << endl << "Suma: " << suma << endl;

        if (liczba == suma) cout << "Liczba jest doskonala.";
        else cout << "Liczba nie jest doskonala.";
    }

    return 0;
}
