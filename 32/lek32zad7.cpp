#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

int main() {
    int n, a = 0, b = 0;

    srand(time(NULL));

    do {
        n = 2 + rand() % (50 - 2 + 1);

        if (n > a) a = n;

        b += n;
    } while (b % 7 != 0);

    cout << "najwieksza wygenerowana losowo liczba: " << a << endl;
    cout << "wartosc wyznaczonej sumy: " << b << endl;

    return 0;
}
