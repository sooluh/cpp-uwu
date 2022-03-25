#include <iostream>

using namespace std;

int main()
{
	int a, b, t;

	a = 8;
	b = 5;

	cout << "A sebelum pertukaran : " << a << endl;
	cout << "B sebelum pertukaran : " << b << endl;

	t = a;
	a = b;
	b = t;

	cout << "A sesudah pertukaran : " << a << endl;
	cout << "B sesudah pertukaran : " << b << endl;

	system("pause");
	return 0;
}
