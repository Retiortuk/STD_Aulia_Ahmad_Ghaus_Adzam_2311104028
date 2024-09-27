#include <iostream>
#include <string>

using namespace std;



int main() {
    int angka ;

    cout << "Masukan Angka: ";
    cin >> angka;


    if(angka < 0 || angka > 100) {
        cout << "Angka Terlalu Besar Atau Kecil. " << endl;
    } else {
        cout << "" ;
    }

    return 0;
}