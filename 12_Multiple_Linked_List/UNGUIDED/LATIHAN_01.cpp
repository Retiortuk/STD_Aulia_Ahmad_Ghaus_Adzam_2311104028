#include <iostream>
#include <string>
using namespace std;

struct Proyek {
    string nama_proyek;
    int durasi;
    Proyek* next;
};

struct Pegawai {
    string nama;
    string id;
    Proyek* proyek;
    Pegawai* next;
};

// Void buat Membuat List Proyek Kosong
void createPegawaiList(Pegawai*& head) {
    head = nullptr;
}
// Void buat Proyek Kosong
void createProyekList(Proyek*& head) {
    head = nullptr;
}



