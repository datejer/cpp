#include <iostream>

using namespace std;

int main() {
    for (int i=99;i>=0;i-=1) {
        if (i % 2 == 0) continue;
        cout<<i<<endl;
    }

    cout<<endl;

    return 0;
}
