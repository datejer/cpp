#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    int a = 0+rand()%(1000-0+1);
    int b = 0+rand()%(1000-0+1);

    cout << "a = " << a << endl;
    cout << "b = " << b << endl;

    cout << "Najwieksza liczba sposrod 2 losowych: " << (a > b ? a : b) << endl;

    return 0;
}
