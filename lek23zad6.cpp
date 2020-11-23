#include <iostream>
using namespace std;

int main()
{
    int a, b, c;

    cout << "a = ";
    cin >> a;

    cout << "b = ";
    cin >> b;

    cout << "c = ";
    cin >> c;

    if (a > b && a > c) {
        cout << "Najwieksza: " << a;
    } else if (b > a && b > c) {
        cout << "Najwieksza: " << b;
    } else if (c > a && c > b) {
        cout << "Najwieksza: " << c;
    } else {
        cout << "Liczby sa takie same!";
    }

    return 0;
}
