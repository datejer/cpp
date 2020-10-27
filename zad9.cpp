#include <iostream>
using namespace std;

int main()
{
    int n, x, y, z, j;

    cout << "Wpisz liczbe n: ";
    cin >> n;

   if (n <= 0)
    {
        cout << "Liczba nie moze byc mniejsza niz 1";
        return 1;
    }

    x = (n / 1000) % 10;
    y = (n / 100) % 10;
    z = (n / 10) % 10;
    j = n % 10;

    cout << "Liczba ma " << x << " tysiecy, " << y << " setek, " << z << " dziesiatek, " << j << " jednosci" ;
    return 0;
}
