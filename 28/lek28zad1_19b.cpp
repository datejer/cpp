#include <iostream>

using namespace std;

int main() {
    cout<<"zadanie 1.19b instrukcja for:"<<endl;

    for (int i=-4;i<=14;i+=3) {
        if (i==2||i==8) continue;
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}
