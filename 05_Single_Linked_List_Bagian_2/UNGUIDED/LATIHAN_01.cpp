#include <iostream>
#include <string>

using namespace std;

struct Mahasiswa {
    int NIM;
    string nama;
    Mahasiswa* next;
};

void inputMahasiswa(Mahasiswa*& head, int NIM, string nama) {
    Mahasiswa* newNode = new Mahasiswa();
    newNode ->NIM = NIM;
    newNode ->nama = nama;
    newNode ->next = nullptr;

    if (head == nullptr) {
        head = newNode;
    } else {
        Mahasiswa* temp = head;
        while (temp ->next != nullptr) {
            temp = temp ->next;
        }
        temp ->next = newNode;
    }
}

Mahasiswa* cariMahasiswa(Mahasiswa* head, int NIM) {
    Mahasiswa* temp = head;
    while (temp != nullptr) {
        if (temp ->NIM == NIM) {
            return temp;
        }
        temp = temp->next;
    }
    return nullptr;
}

void outputMahasiswa(Mahasiswa* head) {
    Mahasiswa* temp = head;
    while (temp != nullptr) {
        cout << "Nama: " << temp->nama << " NIM: " << temp->NIM << endl;
        temp = temp->next;
    }
}

int main() {
    Mahasiswa* head = nullptr;
    int NIM, pilihan;
    string nama;

    do {
        cout << "Menu:\n";
        cout << "1. Tambah Mahasiswa\n";
        cout << "2. Cari Mahasiswa Berdasarkan NIM\n";
        cout << "3. Tampilkan Semua Mahasiswa\n";
        cout << "4. Keluar\n";
        cout << "Pilih menu: ";
        cin >> pilihan;

        switch (pilihan)
        {
        case 1:
            cout << "Masukan NIM: ";
            cin >> NIM;
            cin.ignore();
            cout << "Masukan Nama: ";
            getline(cin, nama);
            inputMahasiswa(head, NIM, nama);
            break;

        case 2:
            cout << "Masukan NIM Mahasiwa Yang Ingin dicari: ";
            cin >> NIM;
            Mahasiswa* hasil;
            hasil = cariMahasiswa(head, NIM);
            if (hasil != nullptr) {
                cout << "Mahasiswa Dengan NIM: " << NIM << hasil->nama << " Ditemukan " << endl;
            } else {
                cout << "Mahasiswa Dengan NIM: " << NIM << " Tidak Ditemukan" << endl;
            }
            break;

        case 3:
            cout << "Data Mahasiswa\n";
            outputMahasiswa(head);
            break;

        case 4:
            cout << "Anda Telah Keluar dari Program" << endl;
            break;
        
        default:
            cout << "Pilihan Tidak Valid" << endl;
            break;
        }
    } while (pilihan != 4);

    return 0;
}



