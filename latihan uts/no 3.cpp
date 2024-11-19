#include <iostream>

using namespace std;

void tampilkanGanjilGenap(int angka) {
    if (angka % 2 != 0) {
        cout << "G ";
    } else {
        cout << angka << " ";  //
    }
}

int main() {
    int angka;
    cout << "Masukkan angka: ";
    cin >> angka;

    for (int perulangan = 1; perulangan <= angka; perulangan++) {
        tampilkanGanjilGenap(perulangan);
    }

    cout << endl;
    return 0;
}
