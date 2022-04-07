#include <iostream>
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
	string hours;
	string minutes;
	string seconds;

	string format = "hh:mm:ss";
	char delimiter = ':';

	cout << ">> Format : " << format << endl;

	hours = explode(format, delimiter)[0];
	minutes = explode(format, delimiter)[1];
	seconds = explode(format, delimiter)[2];

	cout << ">> Hours : " << hours << endl;
	cout << ">> Minutes : " << minutes << endl;
	cout << ">> Seconds : " << seconds << endl;

	return 0;
}
