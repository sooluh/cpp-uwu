#include <iostream>

using namespace std;

int main()
{
	const long int KM = 100000;
	const long int M = 100;

	long int km, m, cm;

	cout << "Masukkan jarak (cm) : ";
	cin >> cm;

	km = cm / KM;
	cm = cm % KM;

	m = cm / M;
	cm = cm % M;

	cout << km << " km, " << m << " m, " << cm << " cm.";

	cout << endl;
	return 0;
}
