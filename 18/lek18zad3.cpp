#include <iostream>
using namespace std;

int main ()
{
    double r, h, V;
    float pi = 3.1416;

    cout << "dlugosc promienia:\n";

    cin >> r;

    cout << "\nwysokosc:\n";

    cin >> h;

    /*
    Walec jest bryłą geometryczną ograniczoną powierzchnią
    walcową i dwiema płaszczyznami nierównoległymi do jej tworzącej.

    Program oblicza wzór na objętość walca:

    V = π * r^2 * H
    */

    V = pi * (r * r) * h;

    cout << "\n\nobjetosc = " << V << endl;

    return 0;
}
