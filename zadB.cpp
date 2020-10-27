#include <iostream>
using namespace std;

int main() {
    int program;
    cout << "Ktory program? (1 lub 2) ";
    cin >> program;

    if (program == 1) {
        cout << "Artur Dudek\n16.05.2020\tPoznan, Polska";

        return 1;
    } else if (program == 2) {
        int a, b, p;

        cout << "a = ";
        cin >> a;

        cout << "b = ";
        cin >> b;

        cout << "\nDla podanych dlugosdci przyprostokatnych\n";

        cout << "a = " << a << "\t" << "b = " << b;

        p = (a * b) / 2;

        cout << "\npole trojkata prostokatnego\nP = " << p;

        return 2;
    } else {
        cout << "Taki program nie istnieje!";
        return 0;
    }
}
