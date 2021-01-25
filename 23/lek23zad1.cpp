#include <iostream>
using namespace std;

int main()
{
    double liczba;

    cout << "liczba = ";
    cin >> liczba;

    if (liczba > 0) {
        cout << "Wartosc bezwzgledna: " << liczba;
    } else if (liczba < 0) {
        cout << "Wartosc bezwzgledna: " << liczba * -1;
    } else if (liczba == 0) {
        cout << "Wartosc bezwzgledna: 0";
    }

    return 0;
}
