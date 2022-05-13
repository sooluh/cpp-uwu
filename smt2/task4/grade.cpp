#include <iostream>
using namespace std;

const float TEN = 0.1, TWENTY = 0.2, THIRTY = 0.3, FORTY = 0.4;

typedef struct
{
  int number;
  char name[255], value;
  float task, quiz, mid, end, total;
} Grade;

char convert(int value)
{
  return value > 85 ? 'A'
    : (value > 70 ? 'B'
      : (value > 55 ? 'C'
        : (value > 40 ? 'D' : 'E')));
}

int main()
{
  Grade grade;
  grade.total = 0;

  cout << "NIM\t\t: ";
  cin >> grade.number;

  cout << "Nama\t\t: ";
  cin >> grade.name;

  cout << "Nilai Tugas\t: ";
  cin >> grade.task;
  grade.total += TEN * grade.task;

  cout << "Nilai Quiz\t: ";
  cin >> grade.quiz;
  grade.total += TWENTY * grade.quiz;

  cout << "Nilai UTS\t: ";
  cin >> grade.mid;
  grade.total += THIRTY * grade.mid;

  cout << "Nilai UAS\t: ";
  cin >> grade.end;
  grade.total += FORTY * grade.end;

  grade.value = convert(grade.total);

  cout << "\n";

  cout << "NIM\t\t: " << grade.number << endl;
  cout << "Nama\t\t: " << grade.name << endl;
  cout << "Nilai Tugas\t: " << grade.task << endl;
  cout << "Nilai Quiz\t: " << grade.quiz << endl;
  cout << "Nilai UTS\t: " << grade.mid << endl;
  cout << "Nilai UAS\t: " << grade.end << endl;
  cout << "Nilai Akhir\t: " << grade.total << endl;
  cout << "Nilai Huruf\t: " << grade.value << endl;

  return 0;
}
