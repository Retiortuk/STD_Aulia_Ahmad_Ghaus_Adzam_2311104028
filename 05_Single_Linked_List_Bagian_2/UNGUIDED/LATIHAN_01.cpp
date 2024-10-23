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



