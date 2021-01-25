#include <iostream>

using namespace std;

int main() {
    int a, i = 1, ujemne = 0, nieujemne = 0;

    do {
        cout << "podaj liczbe: ";
        cin >> a;

        if (a < 0) ujemne++;
        else nieujemne++;

        i++;
    } while (i <= 10);

    cout << "ujemnych = " << ujemne << endl;
    cout << "nieujemnych = " << nieujemne;

    return 0;
}
