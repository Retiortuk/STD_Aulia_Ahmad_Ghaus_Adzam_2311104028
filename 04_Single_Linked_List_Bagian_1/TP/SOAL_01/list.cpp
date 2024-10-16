#include <iostream>
#include "list.h"
using namespace std;


void createList(List &L) {
    L.first = Nil;
}

address allocate(infotype x) {
    address P = new element;
    P->info = x;
    P->next = Nil;
    return P;
}

void insertFirst(List &L, address P) {
    P->next = L.first;
    L.first = P;
}

void printInfo(List L) {
    address P = L.first;
    while (P != Nil) {
        cout << P->info << " ";
        P = P->next;
    }
    cout << endl;
}

// SOAL NO 7
void insertLast(List &L, address P) {
    if (L.first == Nil) {
        insertFirst(L, P);
    } else {
        address Q = L.first;
        while (Q->next != Nil) {
            Q = Q->next;
        }
        Q->next = P;
    }
}

void insertAfter(address Prec, address P) {
    if (Prec != Nil) {
        P->next = Prec->next;
        Prec->next = P;
    }
}

void deleteLast(List &L, address &P) {
    if (L.first != Nil) {
        if (L.first->next == Nil) {
            P = L.first;
            L.first = Nil;
        } else {
            address Q = L.first;
            while (Q->next->next != Nil) {
                Q = Q->next;
            }
            P = Q->next;
            Q->next = Nil;
        }
    }
}

void deleteAfter(address Prec, address &P) {
    if (Prec != Nil && Prec->next != Nil) {
        P = Prec->next;
        Prec->next = Prec->next->next;
        P->next = Nil;
    }
}

address searchInfo(List L, infotype x) {
    address P = L.first;
    while (P != Nil) {
        if (P->info == x) {
            return P;
        }
        P = P->next;
    }
    return Nil;
}

