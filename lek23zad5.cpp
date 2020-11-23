#include <iostream>
using namespace std;

int main()
{
    int n;

    cout << "n = ";
    cin >> n;

    if (n > 1) {
        cout << "Suma: " << (n * (n + 1)) / 2;
    } else {
        cout << "Liczba n musi byc > 1";
    }

    return 0;
}
