#include <iostream>
using namespace std;

int main()
{
  const int DAY = 86400, HOUR = 3600, MINUTE = 60;
  int days, hours, minutes, seconds;

  cout << "Masukkan waktu (detik) : ";
  cin >> seconds;

  days = seconds / DAY;
  seconds = seconds % DAY;

  hours = seconds / HOUR;
  seconds = seconds % HOUR;

  minutes = seconds / MINUTE;
  seconds = seconds % MINUTE;

  cout << days << " hari, ";
  cout << hours << " jam, ";
  cout << minutes << " menit, ";
  cout << seconds << " detik." << endl;

  return 0;
}
