#include <iostream>
using namespace std;

int main()
{
    //wy�wietlenie  �tekst� znak spacji  �tekst�
    cout << "tekst tekst\n";


	//wy�wietlenie  tekst1 znak tabulatora poziomego tekst2 znak przej�cia do kolejnego wiersza tekst3
    cout << "tekst1\ttekst2\ntekst3\n";

	//zadeklarowanie zmiennych a i b typu ca�kowitego i przypisanie im odpowiednio warto�ci 5 i 3
    int a, b;
    a = 5;
    b = 3;

	//wy�wietlenie w osobnych wierszach a, b i sumy
    cout << "a = " << a << "\n" << "a = " << b << "\n" << "a + b = " <<a + b;

	//zadeklarowanie zmiennych c i d typu ca�kowitego
    int c, d;

	//wy�wietlenie tekstu Podaj dwie liczby
    cout << "\nPodaj dwie liczby:\n";

	//wczytanie warto�ci dla zmiennych c i d
    cin >> c;
    cin >> d;

	//wy�wietlenie w osobnych wierszach c, d i sumy
    cout << "c = " << c << "\n" << "d = " << d << "\n" << "c + d = " << c + d;

    return 0;
}
