#include <iostream>
using namespace std;

void dodawanie();
void odejmowanie();
void mnozenie();
void dzielenie();
int menu();

void dodawanie() {
    double x, y;

    cout << endl;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << x << " + " << y << " = " << x + y;

    cout << endl;

    menu();
}

void odejmowanie() {
    double x, y;

    cout << endl;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << x << " - " << y << " = " << x - y;

    cout << endl;

    menu();
}

void mnozenie() {
    double x, y;

    cout << endl;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << x << " * " << y << " = " << x * y;

    cout << endl;

    menu();
}

void dzielenie() {
    double x, y;

    cout << endl;

    cout << "x = ";
    cin >> x;

    cout << "y = ";
    cin >> y;

    cout << x << " / " << y << " = " << x / y;

    cout << endl;

    menu();
}

int menu() {
    int choice;

    cout << endl;
    cout << "1. Dodawanie" << endl;
    cout << "2. Odejmowanie" << endl;
    cout << "3. Mnozenie" << endl;
    cout << "4. Dzielenie" << endl;
    cout << "5. Zakoncz program" << endl;
    cout << "\nWyberz operacje: ";

    cin >> choice;

    switch (choice) {
        case 1: dodawanie(); break;
        case 2: odejmowanie(); break;
        case 3: mnozenie(); break;
        case 4: dzielenie(); break;
        case 5: return 1; break;
        default: return 1; break;
    }
}

int main() {
    menu();

    return 0;
}
