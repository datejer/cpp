#include <iostream>
using namespace std;

main()
{
    long int s=1;
    long int k=4;
    long int i=1;
    long int n;

    cout << "podaj liczbe elementow n: " << endl;
    cin >>  n;

    while (i<=n) {
        if (i%2 != 0) s *= k;
        else s *= -k;
        k += 4;
        i++;
    }

    cout << "s = " << s;

    return 0;
}
