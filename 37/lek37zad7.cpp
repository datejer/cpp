#include <iostream>

using namespace std;

int main() {
    int n;

    cout << "Podaj n: ";
    cin >> n;

    if (n == 1 || n == 2) {
        cout << "1";
    } else {
        int f1 = 1, f2 = 1, fn;

         cout << "1, 1";

        for (int i = 3; i <= n; i++) {
            fn = f1 + f2;
            f1 = f2;
            f2 = fn;

            cout << ", " << fn;
        }
    }

    return 0;
}
