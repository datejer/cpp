#include <iostream>

using namespace std;

int main() {
    int i,j;

    for (i=0;i<5;i++) {
        for (j=0;j<=i;j++) {
            cout << "X";
        }

        cout << endl;
    }

    return 0;
}
