#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    double x = 1234.555555;
    double y = 21.1234567812345678;
    double w, z;

    cout << "podaj dwie liczby rzeczywiste:\n";

    cin >> w;
    cin >> z;

    cout << "\nx = " << setfill(' ') << setw(12) << setprecision(6) << x;
    cout << "\n\ny = " << setfill('&') << setw(15) << setprecision(6) << y;
    cout << "\n\ny = " << setfill('*') << setw(12) << setprecision(10) << y;
    cout << "\n\nw = " << setfill('0') << setw(11) << w;
    cout << "\n\nz = " << setfill('0') << setw(16) << z;

    cout << "\n\nx + y + w = " << setprecision(12) << x + y + w;

    cout << "\n\nx * z = " << setprecision(7) << x * z << endl;

    return 0;
}
