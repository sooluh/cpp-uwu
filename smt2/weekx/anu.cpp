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
  cout << "Badhe nginput pinten elemen array? : ";
  cin >> num;

  read(numbers, num);

  cout << "Badhe nggoleki nopo? : ";
  cin >> search;

  sequence(numbers, num, search, &found);

  if (found == true)
  {
    cout << "Alhamdulillah, angka " << search << " saget ketemu\n";
  }
  else
  {
    cout << "Mboten pareng nangis nggih, angka " << search << " mboten saget ketemu\n";
  }

  // idk
  return 0;
}

void read(array numbers, int num)
{
  // declaration
  int loop;

  // algorithm
  for (loop = 0; loop < num; loop++)
  {
    cout << "Lebetken elemen array kaping-" << loop << ": ";
    cin >> numbers[loop];
  }
}

void sequence(array numbers, int num, int search, bool *found)
{
  // declaration
  int loop;

  // algorithm
  loop = 0;

  while ((loop < num) && (numbers[loop] != search))
  {
    loop++;
  }

  if (numbers[loop] == search)
  {
    *found = true;
  }
  else
  {
    *found = false;
  }
}
