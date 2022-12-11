#include <iostream>

using namespace std;

int main()
{
    int a;
    cout << "masukkan nilai = ";
    cin >> a;

    switch (a)
    {
    case 1:
        cout << "Nilai anda adalah " << a << endl;
        break;
    case 2:
        cout << "Nilai anda adalah " << a << endl;
        break;
    case 3:
        cout << "Nilai anda adalah " << a << endl;
        break;
    case 4:
        cout << "Nilai anda adalah " << a << endl;
        break;
    case 5:
        cout << "Nilai anda adalah " << a << endl;
        break;

    default:
        cout << "Nilai anda adalah default " << a << endl;
        break;
    }
}