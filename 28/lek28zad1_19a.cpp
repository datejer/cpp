#include <iostream>

using namespace std;

int main() {

    //1

    for(int i=-4;i<=14;i+=3) cout << i << " ";

    cout << endl;


    //2

    int w = -4;
    for(int i=1;i<=7;i++) {
        cout<<w<<" ";
        w+=3;
    }
    cout << endl;


    //3

    for (int i=1,w=-4;i<=7;i++,w+=3)
    cout << w << " ";

    return 0;

}
