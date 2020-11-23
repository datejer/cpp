#include <iostream>
using namespace std;

int main()
{
    int n, suma;

    cout << "n = ";

    cin >> n;

    suma = n * (n + 1) / 2;

    n > 0 ? cout << "\nsuma = " << suma << endl : cout << "Podaj liczbe wieksza od 0!";

    return 0;
}
