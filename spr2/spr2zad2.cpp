#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

int main()
{
    double x;

    cout << "x = ";
    cin >> x;

    if (x < 8) cout << "f(x) = " << fixed << setprecision(3) << (5 * pow(x, 2)) + 3;
    else if (x = 8) cout << "f(x) = " << fixed << setprecision(3) << sqrt(x) - 7;
    else if (x > 8) cout << "f(x) = " << fixed << setprecision(3) << abs(x + 1);

    return 0;
}
