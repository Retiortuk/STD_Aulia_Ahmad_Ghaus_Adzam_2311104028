#include <iostream>
using namespace std;

struct Node {
   int data;
   Node* next;
};

Node* createNode(int data) {
   Node* newNode = new Node();
   newNode ->data = data;
   newNode ->next = nullptr;
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

void searchElement_2311104028(Node* head, int target) {
   Node* current = head;
   int position = 1;
   bool found = false;

   while (current != nullptr) {
      if (current->data == target) {
         cout << "Element " << target << " Ditemukan di Posisi " << position << " Dengan alamat " << current << endl;
         found = true;
         break;
      }
      
      current = current->next; position++;
   }
   if (!found) {
      cout << "Elemen " << target << " Tidak ditemukan di dalam list." << endl;
   }
}

int main () {
   Node* head = nullptr;
   int element;

   cout << "Masukan 6 Elemen untuk List: " << endl;
   for (int i = 0; i < 6; i++) {
      cin >> element;
      insertNode(head, element);
   }

   cout << "masukan elemen yang dicari: ";
   cin >> element ;
   searchElement_2311104028(head, element);

   return 0;
}