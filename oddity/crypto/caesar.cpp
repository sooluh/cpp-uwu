#include <iostream>
#include <string>
using namespace std;

// Diketik pada tanggal 2 Juli 2022
// Hasil diskusi dari:
// - Suluh Sulistiawan (Malam B '21)
// - Muhammad Ridwan Wibisono (Malam A '21)
// - Sri Hati Ardianti Putri (Malam B '21)
// Tautan:
// https://replit.com/@sProDev/Caesar-Cipher

// fungsi untuk meng-enkripsi
string encode(int p, int k)
{
  // algoritma peng-enkripsian
  int c = (p + k) % 255;
  // ubah desimal ke karakter (ascii)
  char encoded = (char)c;

  // kembalikan nilai sebagai string
  return string(1, encoded);
}

// fungsi untuk mendekripsi
string decode(int c, int k)
{
  // algoritma pendekripsian
  int p = (c - k) % 255;
  // ubah desimal ke karakter (ascii)
  char decoded = (char)p;

  // kembalikan nilai sebagai string
  return string(1, decoded);
}

void encrypt()
{
  char key;
  string plain, encrypted = "";

  cout << "\nMasukkan kunci enkripsi/dekripsi: ";
  cin >> key;

  // ubah kunci dari karakter ke desimal (ascii)
  int kunci = (int)key;

  cout << "Masukkan pesan yang ingin di enkripsi:\n";
  cin.ignore();
  getline(cin, plain);

  // pecah teks menjadi karakter-karakter
  for (char &p : plain)
  {
    // ubah karakter ke desimal (ascii)
    int pt = (int)p;
    // gabungkan hasil enkripsi ke variabel encrypted
    encrypted += encode(pt, kunci);
  }

  cout << "\nPlaintext: " << plain << "\n";
  cout << "Encrypted: " << encrypted << "\n";
}

void decrypt()
{
  char key;
  string encrypted, plain = "";

  cout << "\nMasukkan kunci enkripsi/dekripsi: ";
  cin >> key;

  // ubah kunci dari karakter ke desimal (ascii)
  int kunci = (int)key;

  cout << "Masukkan pesan yang ingin di dekripsi:\n";
  cin.ignore();
  getline(cin, encrypted);

  // pecah teks menjadi karakter-karakter
  for (char &e : encrypted)
  {
    // ubah karakter ke desimal (ascii)
    int et = (int)e;
    // gabungkan hasil dekripsi ke variabel plain
    plain += decode(et, kunci);
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

  cout << "PROGRAM KRIPTORAFI CAESAR CIPHER\n";
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
