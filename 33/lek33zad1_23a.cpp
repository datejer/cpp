#include <iostream>

using namespace std;

int main() {
    char petla;

    cout << "Podaj petle: F - for, W - while, D - do... while" << endl;
    cin >> petla;

    switch (petla) {
        case 'F':
            {
                int n, w = 0, x = -2;
                cout << "Podaj n: ";
                cin >> n;

                if (n != 0) {
                    for (int i = 0; i < n; i++) {
                        w += x;

                        x = x % 2 ? -(x + 3) : -(x - 3);
                    }

                    cout << "Wynik: " << w;
                } else {
                    cout << "Bledne dane";
                }

                break;
            }
        case 'W':
            {
                int n, w = 0, x = -2;
                cout << "Podaj n: ";
                cin >> n;

                if (n != 0) {
                    while (n) {
                        w += x;

                        x = x % 2 ? -(x + 3) : -(x - 3);

                        n--;
                    }

                    cout << "Wynik: " << w;
                } else {
                    cout << "Bledne dane";
                }

                break;
            }
        case 'D':
            {
                int n, w = 0, x = -2;
                cout << "Podaj n: ";
                cin >> n;

                if (n != 0) {
                    do {
                        w += x;

                        x = x % 2 ? -(x + 3) : -(x - 3);

                        n--;
                    } while (n > 0);

                    cout << "Wynik: " << w;
                } else {
                    cout << "Bledne dane";
                }

                break;
            }
        default:
            cout << "Program akceptuje tylko: F - for, W - while, D - do... while";
    }

    return 0;
}
