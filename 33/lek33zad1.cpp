#include <iostream>

using namespace std;

int main() {
    int n, w;

    cout << "wprowadz n: ";
    cin >> n;

    while(n > 0) {
        w += n % 10;
        n /= 10;
    }

    cout << "wynik = " << w;

    return 0;
}
