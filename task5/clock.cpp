#include <iostream>
#include <iomanip>
#include <string>
#include <vector>
#include <sstream>
#include <utility>

using namespace std;

vector<string> explode(string const &s, char delim)
{
	vector<string> result;
	istringstream iss(s);

	for (string token; getline(iss, token, delim);)
	{
		result.push_back(move(token));
	}

	return result;
}

int main()
{
	struct Jam
	{
		int hh;
		int mm;
		int ss;
	};
	Jam jam;

	string waktu;
	string hour;
	string minute;
	string second;

	cout << "Masukkan jam dengan format hh:mm:ss : ";
	cin >> waktu;

	hour = explode(waktu, ':')[0];
	minute = explode(waktu, ':')[1];
	second = explode(waktu, ':')[2];

	jam.hh = stoi(hour);
	jam.mm = stoi(minute);
	jam.ss = stoi(second);

	if (jam.ss + 1 < 60)
	{
		jam.ss = jam.ss + 1;
	}
	else
	{
		jam.ss = 0;

		if (jam.mm + 1 < 60)
		{
			jam.mm = jam.mm + 1;
		}
		else
		{
			jam.mm = 0;

			if (jam.hh + 1 < 24)
			{
				jam.hh = jam.hh + 1;
			}
			else
			{
				jam.hh = 0;
			}
		}
	}

	cout << "Jam yang baru ";
	cout << setw(2) << setfill('0') << jam.hh << ":";
	cout << setw(2) << setfill('0') << jam.mm << ":";
	cout << setw(2) << setfill('0') << jam.ss;

	return 0;
}