#include <iostream>
using namespace std;

int main()
{
	// declares the variable to be used
	// and sets its data type
	int a, b;
	float add, sub, mlp, div;

	// show the program title banner
	cout << "PERHITUNGAN ARITMETIKA DASAR\n";
	cout << "============================\n";

	// provide instruction for entering value a
	cout << "Masukkan Bilangan A : ";
	// read input from user
	cin >> a;

	// provide instruction for entering value b
	cout << "Masukkan Bilangan B : ";
	// read input from user
	cin >> b;

	// calculate addition
	add = a + b;
	// calculate subtraction
	sub = a - b;
	// calculate multiplication
	mlp = a * b;
	// calculate division
	div = a / b;

	// print all the results!
	cout << "Hasil dari penjumlahan : " << add << "\n";
	cout << "Hasil dari pengurangan : " << sub << "\n";
	cout << "Hasil dari perkalian : " << mlp << "\n";
	cout << "Hasil dari pembagian : " << div << "\n";

	// prevent the program from exiting immediately
	system("pause");
	return 0;
}
