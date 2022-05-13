#include <iostream>
#include <string>
using namespace std;

typedef struct
{
  int number;
  string name, major;
} Mahasiswa;

typedef struct
{
  long int dev, installment, student;
} Biaya;

int main()
{
  Mahasiswa colleger;
  Biaya cost;
  long int total;

  cout << "============================================" << endl;
  cout << "========= TOTAL BIAYA MASUK KULIAH =========" << endl;
  cout << "============================================" << endl;
  cout << ">> Nama  : Suluh Sulistiawan" << endl;
  cout << ">> Kelas : IF Malam B" << endl;
  cout << "============================================" << endl;

  cout << ">> Masukkan NIM kamu : ";
  cin >> colleger.number;

  cout << ">> Masukkan Nama kamu : ";
  cin >> colleger.name;

  cout << ">> Masukkan Prodi kamu : ";
  cin >> colleger.major;

  cout << "============================================" << endl;

  cout << ">> Uang Pembangunan : ";
  cin >> cost.dev;

  cout << ">> Cicilan Pertama : ";
  cin >> cost.installment;

  cout << ">> Uang Kemahasiswaan : ";
  cin >> cost.student;

  total = cost.dev + cost.installment + cost.student;

  cout << "============================================" << endl;
  cout << ">> Halo " << colleger.name << " dengan NIM " << colleger.number << endl;
  cout << ">> Total biaya kuliah kamu sekitar : " << total << endl;
  cout << "============================================" << endl;

  return 0;
}
