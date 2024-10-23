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

void insertNodeSorted_2311104028(Node*& head, int data) {
    Node* newNode = createNode(data);
    if (head == nullptr || head->data >= data) {
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* current = head;
    while (current->next != nullptr && current->next->data < data) {
        current = current->next;
    }
    newNode->next = current->next;
    current->next = newNode;
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

    cout << "Enter 4 elements for the sorted list: " << endl;
    for (int i = 0; i < 4; i++) {
        cin >> element;
        insertNodeSorted_2311104028(head, element);
    }

    cout << "Enter an element to insert into the sorted list: ";
    cin >> element;
    insertNodeSorted_2311104028(head, element);

    cout << "List after insertion: ";
    displayList(head);

    return 0;
}
