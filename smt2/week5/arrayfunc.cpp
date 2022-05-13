#include <iostream>
using namespace std;

const int MAKS = 10;
void InputLarik(int L[], int N);

int main()
{
  int Larik[MAKS];
  int i, n, maksimum = '\0';

  cout << "Masukkan banyaknya elemen pada larik : ";
  cin >> n;

  InputLarik(Larik, n);

  for (i = 0; i < n; i++)
  {
    if (maksimum == '\0' || Larik[i] > maksimum)
    {
      maksimum = Larik[i];
    }
  }

  cout << "Nilai maks. dari larik : " << maksimum;
  cout << "\n";
  return 0;
}

void InputLarik(int L[], int N)
{
  int j;
  for (j = 0; j < N; j++)
  {
    cout << "Masukkan data larik J[" << j + 1 << "]";
    cout << " : ";

    cin >> L[j];
  }
}
