#include <iostream>
#include <string>
using namespace std;

// Data Mahasiswa 
struct Mahasiswa {
    string nama;
    int nim;
    Mahasiswa* next;
};

Mahasiswa* front = nullptr;
Mahasiswa* rear = nullptr;

bool isEmpty() {
    return front == nullptr;
}

// BUAT PUSH KE QUEUE
void enqueueMahasiswa(string nama, int nim) {
    Mahasiswa* newMahasiswa = new Mahasiswa();
    newMahasiswa->nama = nama;
    newMahasiswa->nim = nim;
    newMahasiswa->next = nullptr;

    if (isEmpty()) {
        front = rear = newMahasiswa;
    } else {
        rear->next = newMahasiswa;
        rear = newMahasiswa;
    }
    cout << "Mahasiswa " << nama << " dengan NIM " << nim << " telah ditambahkan ke dalam queue." << endl;
}

// HAPUS DARI QUEUE
void dequeueMahasiswa() {
    if (isEmpty()) {
        cout << "Antrian kosong, tidak ada yang bisa dihapus." << endl;
    } else {
        Mahasiswa* temp = front;
        cout << "Mahasiswa " << front->nama << " dengan NIM " << front->nim << " telah dikeluarkan dari queue." << endl;
        front = front->next;
        delete temp;

        if (front == nullptr) {
            rear = nullptr;
        }
    }
}

// NGDISPLAY
void viewQueue() {
    if (isEmpty()) {
        cout << "Antrian kosong." << endl;
    } else {
        Mahasiswa* temp = front;
        cout << "Data antrian mahasiswa:" << endl;
        int count = 1;
        while (temp != nullptr) {
            cout << count++ << ". Nama: " << temp->nama << ", NIM: " << temp->nim << endl;
            temp = temp->next;
        }
    }
}

int main() {
    int pilihan;
    string nama;
    int nim;

    do {
        cout << "\nMenu Queue Mahasiswa:" << endl;
        cout << "1. Tambah Mahasiswa ke Queue" << endl;
        cout << "2. Hapus Mahasiswa dari Queue" << endl;
        cout << "3. Lihat Isi Queue" << endl;
        cout << "4. Keluar" << endl;
        cout << "Pilih opsi: ";
        cin >> pilihan;

        if(cin.fail()) {
            cin.clear(); 
            cin.ignore(1000, '\n'); 
            cout << "Input tidak valid. Silakan masukkan angka antara 1-4." << endl;
            continue;
        }

        cin.ignore(); 

        switch (pilihan) {
            case 1:
                cout << "Masukkan Nama Mahasiswa: ";
                getline(cin, nama);
                cout << "Masukkan NIM Mahasiswa: ";
                cin >> nim;

                if(cin.fail()) {
                    cin.clear(); 
                    cin.ignore(1000, '\n'); // Biar Gak Ngebug LOOPING TERUS
                    cout << "NIM tidak valid. Silakan masukkan angka." << endl;
                    continue;
                }

                enqueueMahasiswa(nama, nim);
                break;
            case 2:
                dequeueMahasiswa();
                break;
            case 3:
                viewQueue();
                break;
            case 4:
                cout << "Keluar dari program." << endl;
                break;
            default:
                cout << "Pilihan tidak valid. Silakan coba lagi." << endl;
        }
    } while (pilihan != 4);
    return 0;
}
