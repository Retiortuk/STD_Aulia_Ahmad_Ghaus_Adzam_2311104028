#include <iostream>

using namespace std;

int minimum(int array[], int len) {
    int min = array[0];
    for (int i = 1; i < len; i++) {
        if (array[i] < min) {
            min = array[i];
        }
    }
    return min;
}

int maks(int array[], int len) {
    int maks = array[0];
    for (int i = 1; i < len; i++) {
        if (array[i] > maks) {
            maks = array[i];
        }
    }
    return 0;
}

int main(){

    int len, pilihan;

    cout << "Masukkan Panjang Data Array: ";
    cin >> len;
    int array[len];

    cout << "Masukkan Isian Array nya: ";
    for (int i = 0; i < len; i++) {
        cin >> array[i];
    }



    return 0;
}
