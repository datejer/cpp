#include <iostream>
using namespace std;

int main()
{
    int x, y, z;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << "z = ";
    cin >> z;

    cout << (x%2 != 0 || y%2 != 0 || z%2 != 0 ? "TAK" : "NIE");

    return 0;
}
