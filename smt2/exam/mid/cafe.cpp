#include <iostream>
#include <iomanip>
using namespace std;

const int INTERVAL = 50;
const int PERSECONDS = 500;

typedef struct
{
  int hours, minutes, seconds;
} Time;

float BiayaWarent(Time duration)
{
  int hours, minutes, seconds;

  hours = duration.hours * 3600;
  minutes = duration.minutes * 60;
  seconds = hours + minutes + duration.seconds;

  return (seconds / INTERVAL) * PERSECONDS;
}

int main()
{
  int hours, minutes;
  Time start, end, duration;

  cout << "Masukkan jam MULAI rental \n";
  cout << "Jam : ";
  cin >> start.hours;
  cout << "Menit : ";
  cin >> start.minutes;
  cout << "Detik : ";
  cin >> start.seconds;

  cout << "Masukkan jam SELESAI rental : \n";
  cout << "Jam : ";
  cin >> end.hours;
  cout << "Menit : ";
  cin >> end.minutes;
  cout << "Detik : ";
  cin >> end.seconds;

  cout << "Jam MULAI : ";
  cout << setw(2) << setfill('0') << start.hours;
  cout << ":";
  cout << setw(2) << setfill('0') << start.minutes;
  cout << ":";
  cout << setw(2) << setfill('0') << start.seconds;
  cout << "\n";

  cout << "Jam SELESAI : ";
  cout << setw(2) << setfill('0') << end.hours;
  cout << ":";
  cout << setw(2) << setfill('0') << end.minutes;
  cout << ":";
  cout << setw(2) << setfill('0') << end.seconds;
  cout << "\n";

  if (end.seconds - start.seconds < 0)
  {
    duration.seconds = (60 + end.seconds) - start.seconds;
  }
  else
  {
    duration.seconds = end.seconds - start.seconds;
  }

  if (end.minutes - start.minutes < 0)
  {
    duration.minutes = (60 + end.minutes) - start.minutes;
  }
  else
  {
    duration.minutes = end.minutes - start.minutes;
  }

  if (end.hours - start.hours < 0)
  {
    duration.hours = (24 + end.hours) - start.hours;
  }
  else
  {
    duration.hours = end.hours - start.hours;
  }

  cout << "Lama rental : ";
  cout << setw(2) << setfill('0') << duration.hours;
  cout << ":";
  cout << setw(2) << setfill('0') << duration.minutes;
  cout << ":";
  cout << setw(2) << setfill('0') << duration.seconds;
  cout << "\n";

  cout << "Total bayar : ";
  cout << BiayaWarent(duration);
  cout << "\n";
}
