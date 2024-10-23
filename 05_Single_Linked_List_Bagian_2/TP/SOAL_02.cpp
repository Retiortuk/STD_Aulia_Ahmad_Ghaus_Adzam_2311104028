#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* createNode(int data) {
    Node* newNode = new Node();
    newNode->data = data;
    newNode->next = nullptr;
    return newNode;
}

void insertNode(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr) {
        head = newNode;
    } else {
        Node* temp = head;
        while (temp->next != nullptr) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void bubbleSortList_2311104028(Node*& head) {
    if (head == nullptr) return;

    bool swapped;
    Node* current;
    Node* lastSorted = nullptr;

    do {
        swapped = false;
        current = head;

        while (current->next != lastSorted) {
            if (current->data > current->next->data) {
                swap(current->data, current->next->data);
                swapped = true;
            }
            current = current->next;
        }
        lastSorted = current;
    } while (swapped);
}

void displayList(Node* head) {
    Node* temp = head;
    while (temp != nullptr) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    Node* head = nullptr;
    int element;

    cout << "Enter 5 elements for the list: " << endl;
    for (int i = 0; i < 5; i++) {
        cin >> element;
        insertNode(head, element);
    }

    cout << "List before sorting: ";
    displayList(head);

    bubbleSortList_2311104028(head);

    cout << "List after sorting: ";
    displayList(head);

    return 0;
}
