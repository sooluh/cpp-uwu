#include <iostream>
using namespace std;

const int MAX = 100;
typedef int array[MAX];

void read(array numbers, int num);
void sequence(array numbers, int num, int search, int *index);

int main()
{
  // declaration
  array numbers;
  int num, search, index;

  // algorithm
  cout << "Mau masukkin berapa elemen array? : ";
  cin >> num;

  read(numbers, num);

  cout << "Ciee mau nyari angka berapa nich? : ";
  cin >> search;

  sequence(numbers, num, search, &index);

  if (index != -1)
  {
    cout << "Waduh, elemen " << search << " udah ada di array! di index ke-" << index << "\n";
  }
  else
  {
    cout << "Hehe, " << search << " belom ada di array, yaudah aku tambahin ke index " << num << "\n";

    numbers[num] = search;
    num += 1;
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
    cout << "Masukkan elemen array yang ke-" << loop << ": ";
    cin >> numbers[loop];
  }
}

void sequence(array numbers, int num, int search, int *index)
{
  // declaration
  int loop = 0;
  bool found = false;

  // algorithm
  while ((loop < num) && (!found))
  {
    if (numbers[loop] == search)
    {
      found = true;
    }
    else
    {
      loop += 1;
    }
  }

  if (found)
  {
    *index = loop;
  }
  else
  {
    *index = -1;
  }
}
