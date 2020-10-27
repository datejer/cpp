#include <iostream>
using namespace std;

int main()
{
    int liczba, przeciwna;

    cout << "Wpisz liczbe: ";
    cin >> liczba;

    if (liczba == 0)
    {
        cout << "Liczba nie moze byc 0";
        return 1;
    }

    przeciwna = 0 - liczba;

    cout << "Liczba przeciwna do " << liczba << " to " << przeciwna;
    return 0;
}
