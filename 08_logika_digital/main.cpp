#include <iostream>

using namespace std;

int main()
{
    int a = 3;
    int b = 2;
    bool hasil;

    // operator not, and, or

    // not
    hasil = !(a == 3);
    cout << hasil << endl;

    // and [using &&]
    hasil = (a == 3) && (b == 2);
    cout << hasil << endl;

    // and [using and]
    hasil = (a == 3) and (b == 2);
    cout << hasil << endl;

    // or [using ||]
    hasil = (a == 3) || (b == 2);
    cout << hasil << endl;

    // or [using or]
    hasil = (a == 3) or (b == 2);
    cout << hasil << endl;

    cin.get();
    return 0;
}