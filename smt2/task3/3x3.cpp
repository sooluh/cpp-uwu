#include <iostream>
#include <string>
using namespace std;

const int row = 3, column = 3;

string message(int index)
{
  const string messages[3] = {
      "Masukkan elemen matriks pertama : [3x3]\n",
      "Masukkan elemen matriks kedua : [3x3]\n",
      "Hasil pengurangan matriks :\n"};

  return messages[index];
}

int main()
{
  int aluminum[row][column], barium[row][column], calcium[row][column], y, x, dry;

  for (dry = 0; dry < 3; dry++)
  {
    cout << message(dry);

    for (y = 0; y < row; y++)
    {
      for (x = 0; x < column; x++)
      {
        if (dry == 0)
        {
          // input value from matrix "A" (aluminum)
          cin >> aluminum[y][x];
        }
        else if (dry == 1)
        {
          // input value from matrix "B" (barium)
          cin >> barium[y][x];
        }
        else
        {
          // count
          calcium[y][x] = aluminum[y][x] - barium[y][x];

          // outputs value from matrix "C" (calcium)
          cout << calcium[y][x] << "\t";
        }
      }

      if (dry == 2)
      {
        cout << "\n";
      }
    }
  }

  return 0;
}
