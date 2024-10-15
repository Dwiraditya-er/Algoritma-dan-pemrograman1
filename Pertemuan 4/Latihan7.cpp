#include <iostream>
using namespace std;

int factorial(int n) {
    if (n == 0) return 1;
    else return n * factorial(n-1);
}

int main() {
    int num;
    cout << "Enter a number: ";
    cin >> num;

    cout << "Factorial of "<<num << " is " << factorial(num) << endl; // Dikarenakan di codeblock saya tidak terdapat error pada code tersebut, jadi saya rasa tidak ada code yang salah

    return 0;

}
