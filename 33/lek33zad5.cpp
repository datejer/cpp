#include <iostream>

using namespace std;

int main() {
    int n, najw, najm;

    for (int i = 0; i < 10; i++) {
        cout << "podaj liczbe calkowita: ";
        cin >> n;

        if (i == 0) {
        cout << "reset";
            najw = n;
            najm = n;
        } else {
            if (n > najw) najw = n;
            if (n < najm) najm = n;
        }
    }

    cout << endl << "najw: " << najw << endl;
    cout << "najm: " << najm;

    return 0;
}
