#include <iostream>
using namespace std;

int row, column;

void matrix()
{
  cout << "Masukkan jumlah baris : ";
  cin >> row;

  cout << "Masukkan jumlah kolom : ";
  cin >> column;
}

int main()
{
  matrix();
  int x, y, max = '\0', data[row][column];

  cout << "Masukkan elemen matriks : \n";
  for (y = 0; y < row; y++)
  {
    for (x = 0; x < column; x++)
    {
      cin >> data[y][x];

      if (max == '\0' || data[y][x] > max)
      {
        max = data[y][x];
      }
    }
  }

  cout << "Elemen maksimum dari matriks : " << max;
  cout << "\n";
  return 0;
}
