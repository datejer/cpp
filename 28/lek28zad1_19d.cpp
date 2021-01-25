#include <iostream>

using namespace std;

int main() {
    for (int i=12;i>=-12;i-=4) {
        if (i == 0) continue;
        cout<<i<<" ";
    }

    cout<<endl;

    return 0;
}
