#include <iostream>

using namespace std;

int main()
{
int a,b;
    cout << "enter two number: " ;
    cin >> a;
    cin >> b;

    if (a > b)
        cout << "a is greater than b" << endl;
    else
        cout << "b is greater than a" << endl; //kesalahan pada akhir baris code tidak terdapat titik koma atau semicolon contoh ;

    return 0;
}
