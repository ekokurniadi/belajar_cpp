#include <iostream>

using namespace std;

int main()
{

    int a = 6;
    int b = 4;
    int hasil;

    // operator aritmatika pada c++ => +,-,*,/,%

    // penjumlahan
    hasil = a + b;
    cout << "Hasil Penjumlahan " << a << " + " << b << " = " << hasil << endl;

    // pengurangan
    hasil = a - b;
    cout << "Hasil Pengurangan " << a << " - " << b << " = " << hasil << endl;

    // perkalian
    hasil = a * b;
    cout << "Hasil Perkalian " << a << " * " << b << " = " << hasil << endl;

    // pembagian
    hasil = a / b;
    cout << "Hasil Perkalian " << a << " / " << b << " = " << hasil << endl;

    // modulus
    hasil = a % b;
    cout << "Hasil Modulus " << a << " % " << b << " = " << hasil << endl;

    // urutan eksekusi
    hasil = (a + b) * a;
    cout << "Hasil urutan eksekusi " << hasil << endl;

    cin.get();
    return 0;
}