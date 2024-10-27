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

    void displayForward_2311104028() {
        Node* temp = head;
        cout << "Daftar elemen dari depan ke belakang: ";
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->next != nullptr) {
                cout << " <-> ";
            }
            temp = temp->next;
        }
        cout << endl;
    }

    void displayBackward_2311104028() {
        Node* temp = tail;
        cout << "Daftar elemen dari belakang ke depan: ";
        while (temp != nullptr) {
            cout << temp->data;
            if (temp->prev != nullptr) {
                cout << " <-> ";
            }
            temp = temp->prev;
        }
        cout << endl;
    }
};

int main() {
    DoublyLinkedList dll;
    dll.insertLast_2311104028(1);
    dll.insertLast_2311104028(2);
    dll.insertLast_2311104028(3);
    dll.insertLast_2311104028(4);
    dll.displayForward_2311104028();
    dll.displayBackward_2311104028();
    return 0;
}
