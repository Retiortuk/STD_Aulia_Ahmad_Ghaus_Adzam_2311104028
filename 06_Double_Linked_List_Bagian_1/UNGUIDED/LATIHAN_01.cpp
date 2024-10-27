#include <iostream>
#include <string>
using namespace std;

struct Node {
    int id;
    string judul;
    string penulis;
    Node* next;
    Node* prev;
};

class DoublyLinkedList {
private:
    Node* head;
    Node* tail;

public:
    DoublyLinkedList() {
        head = nullptr;
        tail = nullptr;
    }

    void insertLast_2311104028(int id, string judul, string penulis) {
        Node* newNode = new Node();
        newNode->id = id;
        newNode->judul = judul;
        newNode->penulis = penulis;
        newNode->next = nullptr;
        newNode->prev = tail;
        if (tail != nullptr) {
            tail->next = newNode;
        }
        tail = newNode;
        if (head == nullptr) {
            head = newNode;
        }
    }

    void displayForward_2311104028() {
        Node* temp = head;
        cout << "Daftar Buku (Dari Awal ke Akhir):" << endl;
        while (temp != nullptr) {
            cout << "ID Buku: " << temp->id << ", Judul: " << temp->judul << ", Penulis: " << temp->penulis << endl;
            temp = temp->next;
        }
    }

    void displayBackward_2311104028() {
        Node* temp = tail;
        cout << "Daftar Buku (Dari Akhir ke Awal):" << endl;
        while (temp != nullptr) {
            cout << "ID Buku: " << temp->id << ", Judul: " << temp->judul << ", Penulis: " << temp->penulis << endl;
            temp = temp->prev;
        }
    }
};

int main() {
    DoublyLinkedList dll;
    int id;
    string judul, penulis;
    char choice;

    do {
        cout << "Masukkan ID Buku: ";
        cin >> id;
        cin.ignore();
        cout << "Masukkan Judul Buku: ";
        getline(cin, judul);
        cout << "Masukkan Penulis Buku: ";
        getline(cin, penulis);

        dll.insertLast_2311104028(id, judul, penulis);

        cout << "Tambah buku lain? (y/n): ";
        cin >> choice;
    } while (choice == 'y' || choice == 'Y');

    cout << endl;
    dll.displayForward_2311104028();
    cout << endl;
    dll.displayBackward_2311104028();

    return 0;
}
