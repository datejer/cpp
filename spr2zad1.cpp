#include <iostream>
#include <ctime>
#include <cstdlib>
using namespace std;

int main()
{
    int liczba;

    srand(time(NULL));

    liczba = -574+rand()%(925-(-574)+1);

    cout << (liczba%11 == 0 ? "Wylosowana liczba jest podzielna przez 11" : "Wylosowana liczba nie jest podzielna przez 11");

    return 0;
}
