#include <iostream>
using namespace std;

int main()
{
	// declares the variable to be used
	// and sets its data type
	float a, b;
	float add, sub, mlp, div;

	// show the program title banner
	cout << "======================================" << endl;
	cout << "==== PERHITUNGAN ARITMETIKA DASAR ====" << endl;
	cout << "======================================" << endl;

	// provide instruction for entering value a
	cout << ">> Masukkan bilangan A : ";
	// read input from user
	cin >> a;

	// provide instruction for entering value b
	cout << ">> Masukkan bilangan B : ";
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

	// separator
	cout << "======================================" << endl;

	// print all the results!
	cout << ">> Hasil dari penjumlahan : " << add << endl;
	cout << ">> Hasil dari pengurangan : " << sub << endl;
	cout << ">> Hasil dari perkalian : " << mlp << endl;
	cout << ">> Hasil dari pembagian : " << div << endl;

	// prevent the program from exiting immediately
	system("pause");
	return 0;
}
