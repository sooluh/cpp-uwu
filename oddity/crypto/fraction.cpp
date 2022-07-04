#include <iostream>
#include <string>
using namespace std;

/**
 * Diketik pada tanggal 2 Juli 2022
 * Hasil diskusi dari:
 * - Suluh Sulistiawan (Malam B '21) - Me!
 * - Muhammad Ridwan Wibisono (Malam A '21)
 * - Sri Hati Ardianti Putri (Malam B '21)
 *
 * Tautan:
 * - https://replit.com/@sProDev/Fraction-Cipher
 * - https://github.com/sooluh/cpp-uwu/blob/main/oddity/crypto/fraction.cpp
 *
 * Cipher lainnya:
 * https://github.com/sooluh/cpp-uwu/blob/main/oddity/crypto
 *
 * Rumus enkripsi:
 * x + 5 / x + 7
 */

// konstanta kunci
const int k1 = 5;
const int k2 = 7;

// tipe data bentukan
// untuk pecahan
struct Fraction
{
  // num = pembilang
  // den = penyebut
  int num, den;
};

// fungsi untuk menghitung dua buah pecahan (pengurangan)
Fraction subtract(Fraction first, Fraction second)
{
  // perkalian silang pecahan
  int num1 = first.num * second.den;
  int num2 = second.num * first.den;
  int den = first.den * second.den;

  Fraction result = {num1 - num2, den};
  return result;
}

// algoritma enkripsi fungsi pecahan
string encode(int x)
{
  // p + k1
  int num = (x + k1) % 255;
  // p + k2
  int den = (x + k2) % 255;

  // ubah desimal ke karakter (ascii)
  char cn = (char)num;
  char cd = (char)den;

  // kembalikan nilai sebagai string
  return string(1, cn) + cd;
}

// algoritma dekripsi fungsi pecahan
string decode(int x1, int x2)
{
  // (k1 / 1) - (k2 * x1) / x2
  Fraction top = subtract({k1, 1}, {(k2 * x1), x2});
  // (x1 / x2) - (1 / 1)
  Fraction bottom = subtract({x1, x2}, {1, 1});

  // pembagian pecahan (perkalian silang)
  int dt = top.num * bottom.den;
  int db = bottom.num * top.den;
  int dc = (dt / db) % 255;

  // ubah desimal ke karakter (ascii)
  char decoded = (char)dc;

  // kembalikan nilai sebagai string
  return string(1, decoded);
}

void encrypt()
{
  string plain, encrypted = "";

  cout << "\nMasukkan pesan yang ingin di enkripsi:\n";
  cin.ignore();
  getline(cin, plain);

  // pecah teks menjadi karakter-karakter
  for (char &p : plain)
  {
    // ubah karakter ke desimal (ascii)
    int d = (int)p;
    // gabungkan hasil enkripsi ke variabel encrypted
    encrypted += encode(d);
  }

  cout << "\nPlaintext: " << plain << "\n";
  cout << "Encrypted: " << encrypted << "\n";
}

void decrypt()
{
  int i = 0, temp;
  string encrypted, plain = "";

  cout << "\nMasukkan pesan yang ingin di dekripsi:\n";
  cin.ignore();
  getline(cin, encrypted);

  // pecah teks menjadi karakter-karakter
  for (char &e : encrypted)
  {
    // tingkatkan variabel i disetiap perulangan
    i++;

    // jika i tidak habis dibagi 2
    if (i % 2 == 1)
    {
      // simpan nilai saat ini ke variabel temp
      // ubah karakter ke desimal (ascii)
      temp = (int)e;
    }
    else
    {
      // jika i habis dibagi 2
      // ubah karakter ke desimal (ascii)
      int d = (int)e;
      // gabungkan hasil dekripsi ke variabel plain
      plain += decode(temp, d);
    }
  }

  cout << "\nEncrypted: " << encrypted << "\n";
  cout << "Plaintext: " << plain << "\n";
}

void process(bool failed = false)
{
  char choice;
  system("clear"); // system("cls");

  if (failed)
  {
    cout << "Pilihan yang Anda masukkan salah!\n\n";
  }

  cout << "PROGRAM KRIPTOGRAFI FUNGSI PECAHAN\n";
  cout << "Daftar Menu:\n";
  cout << "1. Enkripsi\n";
  cout << "2. Dekripsi\n";

  cout << "Pilih menu: ";
  cin >> choice;

  if (choice == '1')
  {
    encrypt();
  }
  else if (choice == '2')
  {
    decrypt();
  }
  else
  {
    process(true);
  }
}

int main()
{
  char choice;
  bool run = true;

  while (run)
  {
    process();

    cout << "\nUlangi proses? (Y/N) ";
    cin >> choice;

    if (choice == 'n' || choice == 'N')
    {
      run = false;
    }
    else
    {
      run = true;
    }
  }

  system("clear"); // system("cls");
  return 0;
}
