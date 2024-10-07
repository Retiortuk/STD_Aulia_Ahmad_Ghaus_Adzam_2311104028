#include <iostream>

using namespace std;
// Contoh Pengunaan Pointer and Friends

int main(){
    int a = 10;
    int* ptr = &a;

    cout << "Nilai Dari num: " << a << endl;
    cout << "Alamat Memori Dari num: " << ptr << endl;
    cout << "Nilai Yang Dirujuk: " << *ptr << endl;
    *ptr = 50;
    cout << "Setelah Di Pointer: " << a << endl;

    return 0;
}