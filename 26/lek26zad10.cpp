#include <iostream>
#include <string>
using namespace std;

int main() {
    int msc, rok;

    cout << "rok = ";
    cin >> rok;

    cout << "miesiac = ";
    cin >> msc;

    switch (msc) {
        case 1: cout << "styczen ma: 31 dni" << endl; break;
        case 2: cout << (rok % 4 == 0 ? "luty ma: 29 dni (rok prestepny)" : "luty ma: 28 dni") << endl; break;
        case 3: cout << "marzec ma: 31 dni" << endl; break;
        case 4: cout << "kwiecien ma: 30 dni" << endl; break;
        case 5: cout << "maj ma: 31 dni" << endl; break;
        case 6: cout << "czerwiec ma: 30 dni" << endl; break;
        case 7: cout << "lipiec ma: 31 dni" << endl; break;
        case 8: cout << "sierpien ma: 31 dni" << endl; break;
        case 9: cout << "wrzesien ma: 30 dni" << endl; break;
        case 10: cout << "pazdziernik ma: 31 dni" << endl; break;
        case 11: cout << "listopad ma: 30 dni" << endl; break;
        case 12: cout << "grudzien ma: 31 dni" << endl; break;
        default: cout << "nie ma takiego miesiaca!" << endl;
    }

    return 0;
}
