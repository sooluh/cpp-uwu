#include <iostream>
#include <iomanip>

using namespace std;

typedef struct
{
	int hh;
	int mm;
	int ss;
} Time;

int main()
{
	Time time;

	long int total;
	long int leftover;

	cout << "Masukkan detik : ";
	cin >> total;

	time.hh = total / 3600;
	leftover = total % 3600;
	time.mm = leftover / 60;
	time.ss = leftover % 60;

	cout << "Hasil : ";
	cout << setw(2) << setfill('0') << time.hh;
	cout << ':';
	cout << setw(2) << setfill('0') << time.mm;
	cout << ':';
	cout << setw(2) << setfill('0') << time.ss;
	cout << endl;

	return 0;
}
