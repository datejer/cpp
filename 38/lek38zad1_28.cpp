#include <iostream>

using namespace std;

int main() {
    cout << "a) ";

    for (int i = 0; i < 6; i++) {
        cout << "*-|";
    }

    cout << endl << endl;

    cout << "b) ";

    for (int i = 1; i <= 4; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        if (i % 2 == 0) cout << "^^";
        else cout << "&&";
    }

    cout << endl << endl;

    cout << "c) ";

    for (int i = 1; i <= 5; i++) {
        cout << "*";
        if (i % 2 == 0) {
            for (int j = 1; j <= i; j++) cout << "-";
        } else {
            for (int j = 1; j <= i; j++) cout << "|";
        }
    }

    cout << endl << endl;

    cout << "d) ";

    for (int i = 1; i <= 3; i++) {
        for (int j = 1; j <= i; j++) cout << "*";
        for (int j = 3; j >= i; j--) cout << "|";
        if (i % 2 == 0) for (int j = 0; j < 4; j++) cout << "$";
        else for (int j = 0; j < 2; j++) cout << "$";
    }

    return 0;
}
