#include <iostream>
using namespace std;

int main()
{
    int x, y, max;

    cout << "wpisz liczbe:\n";

    cin >> x;

    cout << "wpisz liczbe:\n";

    cin >> y;

    max = x > y ? x : y;

    cout << "\n" << "max = " << max << endl;

    return 0;
}
