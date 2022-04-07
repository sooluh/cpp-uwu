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

	time.hh = 9;
	time.mm = 41;
	time.ss = 2;

	cout << setw(2) << setfill('0') << time.hh;
	cout << ':';
	cout << setw(2) << setfill('0') << time.mm;
	cout << ':';
	cout << setw(2) << setfill('0') << time.ss;
	cout << endl;

	return 0;
}
