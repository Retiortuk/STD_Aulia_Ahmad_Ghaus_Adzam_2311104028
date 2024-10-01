#include <iostream>
using namespace std;

int main() {
    int x,y,z;

    cout << "Masukkan Ukuran Array (x): ";
    cin >> x;
    cout << "Masukkan Ukuran Array (y): ";
    cin >> y;
    cout << "Masukkan Ukuran Array (z): ";
    cin >> z;
    int array[x][y][z];

    cout << "Masukkan Isian Array: \n";
    for(int i = 0; i < x; i++) {
        for (int a = 0; a < y; a++) {
            for (int b = 0; b < z; b++) {
                cout << "Array[" << x << "][" << y << "][" << z << "]";
                cin >> array[i][a][b];
            }
        }
    }

    cout << "\nElemen-elemen dari array tiga dimensi: \n";
    for (int i = 0; i < x; i++) {
        for (int a = 0; a < y; a++) {
            for (int b = 0; b < z; b++) {
                cout << "Array[" << i << "][" << a << "][" << b << "] = " << array[i][a][b] << endl;
            }
        }
    }

    return 0;
}
