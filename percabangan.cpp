#include <iostream>

using namespace std;

int main(){
    int nilai;
    
    cout << "Masukkan NiLai Anda: " << endl;
    cin >> nilai;

    if(nilai > 80) {
        cout << "Nilai Anda A" << endl;
    } else {
        cout << "Nilai Anda Bukan A" << endl;
    }

}