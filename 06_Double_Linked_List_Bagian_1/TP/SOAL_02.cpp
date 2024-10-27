#include <iostream>
using namespace std;

struct Node {
    int data;
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

    void insertLast_2311104028(int value) {
        Node* newNode = new Node();
        newNode->data = value;
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

    void deleteFirst_2311104028() {
        if (head == nullptr) return;
        Node* temp = head;
        head = head->next;
        if (head != nullptr) {
            head->prev = nullptr;
        } else {
            tail = nullptr;
        }
        delete temp;
    }

    void deleteLast_2311104028() {
        if (tail == nullptr) return;
        Node* temp = tail;
        tail = tail->prev;
        if (tail != nullptr) {
            tail->next = nullptr;
        } else {
            head = nullptr;
        }
        delete temp;
    }

    void display_2311104028() {
        Node* temp = head;
        cout << "DAFTAR ANGGOTA LIST SETELAH PENGHAPUSAN: ";
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " <-> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertLast_2311104028(10);
    dll.insertLast_2311104028(15);
    dll.insertLast_2311104028(20);
    dll.deleteFirst_2311104028();
    dll.deleteLast_2311104028();
    dll.display_2311104028();
    return 0;
}
