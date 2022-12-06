#include <iostream>

int kurang(int a, int b);

// membuat method penjumlahan
int tambah(int a, int b)
{
    return (a + b);
}

int main()
{
    std::cout << "hello world" << std::endl;
    std::cout << tambah(2,3) << std::endl;
    std::cout << kurang(5,3) << std::endl;
    return 0;
}