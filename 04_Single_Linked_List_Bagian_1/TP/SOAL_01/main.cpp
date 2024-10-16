#include "list.h"

int main() {
    List L;
    createList(L);
    int digit;
    
    for (int x = 0; x < 10; x++) {
        cout << "Masukkan digit ke-" << (x + 1) << " : ";
        cin >> digit;
        insertLast(L, allocate(digit)); 
    }
    cout << "HASIL NIM : ";
    printInfo(L);

    return 0;
}
