#include <iostream>

using namespace std;

int main() {
    // Rosn¹co wypisuje 3-cyfrowe liczby podzielne przez 4

    for (int i=1;i<=999;i+=1) {
        if (i % 4 != 0) continue;
        cout<<i<<endl;
    }

    cout<<endl;

    return 0;
}
