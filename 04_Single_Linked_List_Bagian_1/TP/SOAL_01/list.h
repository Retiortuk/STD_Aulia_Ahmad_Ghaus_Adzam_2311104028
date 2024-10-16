#ifndef LIST_H
#define LIST_H
#include <iostream>
using namespace std;
#define Nil NULL
typedef int infotype;
typedef struct element *address;

struct element {
    infotype info;
    address next;
};

struct List {
    address first;
};

void createList(List &L);
address allocate(infotype x);
void insertFirst(List &L, address P);
void printInfo(List L);
// SOAL NO 7
void deleteLast(List &L, address &P);
address searchInfo(List L, infotype x);
void insertLast(List &L, address P);
void insertAfter(address Prec, address P);
void deleteAfter(address Prec, address &P);


#endif
