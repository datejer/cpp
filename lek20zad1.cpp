#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "wpisz liczbe:\n";

    cin >> n;

    cout << "\n" << ((n%2) == 0 ? "liczba jest parzysta" : "liczba nie jest parzysta") << endl;

    return 0;
}
