#include <iostream>
using namespace std;

typedef struct
{
  int dd, mm, yy;
} Date;

int main()
{
  const int YEAR = 365, MONTH = 30;
  bool run = true, failed = false;

  Date day1, day2, day3;
  int total, one, two;

  while (run)
  {
    if (failed == true)
    {
      cout << "Harap masukkan inputan dengan benar!" << endl;
    }

    cout << "Tanggal sebelumnya : ";
    cin >> day1.dd;

    cout << "Bulan sebelumnya : ";
    cin >> day1.mm;

    cout << "Tahun sebelumnya : ";
    cin >> day1.yy;

    cout << "Tanggal sekarang : ";
    cin >> day2.dd;

    cout << "Bulan sekarang : ";
    cin >> day2.mm;

    cout << "Tahun sekarang : ";
    cin >> day2.yy;

    one = (day1.yy * YEAR) + (day1.mm * MONTH) + day1.dd;
    two = (day2.yy * YEAR) + (day2.mm * MONTH) + day2.dd;

    if (two > one)
    {
      run = false;
      cout << endl;

      total = two - one;
      cout << total << " total hari." << endl;

      day3.yy = total / YEAR;
      total = total % YEAR;

      day3.mm = total / MONTH;
      day3.dd = total % MONTH;

      cout << day3.yy << " tahun, ";
      cout << day3.mm << " bulan, ";
      cout << day3.dd << " hari." << endl;
    }
    else
    {
      failed = true;
    }
  }

  return 0;
}
