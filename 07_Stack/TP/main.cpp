#include "stack.h"
#include <iostream>
using namespace std;

int main() {
    stack S;
    createStack(S);

    char frasaAwal[] = {'I', 'F', 'L', 'A', 'B', 'J', 'A', 'Y', 'A'};
    char frasaPop[] = {'J', 'A', 'Y', 'A'};

    for (char c : frasaAwal) {
        push(S, c);
    }

    cout << "Isi stack awal: ";
    printInfo(S);

    cout << "Isi stack setelah pop: ";
    for (char c : frasaPop) {
        pop(S);
    }
    printInfo(S);

    return 0;
}
