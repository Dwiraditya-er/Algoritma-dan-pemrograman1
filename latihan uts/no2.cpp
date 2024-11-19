#include <iostream>

using namespace std;

int main(){
    int angka;
    cout << "Masukan angka: ";
    cin >> angka;

    for (int perulangan = 1 ; perulangan <= angka; perulangan++) {
        if (perulangan % 2 != 0)
            cout << "G ";
        else
            cout << perulangan << " ";
    }
    cout << endl;
}
