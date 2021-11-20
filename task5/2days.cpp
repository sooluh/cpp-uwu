#include <iostream>
using namespace std;

int main()
{
	const int YEAR = 365;
	const int MONTH = 30;

	typedef struct
	{
		int dd;
		int mm;
		int yy;
	} Date;

	bool run = true;
	bool failed = false;

	Date day1, day2, day3;
	int total, one, two;

	while (run)
	{
		run = false;

		if (failed == true)
		{
			cout << "Harap masukkan inputan dengan benar!\n";
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
			cout << "\n";

			total = two - one;
			cout << total << " total hari.\n";

			day3.yy = total / YEAR;
			total = total % YEAR;

			day3.mm = total / MONTH;
			day3.dd = total % MONTH;

			cout << day3.yy << " tahun, ";
			cout << day3.mm << " bulan, ";
			cout << day3.dd << " hari.\n";
		}
		else
		{
			run = true;
			failed = true;
		}
	}

	system("pause");
	return 0;
}
