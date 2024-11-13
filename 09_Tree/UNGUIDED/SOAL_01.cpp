#include <iostream>
#include <limits>
using namespace std;

// DEKLARASI
struct Pohon {
    int data;
    Pohon *left, *right, *parent;
    Pohon(int value) : data(value), left(NULL), right(NULL), parent(NULL) {}
};

Pohon *root = NULL;

// Inisialisasi
void init() {
    root = NULL;
}

// Cek Pohon isEmpty?
bool isEmpty() {
    return root == NULL;
}

// Buat Node Baru
void createNode(int data) {
    if (isEmpty()) {
        root = new Pohon(data);
        cout << "Node " << data << " -> Root." << endl;
    } else {
        cout << "Data Di Dalam Pohon Sudah Dibuat" << endl;
    }
}

// Masukan Eelemen Kiri 
Pohon* insertLeft(int data, Pohon *node) {
    if (isEmpty()) {
        cout << "Pohon Masih Kosong! Buat Dulu" << endl;
        return NULL;
    }
    if (node->left != NULL) {
        cout << "Node " << node->data << " Sudah Memiliki Child Left" << endl;
        return NULL;
    }
    Pohon *newNode = new Pohon(data);
    node->left = newNode;
    newNode->parent = node;
    cout << "Node " << data << " Telah Ditambahkan Sebagai Child dari " << node->data << endl;
    return newNode;
}

// Masukan Eelemen Kanan 
Pohon* insertRight(int data, Pohon *node) {
    if (isEmpty()) {
        cout << "Pohon Masih Kosong! Buat Dulu" << endl;
        return NULL;
    }
    if (node->right != NULL) {
        cout << "Node " << node->data << " Sudah Memiliki Child Right" << endl;
        return NULL;
    }
    Pohon *newNode = new Pohon(data);
    node->right = newNode;
    newNode->parent = node;
    cout << "Node " << data << " Telah Ditambahkan Sebagai Child dari " << node->data << endl;
    return newNode;
}



