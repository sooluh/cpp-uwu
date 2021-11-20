#include <iostream>
#include <string>
using namespace std;

int main()
{
	typedef struct
	{
		int nim;
		string nama;
		string prodi;
	} Mahasiswa;
	Mahasiswa mahasiswa;

	typedef struct
	{
		long int pembangunan;
		long int cicilan;
		long int kemahasiswaan;
	} Biaya;
	Biaya biaya;

	long int total;

	cout << "TOTAL BIAYA MASUK KULIAH" << endl;
	cout << "===========================" << endl;

	cout << "Nama  : Suluh Sulistiawan" << endl;
	cout << "Kelas : IF Malam B" << endl;
	cout << "===========================" << endl;

	cout << "Masukkan NIM Anda : ";
	cin >> mahasiswa.nim;

	cout << "Masukkan Nama Anda : ";
	cin >> mahasiswa.nama;

	cout << "Masukkan Prodi Anda : ";
	cin >> mahasiswa.prodi;

	cout << "Uang Pembangunan : ";
	cin >> biaya.pembangunan;

	cout << "Cicilan Pertama : ";
	cin >> biaya.cicilan;

	cout << "Uang Kemahasiswaan : ";
	cin >> biaya.kemahasiswaan;

	cout << "===========================" << endl;
	total = biaya.pembangunan + biaya.cicilan + biaya.kemahasiswaan;

	cout << "Halo " << mahasiswa.nama << " dengan NIM " << mahasiswa.nim << endl;
	cout << "Total biaya kuliah kamu sekitar : " << total;

	return 0;
}
