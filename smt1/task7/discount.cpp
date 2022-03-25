#include <iostream>
using namespace std;

int main()
{
    long amount, pay;
    float discount = 0;
    float percentage;

    cout << "Masukkan total pembelian Anda : ";
    cin >> amount;

    if (amount >= 100000)
    {
        discount = 20;
    }
    else if (amount >= 50000)
    {
        discount = 15;
    }
    else if (amount >= 10000)
    {
        discount = 10;
    }

    percentage = discount / 100;
    discount = amount * percentage;
    pay = amount - discount;

    cout << "Kamu berhasil mendapatkan diskon sebesar Rp. " << discount << endl;
    cout << "Jadi, kamu cukup bayar Rp. " << pay << endl;

    system("pause");
    return 0;
}
