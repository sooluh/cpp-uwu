#include <iostream>

using namespace std;

int main()
{
	// declares the variable to be used
	// and sets its data type
	float result, length, width;

	// show the program title banner
	cout << "=========================================" << endl;
	cout << "==== PENGHITUNG LUAS PERSEGI PANJANG ====" << endl;
	cout << "=========================================" << endl;

	// provide instruction for entering length value
	cout << ">> Masukkan panjang : ";
	// read input from user
	cin >> length;

	// provide instruction for entering width value
	cout << ">> Masukkan lebar : ";
	// read input from user
	cin >> width;

	// calculate area of rectangle
	result = length * width;

	// present calculation result
	cout << ">> Luas persegi panjang : " << result << endl;

	// prevent the program from exiting immediately
	return 0;
}
