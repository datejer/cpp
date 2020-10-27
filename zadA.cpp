#include <iostream>
using namespace std;

int main()
{
    //wyœwietlenie  ”tekst” znak spacji  ”tekst”
    cout << "tekst tekst\n";


	//wyœwietlenie  tekst1 znak tabulatora poziomego tekst2 znak przejœcia do kolejnego wiersza tekst3
    cout << "tekst1\ttekst2\ntekst3\n";

	//zadeklarowanie zmiennych a i b typu ca³kowitego i przypisanie im odpowiednio wartoœci 5 i 3
    int a, b;
    a = 5;
    b = 3;

	//wyœwietlenie w osobnych wierszach a, b i sumy
    cout << "a = " << a << "\n" << "a = " << b << "\n" << "a + b = " <<a + b;

	//zadeklarowanie zmiennych c i d typu ca³kowitego
    int c, d;

	//wyœwietlenie tekstu Podaj dwie liczby
    cout << "\nPodaj dwie liczby:\n";

	//wczytanie wartoœci dla zmiennych c i d
    cin >> c;
    cin >> d;

	//wyœwietlenie w osobnych wierszach c, d i sumy
    cout << "c = " << c << "\n" << "d = " << d << "\n" << "c + d = " << c + d;

    return 0;
}
