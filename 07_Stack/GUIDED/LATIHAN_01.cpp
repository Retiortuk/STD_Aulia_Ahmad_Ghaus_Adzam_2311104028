#include <iostream>
using namespace std;

string arrayBuku[5];
int MAX = 5, top = 0;

bool isFull(){
    return (top == MAX);
}

bool isEmpty(){
    return (top == 0);
}

void pushArrayBook(string data){
    if (isFull){
        cout << "Stack Penuh" << endl;
    } else {
        arrayBuku[top] = data;
        top++;
    }
}

void popArrayBook() {
    if (isEmpty){
        cout << "Stack Kosong Apa jadi Yang harus dikeluarkan" << endl;
    } else {
        arrayBuku[top -1] = "";
        top--;
    }
}

void peekArrayBook(int posisi) {
    if (isEmpty) {
        cout << "Stack Kosong jadi apa yang harus dilihat" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        cout << "Posisi Ke " << posisi << " adalah " << arrayBuku[index] << endl;
    }
}

int countStack() {
    return top;
}

void changeArrayBook(int posisi, string data) {
    if (posisi > top) {
        cout << "Posisi Melebihi data yang ada" << endl;
    } else {
        int index = top;
        for (int i = 1; i <= posisi; i++) {
            index--;
        }
        arrayBuku[index] = data;
    }
}

