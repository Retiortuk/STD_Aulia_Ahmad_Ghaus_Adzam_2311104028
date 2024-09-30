#include <iostream>
using namespace std;

int tukar(int *a, int *b) {

    int temp ;
    temp = *a;
    *a = *b;
    *b = temp;
    return 0;
}

int main() {
    int num1, num2;

    cout << "Masukkan Bilangan Ke 1: ";
    cin >> num1;

    cout << "Masukkan Bilangan Ke 2: ";
    cin >> num2;

    cout << "Bilangan Sebelum Pertukaran:\n";
    cout << "Bilangan 1: " << num1 << " Bilangan 2: " << num2 <<endl;

    tukar(&num1, &num2);
    cout << "Bilangan Setelah Ditukar:\n";
    cout << "Bilangan 1: " << num1 << " Bilangan 2: " << num2 <<endl;

    return 0;
}