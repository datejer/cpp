#include <iostream>

using namespace std;

int main() {
    int n, s;

    cout << "Podaj liczbe n: " << endl;
    cin >> n;

    cout << "Rozklad " << n << " na czynniki: " << endl;

    int dzielnik = 2;

    while (n > 1) {
        s = 0;

        while (n % dzielnik == 0) {
            s += 1;
            n = n / dzielnik;
        }

        if(s == 0) cout << "";
        else cout << dzielnik << " ^ " << s << " ";

        dzielnik++;
    }

    return 0;
}
