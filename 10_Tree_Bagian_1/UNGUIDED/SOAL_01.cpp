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

// Menampilkan Descendant Dan Child nya
void displayDescendants(Pohon *node) {
    if (node == NULL) return;
    cout << node->data << " ";
    displayDescendants(node->left);
    displayDescendants(node->right);
}


bool isValidBST(Pohon *node, int min_val, int max_val) {
    if (node == NULL) return true;
    if (node->data <= min_val || node->data >= max_val) return false;
    return isValidBST(node->left, min_val, node->data) && isValidBST(node->right, node->data, max_val);
}


int countLeafNodes(Pohon *node) {
    if (node == NULL) return 0;
    if (node->left == NULL && node->right == NULL) return 1;
    return countLeafNodes(node->left) + countLeafNodes(node->right);
}

int main() {
    init();
    int choice, data, nodeData;
    Pohon *selectedNode = NULL;

    while (true) {
        cout << "\nMenu:\n";
        cout << "1. Buat Root Baru\n";
        cout << "2. Masukan Left Child\n";
        cout << "3. Masukan Right Child\n";
        cout << "4. Display Descendants of a Node\n";
        cout << "5. Cek Valid BST\n";
        cout << "6. Hitung Leaf Nodes nya\n";
        cout << "7. Exit\n";
        cout << "Masukan Pilihan 1-7: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Masukan Root Untuk data: ";
                cin >> data;
                createNode(data);
                break;
            case 2:
                cout << "Masukan Data Parent dari left Node: ";
                cin >> nodeData;
                cout << "Masukan Left Child Nya: ";
                cin >> data;
                selectedNode = new Pohon(nodeData);
                insertLeft(data, selectedNode);
                break;
            case 3:
                cout << "Masukan Data Parent dari Right Node: ";
                cin >> nodeData;
                cout << "Masukan Right Child Nya: ";
                cin >> data;
                selectedNode = new Pohon(nodeData);
                insertRight(data, selectedNode);
                break;
            case 4:
                cout << "Masukan Data Node Yang Ingin Dilihat Descedant Nya: ";
                cin >> nodeData;
                selectedNode = new Pohon(nodeData);
                cout << "Descendants of node " << nodeData << ": ";
                displayDescendants(selectedNode);
                cout << endl;
                break;
            case 5:
                if (isValidBST(root, numeric_limits<int>::min(), numeric_limits<int>::max())) {
                    cout << "The tree is a valid BST." << endl;
                } else {
                    cout << "The tree is not a valid BST." << endl;
                }
                break;
            case 6:
                cout << "Total leaf nodes: " << countLeafNodes(root) << endl;
                break;
            case 7:
                cout << "Exit." << endl;
                return 0;
            default:
                cout << "Invalid choice! Please try again." << endl;
        }
    }
}
