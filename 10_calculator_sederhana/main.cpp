#include <iostream>

using namespace std;

int main()
{
    float a, b, hasil;
    char aritmatika;

    cout << "Selamat datang di aplikasi kalkulator sederhana" << endl;

    // memasukkan input dari user
    cout << "masukkan nilai pertama : " << endl;
    cin >> a;
    cout << "masukkan operator (+,-,*,/): " << endl;
    cin >> aritmatika;
    cout << "masukkan nilai kedua : " << endl;
    cin >> b;

    cout << "\nUsing IF ELSEIF ELSE : ";

    cout << "\nHasil perhitungan : ";
    cout << a << aritmatika << b;

    if (aritmatika == '+')
    {
        hasil = a + b;
    }
    else if (aritmatika == '-')
    {
        hasil = a - b;
    }
    else if (aritmatika == '*')
    {
        hasil = a * b;
    }
    else if (aritmatika == '/')
    {
        hasil = a / b;
    }
    else
    {
        cout << "Operator tidak ditemukan" << endl;
    }

    cout << " = " << hasil << endl;

    cout << "\nUsing SWITCH CASE : ";
    cout << "\nHasil perhitungan : ";
    cout << a << aritmatika << b;

    switch (aritmatika)
    {
    case '+':
        hasil = a + b;
        break;
    case '-':
        hasil = a - b;
        break;
    case '*':
        hasil = a * b;
        break;
    case '/':
        hasil = a / b;
        break;

    default:
        cout << "Operator tidak ditemukanx" << endl;
        break;
    }

    cout << " = " << hasil << endl;

    cin.get();
}