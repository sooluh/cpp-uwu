#include <iostream>
using namespace std;

float average(float total, float size)
{
  return total / size;
}

int minimum(int size, float &total)
{
  int min = '\0', data[size];
  cout << endl;

  for (int index = 0; index < size; index++)
  {
    cout << "input data A[" << index << "] = ";
    cin >> data[index];

    if (min > data[index] || min == '\0')
    {
      min = data[index];
    }

    total += data[index];
  }

  cout << endl;
  return min;
}

int main()
{
  float size, avg, min, total = 0;

  cout << "Masukkan jumlah elemen = ";
  cin >> size;

  min = minimum(size, total);
  avg = average(total, size);

  cout << "Nilai minimum = " << min << endl;
  cout << "Nilai rata-rata = " << avg << endl;

  return 0;
}
