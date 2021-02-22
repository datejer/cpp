#include <iostream>

using namespace std;

int main() {
    int a, b, r;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    while (b != 0) {
        r = a % b;
        a = b;
        b = r;
    }

    cout << "NWD = " << a;

    return 0;
}
