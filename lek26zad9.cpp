#include <iostream>
#include <string>
using namespace std;

int main() {
    string figura;
    int choice;

    cout << "wybierz jedna z figur (prostokat, trojkat, kolo): ";
    cin >> figura;

    if (figura == "prostokat") choice = 1;
    else if (figura == "trojkat") choice = 2;
    else if (figura == "kolo") choice = 3;
    else choice = 0;

    switch (choice) {
        case 1: cout << "\nPole = a * a\nObwod = 2 * (a + b)" << endl; break;
        case 2: cout << "\nPole = 0.5 * a * h\nObwod = a + b + c" << endl; break;
        case 3: cout << "\nPole = PI * r * r\nObwod = 2 * PI * r" << endl; break;
        default: cout << "\nnie mamy jeszcze takiej figury! :\)" << endl;
    }

    return 0;
}
