#include <iostream>
using namespace std;

const int MAX = 100;
typedef int array[MAX];

void read(array numbers, int total);
void dump(array numbers, int total);
void bubble(array numbers, int total);

int main()
{
  array numbers;
  int total;

  cout << "Pengen masukkin berapa elemen di array?: ";
  cin >> total;

  read(numbers, total);

  cout << "\nData sebelum diurutin nih:\n";
  dump(numbers, total);

  bubble(numbers, total);

  cout << "\nPas udah diurutin jadi gini:\n";
  dump(numbers, total);

  return 0;
}

void read(array numbers, int total)
{
  int loop = 0;
  for (loop; loop < total; loop++)
  {
    cout << "Masukkin nilai buat elemen index ke-" << loop << ": ";
    cin >> numbers[loop];
  }
}

void dump(array numbers, int total)
{
  int loop = 0;
  for (loop; loop < total; loop++)
  {
    cout << "Array A[" << loop << "]: " << numbers[loop] << "\n";
  }
}

void bubble(array numbers, int total)
{
  int loop = 0, count, temp;
  for (loop; loop < total; loop++)
  {
    for (count = total - 1; count > loop; count--)
    {
      if (numbers[count] > numbers[count - 1])
      {
        temp = numbers[count];
        numbers[count] = numbers[count - 1];
        numbers[count - 1] = temp;
      }
    }
  }
}
