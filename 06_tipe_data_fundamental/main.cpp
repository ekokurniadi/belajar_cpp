#include <iostream>
#include <limits>

using namespace std;

int main()
{
    // bilangan bulat
    unsigned int a = 5; // 32-bit, jika tidak ingin minus gunakan tipe data unsigned [tidak bertanda]
    long b = 6;
    short c = 7;

    // desimal
    float d = 1.0;
    double e = 2.5;

    // character
    char f = 'a';

    // boolean
    bool g = false;

    // Tipe data int

    cout << "<<===Tipe Data unsigned int====>" << endl;

    cout << a << endl;

    // mendapatkan jumlah memori yang di gunakan untuk variabel int a
    cout << sizeof(a) << "byte" << endl;

    // mendapatkan minimum nilai dari sebuah tipe data
    cout << numeric_limits<unsigned int>::min() << endl;

    // mendapatkan maximum nilai dari sebuah tipe data
    cout << numeric_limits<unsigned int>::max() << endl;

    // Tipe data long

    cout << "<<===Tipe Data long====>" << endl;

    cout << b << endl;

    // mendapatkan jumlah memori yang di gunakan untuk variabel int b
    cout << sizeof(b) << "byte" << endl;

    // mendapatkan minimum nilai dari sebuah tipe data
    cout << numeric_limits<long>::min() << endl;

    // mendapatkan maximum nilai dari sebuah tipe data
    cout << numeric_limits<long>::max() << endl;

    // Tipe data short

    cout << "<<===Tipe Data short====>" << endl;

    cout << c << endl;

    // mendapatkan jumlah memori yang di gunakan untuk variabel short c
    cout << sizeof(c) << "byte" << endl;

    // mendapatkan minimum nilai dari sebuah tipe data
    cout << numeric_limits<short>::min() << endl;

    // mendapatkan maximum nilai dari sebuah tipe data
    cout << numeric_limits<short>::max() << endl;

    // Tipe data float

    cout << "<<===Tipe Data float====>" << endl;

    cout << d << endl;

    // mendapatkan jumlah memori yang di gunakan untuk variabel float d
    cout << sizeof(d) << "byte" << endl;

    // mendapatkan minimum nilai dari sebuah tipe data
    cout << numeric_limits<float>::min() << endl;

    // mendapatkan maximum nilai dari sebuah tipe data
    cout << numeric_limits<float>::max() << endl;

    // Tipe data double

    cout << "<<===Tipe Data double====>" << endl;

    cout << e << endl;

    // mendapatkan jumlah memori yang di gunakan untuk variabel double e
    cout << sizeof(e) << "byte" << endl;

    // mendapatkan minimum nilai dari sebuah tipe data
    cout << numeric_limits<double>::min() << endl;

    // mendapatkan maximum nilai dari sebuah tipe data
    cout << numeric_limits<double>::max() << endl;

    // Tipe data char

    cout << "<<===Tipe Data char====>" << endl;

    cout << f << endl;

    // mendapatkan jumlah memori yang di gunakan untuk variabel char f
    cout << sizeof(f) << "byte" << endl;

    // mendapatkan minimum nilai dari sebuah tipe data
    cout << numeric_limits<char>::min() << endl;

    // mendapatkan maximum nilai dari sebuah tipe data
    cout << numeric_limits<char>::max() << endl;

    // Tipe data boolean

    cout << "<<===Tipe Data boolean====>" << endl;

    cout << g << endl;

    // mendapatkan jumlah memori yang di gunakan untuk variabel boolean g
    cout << sizeof(g) << "byte" << endl;

    // mendapatkan minimum nilai dari sebuah tipe data
    cout << numeric_limits<bool>::min() << endl;

    // mendapatkan maximum nilai dari sebuah tipe data
    cout << numeric_limits<bool>::max() << endl;

    cin.get();

    return 0;
}