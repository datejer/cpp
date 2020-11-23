#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int t = 325;

    cout << "t = " << t << endl;

    cout << "konwersja systemow liczbowych:" << endl;

    cout << "szesnastkowy = " << hex << t << endl;

    cout << "dziesietny = " << dec << t << endl;

    cout << "szesnastkowy = " << setfill('-') << setw(9) << hex << t << endl;

    cout << "osemkowy = " << setfill('^') << setw(14) << oct << t << endl;

    return 0;
}
