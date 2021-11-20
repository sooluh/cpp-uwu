#include <iostream>
#include <iomanip>
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

	time.hh = 9;
	time.mm = 41;
	time.ss = 2;

	cout << setw(2) << setfill('0') << time.hh;
	cout << ':';
	cout << setw(2) << setfill('0') << time.mm;
	cout << ':';
	cout << setw(2) << setfill('0') << time.ss;

	cout << "\n";
	system("pause");
	return 0;
}
