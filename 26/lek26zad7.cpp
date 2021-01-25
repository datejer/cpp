#include <iostream>
using namespace std;

int main() {
    int x;

    cout << "numer dnia tygodnia: ";
    cin >> x;

    switch (x) {
        case 1:
        case 2:
        case 3:
        case 4:
        case 5: cout << "dzien roboczy"; break;
        case 6:
        case 7: cout << "dzien wolny od pracy"; break;
        default: cout << "nie ma takiego dnia!";
    }

    return 0;
}
