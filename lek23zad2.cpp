#include <iostream>
using namespace std;

int main()
{
    int liczba;

    cout << "liczba = ";
    cin >> liczba;

    if (liczba % 2 == 0) {
        cout << "Liczba jest parzysta";
    } else {
        cout << "Liczba nie jest parzysta";
    }

    return 0;
}
