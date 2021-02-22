#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "a = ";
    cin >> a;
    int a2 = a;

    cout << "b = ";
    cin >> b;
    int b2 = b;

    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }

    cout << "NWW = " << (a2 * b2) / a;

    return 0;
}
