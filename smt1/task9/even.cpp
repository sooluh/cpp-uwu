#include <iostream>
using namespace std;

int main()
{
  bool run = true;
  int total, number;

  cout << "Masukkan beberapa bilangan bulat (pisahkan dengan baris baru): " << endl;

  while (true)
  {
    cin >> number;

    if (number == -1)
    {
      // stop looping when found number -1
      run = false;

      // prevent further processing
      break;
    }

    if (number % 2 == 0)
    {
      // if an even number is found, increase total
      total += 1;
    }
  }

  cout << "Banyaknya data bilangan genap: " << total << endl;
  return 0;
}
