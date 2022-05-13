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
  int x, y, data[99][99] = {0};

  cout << "Masukkan elemen matriks : \n";
  for (y = 0; y < row; y++)
  {
    for (x = 0; x < column; x++)
    {
      cin >> data[y][x];

      data[row][x] += data[y][x];
      data[y][column] += data[y][x];
    }
  }

  cout << "\nHasil matriks : \n\n";
  for (y = 0; y <= row; y++)
  {
    for (x = 0; x <= column; x++)
    {
      cout << data[y][x] << "\t";
    }

    cout << "\n";
  }

  return 0;
}
