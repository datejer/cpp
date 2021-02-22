#include <iostream>

using namespace std;

int main() {
    int ile = 0;

    for (int i = 1; i <= 9; i++) {
        for (int j = 0; j <= 9; j++) {
            for (int k = 0; k <= 0; k++) {
                if (i != j && i != k && j != k) {
                    cout << i << j << k << " ";
                    ile++;
                }
            }
        }
    }

    cout << endl << "Liczb trzycyfrowych o niepowtarzaj¹cych siê cyfrach jest" << ile << endl;

    return 0;
}
