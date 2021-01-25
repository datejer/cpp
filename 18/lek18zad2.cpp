#include <iostream>
#include <string>

using namespace std;

int main()
{
    cout << "Jak masz na imie?" << endl;

    string imie;

    cin >> imie;

    cout << "Ile masz lat? " << endl;

    int wiek;

    cin >> wiek;

    cout << "Witaj, " << imie << "!\nNie wiedzialam, ze masz " << wiek << " lat!";

    return 0;
}
