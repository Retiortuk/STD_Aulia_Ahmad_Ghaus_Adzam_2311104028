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

// Buat Nge add pengawai baru disini! uy!
void addPegawaiBaru(Pegawai*& head, const string& nama, const string& id) {
    Pegawai* newPegawai = new Pegawai;
    newPegawai->nama = nama;
    newPegawai->id = id;
    newPegawai->proyek = nullptr;
    newPegawai->next = head;
    head = newPegawai; 
}
// buat add proyek ke dalam pegawai
void addProyek(Pegawai* head, const string& nama_proyek, int durasi){
    while (head != nullptr) {
        Proyek* newProyek = new Proyek;
        newProyek->nama_proyek = nama_proyek;
        newProyek->durasi = durasi;
        newProyek->next = head->proyek;
        head->proyek = newProyek;
        break;
    }
}



