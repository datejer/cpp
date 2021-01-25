#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b, c, x, delta, x1, x2;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    if (a == 0) {
        if (b == 0) {
            if (c == 0) {
                cout << "Rownanie jest tozsamosciowe!";
            } else {
                cout << "Rownanie jest sprzeczne!";
            }
        } else {
            x = -c / b;

            cout << "x = " << x;
        }
    } else {
        delta = (b * b) * ((- 4) * a * c);

        if (delta < 0) {
            cout << "Brak pierwiastkow!";
        } else {
            if (delta == 0){
                x = -b / (2 * a);

                cout << "x = " << x;
            } else {
                x1 = (-b - sqrt(delta)) / (2 * a);
                x2 = (-b + sqrt(delta)) / (2 * a);

                cout << "x1 = " << x1 << endl;
                cout << "x2 = " << x2 << endl;
            }
        }
    }

    return 0;
}
