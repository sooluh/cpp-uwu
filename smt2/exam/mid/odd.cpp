#include <iostream>
using namespace std;

const int LIMIT = 999;

void JumJil(int X[], int N)
{
  int now, total = 0;

  for (int arc = 0; arc < N; arc++)
  {
    now = X[arc];

    if (now % 2 != 0)
    {
      total += now;
    }
  }

  cout << "Total jumlah nilai elemen (ganjil) : ";
  cout << total;
}

int main()
{
  int X[LIMIT] = {0}, N;

  cout << "Masukkan banyaknya elemen pada Array X : ";
  cin >> N;

  for (int loop = 0; loop < N; loop++)
  {
    cout << "Masukkan nilai ke X[" << loop << "] : ";
    cin >> X[loop];
  }

  JumJil(X, N);
  cout << "\n";
}
