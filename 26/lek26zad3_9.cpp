#include <iostream>
#include <cmath>
using namespace std;

int main() {
    double x;
    int n;

    cout << "podaj x: ";
    cin >> x;

    cout << "podaj n: ";
    cin >> n;

    switch (n) {
        case 1: cout << "f(x) = " << sqrt(2 * x); break;
        case 2: cout << "f(x) = " << pow(x, 3) - 5; break;
        case 3: cout << "f(x) = " << cos(x) + 1; break;
        default: cout << "f(x) = " << 1; break;
    }

    return 0;
}
