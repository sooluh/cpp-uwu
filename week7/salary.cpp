#include <iostream>
#include <string>
using namespace std;

int main()
{
	const float BENEFIT = 0.2;
	const float TAX = 0.15;

	string name;
	long salary, benefit, tax, net;

	cout << "Masukkan nama : ";
	cin >> name;

	cout << "Masukkin gaji pokok : ";
	cin >> salary;

	benefit = BENEFIT * salary;
	tax = TAX * (salary + benefit);
	net = salary + benefit - tax;

	cout << "Gaji bersih " << name << " adalah " << net;

	return 0;
}
