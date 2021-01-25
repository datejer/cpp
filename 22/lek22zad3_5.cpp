#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    srand(time(NULL));

    cout << "Liczba calkowita z przedzialu [-15, 15]: " << -15+rand()%(15-(-15)+1) << endl;

    cout << "Liczba calkowita z przedzialu [3, 25]: " << 3+rand()%(25-3+1) << endl;

    cout << "Liczba rzeczywista z przedzialu [1,5, 15]: " << 1.5+(double)rand()/RAND_MAX*(15-1.5) << endl;

    cout << "Liczba rzeczywista z przedzialu [0, 1]: " << (double)rand()/RAND_MAX << endl;

    cout << "Liczba rzeczywista z przedzialu [0, 64,5]: " << (double)rand()/RAND_MAX*64.5 << endl;

    return 0;
}
