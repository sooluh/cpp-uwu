#include <iostream>
using namespace std;

int main()
{
  bool run = true;
  int loop, total;

  cout << "Masukkan jumlah anak ayam: ";
  cin >> total;
  cout << "Anak ayam turun " << total;

  for (loop = total; loop >= 1; loop--)
  {
    cout << endl
         << "Anak ayam turun " << total
         << ", mati satu tinggal ";

    if (loop == 1)
    {
      cout << "induknya";
      break;
    }

    total -= 1;
    cout << total;
  }

  return 0;
}
