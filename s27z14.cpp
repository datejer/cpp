#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    cout << "d = ";
    cin >> d;

    cout << (a < 5 && b < 5 && c < 5 && d < 5 ? "TAK" : "NIE");

    return 0;
}
