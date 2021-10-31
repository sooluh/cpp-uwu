#include <iostream>
using namespace std;

int main()
{
	// declares the variable to be used
	// and sets its data type
	float result, length, width;

	// show the program title banner
	cout << "PENGHITUNG LUAS PERSEGI PANJANG\n";
	cout << "===============================\n";

	// provide instruction for entering length value
	cout << "Masukkan Panjang : ";
	// read input from user
	cin >> length;

	// provide instruction for entering width value
	cout << "Masukkan Lebar : ";
	// read input from user
	cin >> width;

	// calculate area of rectangle
	result = length * width;

	// present calculation result
	cout << "Luas Persegi Panjang : " << result << "\n";

	// prevent the program from exiting immediately
	system("pause");
	return 0;
}
