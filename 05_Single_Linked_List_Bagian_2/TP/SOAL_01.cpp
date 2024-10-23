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

void inserNode(Node*& head, int data) {
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
   
}