#include <iostream>
#include <iomanip>
using namespace std;

int main ()
{
    double x = 123.666666666666;

    cout << "a. x = " << x << endl << endl;

    cout << "b. x = " << setw(9) << x << endl << endl;

    cout << "c. x = " << setfill('*') << setw(12) << x << endl << endl;

    cout << "d. x = " << setprecision(8) << x << endl << endl;

    cout << "d. x = " << setprecision(8) << setfill('0') << setw(14) << x << endl;

    return 0;
}
