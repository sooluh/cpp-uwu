#include <iostream>
using namespace std;

void result(int one, int two)
{
  int output = one * two;
  cout << "\nLuas Persegi Panjang = " << output << endl;
}

int main()
{
  int one, two;

  cout << "Program menghitung luas Persegi Panjang\n\n";
  cout << "Masukkan nilai panjang : ";
  cin >> one;

  cout << "Masukkan nilai lebar : ";
  cin >> two;

  result(one, two);
  return 0;
}
