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
// Hapus Proyek Berdasarkan nama Proyek
void removeProyek(Pegawai* head, const string& nama_proyek) {
    while (head != nullptr) {
        Proyek* prev = nullptr;
        Proyek* curr = head->proyek;

        while (curr != nullptr) {
            if (curr->nama_proyek == nama_proyek) {
                if (prev == nullptr) {
                    head->proyek = curr->next;
                } else {
                    prev->next = curr->next;
                }
                delete curr;
                break;
            }
            prev = curr;
            curr = curr->next;
        }
        break;  
    }
}

// Display
void display(Pegawai* head) {
    // Mengecek Kondisi Apakah Kosong untuk List Pegawai?
    while (head != nullptr) {
        // Kalo Ada maka akan display
        cout << "Nama Pegawai: " << head->nama << " ID Pegawai: " << head->id << endl;

        // Panggil Pointer/List Proyek nya
        Proyek* proyek = head->proyek;
        // Cek Apakah Kosong Untuk list Proyek nya
        while ( proyek != nullptr) {
            // Kalo ada bakal display
            cout << "Nama Proyek: " << proyek->nama_proyek << " Durasi Proyek: " << proyek->durasi << " Bulan." << endl;
            proyek = proyek->next;
        }
        cout << endl;
        head = head->next;
    }
}

