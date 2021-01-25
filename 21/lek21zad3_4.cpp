#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    double a, b;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "x = " << sqrt(7/(pow(a,3)+cos(b))) << endl;

    cout << "y = " << sin(pow(a+b,4)/(sqrt(11)+1)) << endl;

    cout << "z = " << pow(cos(a+1)/(sqrt(5)+3),3) << endl;

    return 0;
}
