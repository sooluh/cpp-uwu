#include <iostream>

using namespace std;

int main()
{
	const int YEAR = 365;
	const int MONTH = 30;
	const int WEEK = 7;

	int years, months, weeks, days;

	cout << "Masukkan jumlah hari kerja : ";
	cin >> days;

	years = days / YEAR;
	days = days % YEAR;

	months = days / MONTH;
	days = days % MONTH;

	weeks = days / WEEK;
	days = days % WEEK;

	cout << years << " tahun, ";
	cout << months << " bulan, ";
	cout << weeks << " minggu, ";
	cout << days << " hari." << endl;

	return 0;
}
