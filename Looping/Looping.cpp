#include <iostream>
using namespace std;

int main() {
    int jumlahData = 10;
    int jumGenap = 0;
    int jumGanjil = 0;

    for (int i = 0; i < jumlahData; i++) {
        if (i % 2 == 0) {
            jumGenap += i;
        }
        else {
            jumGanjil += i;
        }
    }

    cout << "Masukan jumlah data : " << jumlahData << endl;
    cout << "Jumlah total bilangan ganjil : " << jumGanjil << endl;
    cout << "Jumlah total bilangan genap : " << jumGenap << endl;

}