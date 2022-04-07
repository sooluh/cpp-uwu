#include <iostream>

using namespace std;

int main()
{
	float height, before, ideal;

	cout << "Tinggi badan (cm) : ";
	cin >> height;

	before = height - 100;
	ideal = before - (before * 0.1);

	cout << "Berat badan ideal : " << ideal << " kg.";

	cout << endl;
	return 0;
}
