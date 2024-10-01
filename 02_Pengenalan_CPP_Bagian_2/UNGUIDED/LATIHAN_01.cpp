#include <iostream>
using namespace std;
int main(){
    int n;
    cout << "Masukkan Panjang Array: ";
    cin >> n;

    int array[n];
    for(int i = 0; i < n; i++) {
        cin >> array[i];
    }
    cout << "Data Array: ";
    for(int i = 0; i < n; i++){
        cout << array[i] << ",";
    }
    cout << endl;
    cout << "Hasil Dalam Genap: ";
    for(int i = 0; i < n; i++) {
        if(array[i] % 2 == 0) {
            cout << array[i] << ",";
        }
    }
    cout << endl;  
    cout << "Hasil Dalam Ganjil: ";
    for(int i = 0; i < n; i++) {
        if(array[i] % 2 != 0) {
            cout << array[i] << ",";
        }
    }
    cout << endl;
    return 0;
}