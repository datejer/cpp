#include <iostream>
using namespace std;

int main()
{
    double a, b, x;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    if (a == 0){
        if (b == 0) {
            cout << "Rownanie jest tozsamosciowe!";
        } else {
            cout << "Rownanie jest sprzeczne!";
        }
    } else {
        x = -b / a;

        cout << "x = " << x;
    }

    return 0;
}
