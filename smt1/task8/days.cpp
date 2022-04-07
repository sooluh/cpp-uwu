#include <iostream>

using namespace std;

int main()
{
    int month, year, result;
    bool leap = false;

    cout << "Masukkan nomor bulan : ";
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
        result = 28;

        if (year % 4 == 0 && (year % 100 != 0 || year % 400 == 0))
        {
            leap = true;
            result = 29;
        }
    }

    cout << "Jumlah hari pada bulan ini adalah " << result;
    cout << " dan tahun ini ";

    // the code below is called ternary operator
    // short syntax which is exactly the same as if else
    cout << (leap ? "adalah tahun kabisat" : "bukan tahun kabisat");
    // format : (condition ? true result : false result)

    cout << endl;

    return 0;
}
