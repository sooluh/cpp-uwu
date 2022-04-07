#include <iostream>
#include <string>

using namespace std;

typedef struct
{
	int nim;
	string nama;
	string prodi;
} Mahasiswa;

typedef struct
{
	long int pembangunan;
	long int cicilan;
	long int kemahasiswaan;
} Biaya;

int main()
{
	Mahasiswa mahasiswa;
	Biaya biaya;
	long int total;

	cout << "============================================" << endl;
	cout << "========= TOTAL BIAYA MASUK KULIAH =========" << endl;
	cout << "============================================" << endl;
	cout << ">> Nama  : Suluh Sulistiawan" << endl;
	cout << ">> Kelas : IF Malam B" << endl;
	cout << "============================================" << endl;

	cout << ">> Masukkan NIM kamu : ";
	cin >> mahasiswa.nim;

	cout << ">> Masukkan Nama kamu : ";
	cin >> mahasiswa.nama;

	cout << ">> Masukkan Prodi kamu : ";
	cin >> mahasiswa.prodi;

	cout << "============================================" << endl;

	cout << ">> Uang Pembangunan : ";
	cin >> biaya.pembangunan;

	cout << ">> Cicilan Pertama : ";
	cin >> biaya.cicilan;

	cout << ">> Uang Kemahasiswaan : ";
	cin >> biaya.kemahasiswaan;

	total = biaya.pembangunan + biaya.cicilan + biaya.kemahasiswaan;

	cout << "============================================" << endl;
	cout << ">> Halo " << mahasiswa.nama << " dengan NIM " << mahasiswa.nim << endl;
	cout << ">> Total biaya kuliah kamu sekitar : " << total << endl;
	cout << "============================================" << endl;

	return 0;
}
