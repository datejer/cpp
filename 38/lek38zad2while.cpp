#include <iostream>

using namespace std;

int main() {
    int ile = 0, i = 1, j = 0, k = 0;

    while (i <= 9) {
        while (j <= 9) {
            while (k <= 9) {
                if (i != j && i != k && j != k) {
                    cout << i << j << k << " ";
                    ile++;
                }
                k++;
            }
            k = 0;
            j++;
        }
        j = 0;
        i++;
    }

    cout << endl << "Liczb trzycyfrowych o niepowtarzaj¹cych siê cyfrach jest" << ile << endl;

    return 0;
}
