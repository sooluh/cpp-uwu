#include <iostream>

using namespace std;

int main()
{
	bool run = true;
	bool failed = false;
	int credits = 0;
	float index;

	while (run)
	{
		if (failed == true)
		{
			cout << ">> Harap masukkan IPS antara 1.5 - 4!" << endl;
		}

		cout << ">> Masukkan IPS kamu : ";
		cin >> index;

		if (index >= 1.50 && index <= 1.99)
		{
			credits = 14;
		}
		else if (index >= 2.00 && index <= 2.49)
		{
			credits = 18;
		}
		else if (index >= 2.50 && index <= 2.99)
		{
			credits = 20;
		}
		else if (index >= 3.00 && index <= 3.99)
		{
			credits = 22;
		}
		else if (index == 4.00)
		{
			credits = 24;
		}

		if (credits == 0)
		{
			failed = true;
		}
		else
		{
			run = false;
			cout << ">> SKS maksimal kamu : " << credits << " SKS" << endl;
		}
	}

	system("pause");
	return 0;
}
