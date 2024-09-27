#include <iostream>

using namespace std;

int main() {
    int tab[10] = {1,4,7, 12, 15, 20};
    int n = 6;
    int x = 10;

    int i = 0;

    while( i < n && tab[i] < x ) {
        i++;
    }

    cout << "index ke - " << i << endl;
}