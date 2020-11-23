#include <iostream>
using namespace std;

int main()
{
    double x, y, iloraz;

    cout << "x = ";

    cin >> x;

    cout << "y = ";

    cin >> y;

    y > 0 ? cout << "\niloraz = " << x / y << endl : cout << "Nie mozna dzielic przez 0";

    return 0;
}
