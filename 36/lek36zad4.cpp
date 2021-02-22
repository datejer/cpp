#include <iostream>

using namespace std;

int main() {
    int a, b;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    while (a != b) {
        if (a > b) a = a - b;
        else b = b - a;
    }

    cout << "NWD = " << a;

    return 0;
}
