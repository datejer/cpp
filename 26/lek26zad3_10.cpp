#include <iostream>
#include <ctime>
using namespace std;

void dane();
void data();
void algorytm();
int menu();

void dane() {
    cout << endl;
    cout << "Artur Dudek 2C" << endl;
    cout << "Technikum Komunikacji" << endl;
    cout << "Poznan, Polska" << endl;
    cout << endl;

    menu();
}

void data() {
    time_t now = time(0);

    char* dt = ctime(&now);

    cout << endl;
    cout << "Aktualna data i godzina: " << dt << endl;
    cout << endl;

    menu();
}

void algorytm() {
    int x;

    cout << endl;
    cout << "x = ";
    cin >> x;
    cout << "Suma " << x << " kolejnych liczb naturalnych wynosi: " << x*(x+1)/2;
    cout << endl;

    menu();
}

int menu() {
    int choice;

    cout << endl;
    cout << "1. Dane ucznia" << endl;
    cout << "2. Aktualna data" << endl;
    cout << "3. Samodzielnie wybrany algorytm" << endl;
    cout << "4. Zakonczenie programu" << endl;
    cout << "\nWyberz polecenie: ";

    cin >> choice;

    switch (choice) {
        case 1: dane(); break;
        case 2: data(); break;
        case 3: algorytm(); break;
        case 4: return 1; break;
    }
}

int main() {
    menu();

    return 0;
}
