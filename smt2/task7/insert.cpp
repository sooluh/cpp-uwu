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
  int x, y, z;
  bool found;

  for (x = 0; x < total; x++)
  {
    z = numbers[x];
    y = x - 1;
    found = false;

    while (y >= 0 && !found)
    {
      if (z > numbers[y])
      {
        numbers[y + 1] = numbers[y];
        y = y - 1;

        continue;
      }

      found = true;
    }

    numbers[y + 1] = z;
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
