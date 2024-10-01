#include <iostream>

using namespace std;

int minimum(int array[], int len) {
    int min = array[0];
    for (int i = 1; i < len; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;}

int maksimal(int array[], int len) {
    int maks = array[0];
    for (int i = 1; i < len; i++) {
        if (array[i] > maks) {
            maks = array[i];
        }
    }
    return maks; }

int rata(int array[], int len) {
    int avg = array[0];
    for (int i = 0; i < len; i++) {
        avg += array[i];
    }
    return (int) avg / len;}

int main(){
    int len, pilih;

    cout << "Masukkan Panjang Data Array: ";
    cin >> len;
    int array[len];

    cout << "Masukkan Isian Array nya: ";
    for (int i = 0; i < len; i++) {
        cin >> array[i];
    }

    do {
        cout << "1. Cari Nilai Maksimum" << endl ;
        cout << "2. Cari Nilai Minimal" << endl ;
        cout << "3. Cari Nilai Rata-Rata" << endl ;
        cout << "Pilih 1-3: ";
        cin >> pilih;

        switch (pilih)
        {
        case 1 :
            cout << "Nilai Maksimum: " << maksimal(array, len) << endl ;
            break;
        case 2 :
            cout << "Nilai Minimal: " << minimum(array, len) << endl ;
            break;
        case 3 :
            cout << "Nilai Rata-Rata: " << rata(array, len) << endl ;
            break;
        default:
            cout << "Program Berakhir" << endl ;
        }
    } while (pilih != 4);

    return 0;
}
