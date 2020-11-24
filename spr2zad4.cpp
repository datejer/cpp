#include <iostream>
using namespace std;

int main()
{
    double x, y;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    if (x == 0 && y == 0) cout << 0;
    else if (y == 0) cout << "OX";
    else if (x == 0) cout << "OY";
    else if (x > 0 && y > 0) cout << "I";
    else if (x < 0 && y > 0) cout << "II";
    else if (x < 0 && y < 0) cout << "III";
    else if (x > 0 && y < 0) cout << "IV";

    return 0;
}
