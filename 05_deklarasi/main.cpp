#include <iostream>
// supaya tidak perlu memanggil std:: terus, bisa menggunakan [using namespace std]
using namespace std;

int main()
{
    // deklarasi variabel
    int deklarasi_variabel;

    // mengisi nilai variabel
    deklarasi_variabel = 1;

    cout << deklarasi_variabel << endl;

    // deklarasi variable kedua
    int deklarasi_variable_kedua;

    cout << "masukkan nilai :";

    // mengisi nilai dari terminal ke variable kedua
    cin >> deklarasi_variable_kedua;

    cout << "ini adalah angka yang anda masukkan adalah :";
    cout << deklarasi_variable_kedua << endl;

    cin.get();
    return 0;
}