#include <iostream>
using namespace std;

int main()
{
	int a, b, c;

	a = 8;
	b = 5;

	cout << "A sebelum pertukaran : " << a << "\n";
	cout << "B sebelum pertukaran : " << b << "\n";

	c = a;
	a = b;
	b = c;

	cout << "A sesudah pertukaran : " << a << "\n";
	cout << "B sesudah pertukaran : " << b << "\n";

	system("pause");
	return 0;
}
