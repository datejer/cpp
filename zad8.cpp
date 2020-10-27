#include <iostream>
using namespace std;

int main()
{
    int n, wynik;

    cout << "Wpisz liczbe n: ";
    cin >> n;

    if (liczba <= 1)
    {
        cout << "Liczba nie moze byc mniejsza niz 2";
        return 1;
    }

    wynik = (n * (n + 1)) / 2;

    cout << "Suma ciagu n kolejnych liczb to " << wynik;
    return 0;
}
