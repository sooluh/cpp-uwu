#include <iostream>
#include <string>
using namespace std;

// Diketik pada tanggal 2 Juli 2022
// Hasil diskusi dari:
// - Suluh Sulistiawan (Malam B '21)
// - Muhammad Ridwan Wibisono (Malam A '21)
// - Sri Hati Ardianti Putri (Malam B '21)
// Tautan:
// https://replit.com/@sProDev/Vigenere-Cipher

// fungsi untuk meng-enkripsi
string encode(int pi, int ki)
{
  // algoritma peng-enkripsian
  int ci = (pi + ki) % 255;
  // ubah desimal ke karakter (ascii)
  char encoded = (char)ci;

  // kembalikan nilai sebagai string
  return string(1, encoded);
}

// fungsi untuk mendekripsi
string decode(int ci, int ki)
{
  // algoritma pendekripsian
  int pi = (ci - ki) % 255;
  // ubah desimal ke karakter (ascii)
  char decoded = (char)pi;

  // kembalikan nilai sebagai string
  return string(1, decoded);
}

void encrypt()
{
  int i = 0;
  string key, plain, encrypted = "";

  cout << "\nMasukkan kunci enkripsi/dekripsi: ";
  cin >> key;

  cout << "Masukkan pesan yang ingin di enkripsi:\n";
  cin.ignore();
  getline(cin, plain);

  // pecah teks menjadi karakter-karakter
  for (char &p : plain)
  {
    // jika nilai i = panjang karakter "kunci"
    if (i == key.size())
    {
      // i di atur ulang ke 0
      i = 0;
    }

    // ubah karakter ke desimal (ascii)
    int pi = (int)p;
    int ki = (int)key[i];

    // gabungkan hasil enkripsi ke variabel encrypted
    encrypted += encode(pi, ki);
    // tingkatkan variabel i disetiap perulangan
    i++;
  }

  cout << "\nPlaintext: " << plain << "\n";
  cout << "Encrypted: " << encrypted << "\n";
}

void decrypt()
{
  int i = 0;
  string key, encrypted, plain = "";

  cout << "\nMasukkan kunci enkripsi/dekripsi: ";
  cin >> key;

  cout << "Masukkan pesan yang ingin di dekripsi:\n";
  cin.ignore();
  getline(cin, encrypted);

  // pecah teks menjadi karakter-karakter
  for (char &e : encrypted)
  {
    // jika nilai i = panjang karakter "kunci"
    if (i == key.size())
    {
      // i diatur ulang ke 0
      i = 0;
    }

    // ubah karakter ke desimal (ascii)
    int ci = (int)e;
    int ki = (int)key[i];

    // gabungkan hasil dekripsi ke variabel plain
    plain += decode(ci, ki);
    // tingkatkan variabel i disetiap perulangan
    i++;
  }

  cout << "\Encrypted: " << encrypted << "\n";
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

  cout << "PRORAM KRIPTOGRAFI VIENERE CIPHER\n";
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
