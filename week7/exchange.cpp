#include <iostream>
using namespace std;

int main()
{
	int a, b, t;

	a = 8;
	b = 5;

	cout << "A sebelum pertukaran : " << a << "\n";
	cout << "B sebelum pertukaran : " << b << "\n";

	t = a;
	a = b;
	b = t;

	cout << "A sesudah pertukaran : " << a << "\n";
	cout << "B sesudah pertukaran : " << b << "\n";

	system("pause");
	return 0;
}
