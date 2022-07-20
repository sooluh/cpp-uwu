#include <iostream>
using namespace std;

int factorial(int x)
{
  if (x == 1)
  {
    return 1;
  }
  else
  {
    return x * factorial(x - 1);
  }
}

int main()
{
  int x;

  cout << "Masukkan angka: ";
  cin >> x;

  cout << x << "! = " << factorial(x);
  cout << "\n";

  return 0;
}
