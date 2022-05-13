#include <iostream>
#include <string>
using namespace std;

int main()
{
  const int HOUR = 48, PERHOUR = 2000, OVER = 3000;
  string name;
  int hours, overtime;
  long total;

  cout << "Masukkan nama Anda : ";
  cin >> name;

  cout << "Jumlah Jam Kerja : ";
  cin >> hours;

  if (hours < HOUR)
  {
    total = hours * PERHOUR;
  }
  else
  {
    overtime = hours - HOUR;
    total = (HOUR * PERHOUR) + (overtime * OVER);
  }

  cout << "Halo " << name << endl;
  cout << "Upah total kamu : " << total << endl;

  return 0;
}
