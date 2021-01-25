#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double x;

    cout << "x = ";
    cin >> x;

    if (x > 7) cout << "f(x) = " << pow(x, 3) + 1;
    else if (x = 7) cout << "f(x) = " << cos(x - 1);
    else if (x = 9) cout << "f(x) = " << sqrt(3 * x);
    else cout << "f(x) = " << -8 * x;

    return 0;
}
