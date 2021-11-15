#include <iostream>

using namespace std;

int main()
{
	int sks;
	float ips;

	cout << "Masukkan IPS Anda : ";
	cin >> ips;

	if (ips >= 1.50 && ips <= 1.99)
	{
		sks = 14;
	}
	else if (ips >= 2.00 && ips <= 2.49)
	{
		sks = 18;
	}
	else if (ips >= 2.50 && ips <= 2.99)
	{
		sks = 20;
	}
	else if (ips >= 3.00 && ips <= 3.99)
	{
		sks = 22;
	}
	else if (ips == 4.00)
	{
		sks = 24;
	}

	cout << "SKS Maksimal : " << sks << " SKS";

	system("pause");
	return 0;
}
