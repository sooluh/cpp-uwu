#include <iostream>

using namespace std;

int main()
{
	const float YARD = 0.9144;
	const float FEET = 30.48;
	const float INCH = 25.4;

	float meters, inches, feet, yards;

	cout << "Masukkan panjang (meter) : ";
	cin >> meters;

	yards = meters / YARD;
	feet = (meters * 100) / FEET;
	inches = (meters * 1000) / INCH;

	cout << meters << " meter : " << yards << " yard." << endl;
	cout << meters << " meter : " << feet << " kaki." << endl;
	cout << meters << " meter : " << inches << " inchi." << endl;

	system("pause");
	return 0;
}
