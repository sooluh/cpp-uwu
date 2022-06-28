#include <iostream>
#include <string>
using namespace std;

int k1 = 5;
int k2 = 7;

string encode(int x)
{
  int top = (x + k1);
  int bottom = (x + k2);

  char ct = (char)top;
  char cb = (char)bottom;

  return string(1, ct) + cb;
}

string decode(int x1, int x2)
{
  double top = ((k1 - k2) * x1) + 9;
  double bottom = x1 - x2;

  int dc = (top / x2) / (bottom / x2);
  char decoded = (char)dc;

  return string(1, decoded);
}

void encrypt()
{
  string plain, encrypted = "";

  cout << "\nMasukkan pesan yang ingin di enkripsi:\n";
  cin >> plain;

  for (char &p : plain)
  {
    encrypted += encode((int)p);
  }

  cout << "\nPlaintext: " << plain << "\n";
  cout << "Encrypted: " << encrypted << "\n";
}

void decrypt()
{
  int count = 0, temp;
  string encrypted, plain = "";

  cout << "\nMasukkan pesan yang ingin di dekripsi:\n";
  cin >> encrypted;

  for (char &e : encrypted)
  {
    count++;

    if (count % 2 == 1)
    {
      temp = (int)e;
    }
    else
    {
      plain += decode(temp, (int)e);
    }
  }

  cout << "\nEncrypted: " << encrypted << "\n";
  cout << "Plaintext: " << plain << "\n";
}

void process()
{
  char choice;

  cout << "\nPROGRAM KRIPTOGRAFI\n";
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
    process();
  }
}

int main()
{
  char choice;
  bool run = true;

  while (run)
  {
    process();

    cout << "Ulangi proses? (Y/N) ";
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

  return 0;
}
