#include <iostream>
using namespace std;

int main()
{
    int n, i;
    double s;

    cout << "podaj liczbe elementow n: " << endl;
    cin >> n;

    s = 1;
    i = 1;

    while (i<=n) {
        s *= (double)(i+3)/n;
        i++;
    }

    cout<<"wynik = "<<s;

    return 0;
}
