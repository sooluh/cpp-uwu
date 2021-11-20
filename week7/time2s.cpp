#include <iostream>
using namespace std;

int main()
{
	typedef struct
	{
		int hh;
		int mm;
		int ss;
	} Time;
	Time time;

	long int hours;
	long int minutes;
	long int total;

	cout << "Masukkan jam : ";
	cin >> time.hh;

	cout << "Masukkan menit : ";
	cin >> time.mm;

	cout << "Masukkan detik : ";
	cin >> time.ss;

	hours = time.hh * 3600;
	minutes = time.mm * 60;
	total = hours + minutes + time.ss;

	cout << "Total detik : " << total << "\n";

	system("pause");
	return 0;
}
