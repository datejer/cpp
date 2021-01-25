#include <iostream>

using namespace std;

int main(){
    double s2, k1;
    double s1 = 1;
    int i = 1;
    int n;

    cout << "podaj n: ";
    cin >> n;

    k1 = (n * n) / i;

    do {
        if (i % 2 == 0) {
            s1 *= -k1;
        } else {
            s1 *= k1;
        }

        i++;
        k1 /= i;
        s2 += (1 / 3.);

    } while (i <= n);

    cout << "wynik = " << s1 / s2 << endl;
    return 0;
}
