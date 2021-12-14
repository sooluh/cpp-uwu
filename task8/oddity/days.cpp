#include <iostream>

using namespace std;

int main()
{
    int month, year, result;
    bool leap = true;

    cout << "Masukkan bulan : ";
    cin >> month;

    cout << "Masukkan tahun : ";
    cin >> year;

    switch (month)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 9:
    case 11:
        result = 31;
        break;

    case 4:
    case 6:
    case 8:
    case 10:
    case 12:
        result = 30;
        break;

    default:
        result = 29;

        if (month % 4 == 0 && (month % 100 != 0 || month % 400 == 0))
        {
            leap = false;
            result = 28;
        }
    }

    cout << "Jumlah hari pada bulan ini adalah " << result;
    cout << "dan tahun ini " << (leap ? "adalah tahun kabisat" : "bukan tahun kabisat");

    return 0;
}
