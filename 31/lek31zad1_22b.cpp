#include <iostream>

using namespace std;

int main() {
    int i = 24;

    do {
        if (i % 4) cout << i << " ";
        i--;
    } while (i > 8);

    return 0;
}
