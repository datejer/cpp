#include <iostream>

using namespace std;

int main() {
    int n;
    int i = 1;

    cout << "podaj liczbe n: ";
    cin >> n;

    do {
        if (n % i == 0) cout << i << " ";

        i++;
    } while (i <= n);

    return 0;
}
