#include <iostream>

using namespace std;

int main() {
    int i;

    // Rosn¹co

    i = 1;

    while (i<=999) {
        if (i % 2 != 0) cout << i << endl;
        i++;
    }

    // Malej¹co

    i = 999;

    while (i>=1) {
        if (i % 2 != 0) cout << i << endl;
        i--;
    }

    return 0;
}
