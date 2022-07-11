#include <iostream>
using namespace std;

const int MAX = 100;
typedef int array[MAX];

void read(array numbers, int num);
void binary(array numbers, int num, int search, int *index);

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

  binary(numbers, num, search, &index);

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

void binary(array numbers, int num, int search, int *index)
{
  // declaration
  int left, right, center;
  bool found = false;

  // algorithm
  left = 0;
  right = num - 1;

  while ((!found) && (left <= right))
  {
    center = (left + right) / 2;

    if (numbers[center] == search)
    {
      found = true;
    }
    else if (numbers[center] < search)
    {
      left = center + 1;
    }
    else
    {
      right = center - 1;
    }
  }

  if (found)
  {
    *index = center;
  }
  else
  {
    *index = -1;
  }
}
