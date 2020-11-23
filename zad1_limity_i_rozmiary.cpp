#include <iostream>
#include <limits>

using namespace std;

int main()
{
//podrêcznik str.222

cout <<"\nOperator rozmiaru sizeof i zakres wartosci dla wybranych typow danych"<<endl;

//zakres dla typu int
cout<<"\nsizeof(int) = "<< sizeof(int)<<" [byte]"<<endl;
cout<<"min(int): "<<numeric_limits<int>::min()<<endl;
cout<<"max(int): "<<numeric_limits<int>::max()<<endl;

//zakres dla typu float

cout<<"\nsizeof(float) = "<< sizeof(float)<<" [byte]"<<endl;
cout<<"min(float): "<<numeric_limits<float>::min()<<endl;
cout<<"max(float): "<<numeric_limits<float>::max()<<endl;

//zakres dla typu double

cout<<"\nsizeof(double) = "<< sizeof(double)<<" [byte]"<<endl;
cout<<"min(double): "<<numeric_limits<double>::min()<<endl;
cout<<"max(double): "<<numeric_limits<double>::max()<<endl;

//ewentualne inne typy danych

cout<<"\nsizeof(long) = "<< sizeof(long)<<" [byte]"<<endl;
cout<<"min(long): "<<numeric_limits<long>::min()<<endl;
cout<<"max(long): "<<numeric_limits<long>::max()<<endl;

return 0;
}
