#include <iostream>

using namespace std;

int main()
{
	// ndeklarasikna tipe datane variabel
	int a, b;
	float add, sub, mlp, div;

	// nyetak instruksine
	cout << "Masukkan Bilangan A : ";
	// maca inputane klien
	cin >> a;

	// nyetak instruksi maning
	cout << "Masukkan Bilangan B : ";
	// maca inputan maning
	cin >> b;

	// kanggo penjumlahan
	add = a + b;
	// kanggo pengurangan
	sub = a - b;
	// kanggo perkalian
	mlp = a * b;
	// kanggo pembagian
	div = a / b;

	// cetak kabeh hasile
	cout << "Hasil dari penjumlahan : " << add << "\n";
	cout << "Hasil dari pengurangan : " << sub << "\n";
	cout << "Hasil dari perkalian : " << mlp << "\n";
	cout << "Hasil dari pembagian : " << div << "\n";

	return 0;
}