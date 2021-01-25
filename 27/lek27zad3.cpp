#include <iostream>

using namespace std;

int main()
{
    // Od 1 do n, dodawanie

    int n, s;
    cout << "n = ";
    cin >> n;

    for (int i = 1; i <= n; i++) s += i;

    cout << "Suma wynosi: " << s << endl;

    return 0;
}
