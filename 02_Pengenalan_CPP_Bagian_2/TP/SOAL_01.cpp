#include <iostream>

using namespace std;

int kendaraan(int kapasitas_kendaraan, int jumlah_penumpang) {
    int jumlah;

    jumlah = jumlah_penumpang / kapasitas_kendaraan;
    if (jumlah_penumpang % kapasitas_kendaraan > 0) {
        jumlah++;
    }
    return jumlah;
}

int main () {
    int kap_kendaraan, jum_penumpang, banyak_kendaraan;

    cout << "Masukkan Kapasitas Kendaraan: ";
    cin >> kap_kendaraan;

    cout << "Masukkan Jumlah Penumpang: ";
    cin >> jum_penumpang;

    banyak_kendaraan = kendaraan(kap_kendaraan, jum_penumpang);
    cout << "Banyak Kendaraan Yang Disewa: " << banyak_kendaraan << endl;
    return 0;
}