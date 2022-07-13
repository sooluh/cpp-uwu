#include <iostream>
using namespace std;

const int MAX = 100;
typedef int array[MAX];

void read(array numbers, int total);
void sort(array numbers, int total);
void dump(array numbers, int total);

int main()
{
  array numbers;
  int total;

  cout << "Pengen array berapa elemen?: ";
  cin >> total;

  read(numbers, total);
  sort(numbers, total);

  cout << "\nElemen array udah diurutin:\n";
  dump(numbers, total);

  return 0;
}

void read(array numbers, int total)
{
  int loop = 0;
  for (loop; loop < total; loop++)
  {
    cout << "Masukkin elemen index ke-" << loop << ": ";
    cin >> numbers[loop];
  }
}

void sort(array numbers, int total)
{
  int x, y, temp, min;

  for (x = total - 1; x > 0; x--)
  {
    min = x;

    for (y = 0; y < x; y++)
    {
      if (numbers[y] < numbers[min])
      {
        min = y;
      }
    }

    temp = numbers[x];
    numbers[x] = numbers[min];
    numbers[min] = temp;
  }
}

void dump(array numbers, int total)
{
  int loop = 0;
  for (loop; loop < total; loop++)
  {
    cout << "A[" << loop << "]: " << numbers[loop] << "\n";
  }
}
