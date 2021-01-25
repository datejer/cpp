#include <iostream>
#include <cstdlib>
#include <ctime>
using namespace std;

int main()
{
    double k, b1, m, b2;

    srand(time(NULL));

    k = -210.4+(double)rand()/RAND_MAX*(180.3-(-210.4));
    b1 = -210.4+(double)rand()/RAND_MAX*(180.3-(-210.4));
    m = -210.4+(double)rand()/RAND_MAX*(180.3-(-210.4));
    b2 = -210.4+(double)rand()/RAND_MAX*(180.3-(-210.4));

    cout << "k = " << k << endl;
    cout << "b1 = " << b1 << endl;
    cout << "m = " << m << endl;
    cout << "b2 = " << b2 << endl;

    if (k * m == -1) cout << "Prostopad³e";
    else if (k == m) cout << "Rownolegle";
    else cout << "Nie zachodzi zadna z zaleznosci";

    return 0;
}
