#include <iostream>
using namespace std;

const int MAX = 100;
typedef int array[MAX];

void read(array numbers, int num);
void sequence(array numbers, int num, int search, bool *found);

int main()
{
  // declaration
  array numbers;
  int num, search;
  bool found;

  // algorithm
  cout << "Mau masukkin berapa elemen array? : ";
  cin >> num;

  read(numbers, num);

  cout << "Ciee mau nyari angka berapa nich? : ";
  cin >> search;

  sequence(numbers, num, search, &found);

  if (found)
  {
    cout << "Alhamdulillah, angka " << search << " ketemu!\n";
  }
  else
  {
    cout << "Janji ga nangis! Angka " << search << " gabisa ketemu :(\n";
  }

  // formality
  return 0;
}

void read(array numbers, int num)
{
  // declaration
  int loop;

  // algorithm
  for (loop = 0; loop < num; loop++)
  {
    cout << "Masukkan elemen array index ke-" << loop << ": ";
    cin >> numbers[loop];
  }
}

void sequence(array numbers, int num, int search, bool *found)
{
  // declaration
  int loop = 0;

  // algorithm
  *found = false;

  while ((loop < num) && (!*found))
  {
    if (numbers[loop] == search)
    {
      *found = true;
    }
    else
    {
      loop += 1;
    }
  }
}
