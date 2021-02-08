#include <iostream>

using namespace std;

int main() {
    double skladka = 100.0;
    double prowizja = 0.1;
    double dochodowosc = 0.05;
    int ile_lat = 35;
    double kapital = 0.0;

    for (int i = 0; i < 12 * ile_lat; i++) {
        kapital = kapital * (1.0 + dochodowosc / 12.0);
        kapital = kapital + skladka * (1.0 - prowizja);
    }

    cout << "Suma wplaconych skladek: " << skladka * 12 * ile_lat;
    cout << "\nKapital po latach: " << kapital;

    return 0;
}
