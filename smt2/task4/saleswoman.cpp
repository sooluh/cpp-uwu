#include <iostream>
#include <iomanip>
using namespace std;

const int LIMIT = 999;

void divider(const int limit)
{
  for (int loop = 0; loop < limit; loop++)
  {
    cout << "=";
  }

  cout << "\n";
}

typedef struct
{
  int id, price, total;
} Item;

typedef struct
{
  int id, sold[LIMIT], total;
} Saleswoman;

int main()
{
  Item items[LIMIT];
  Saleswoman saleswoman[LIMIT];
  int total, sales, row, col, sum;

  cout << "Masukkan banyaknya barang : ";
  cin >> total;

  cout << endl;
  divider(55);

  cout << "Masukkan data barang\n";
  divider(55);
  cout << endl;

  for (row = 0; row < total; row++)
  {
    items[row].id = row + 1;

    cout << "Masukkan harga barang ke-" << items[row].id << "\t\t: ";
    cin >> items[row].price;

    divider(55);
  }

  cout << endl;
  cout << "Masukkan banyaknya pramuniaga : ";
  cin >> sales;

  cout << endl;
  divider(55);

  cout << "Masukkan data pramuniaga\n";
  divider(55);
  cout << endl;

  for (row = 0; row < sales; row++)
  {
    sum = 0;
    saleswoman[row].id = row + 1;

    for (col = 0; col < total; col++)
    {
      cout << "Masukkan total penjualan pramuniaga " << saleswoman[row].id;
      cout << " [barang ke-" << col + 1 << "] : ";

      cin >> saleswoman[row].sold[col];
      sum += saleswoman[row].sold[col] * items[col].price;
    }

    saleswoman[row].total = sum;
    divider(55);
  }

  for (row = 0; row < total; row++)
  {
    sum = 0;

    for (col = 0; col < sales; col++)
    {
      sum += saleswoman[col].sold[row];
    }

    items[row].total = sum * items[row].price;
  }

  cout << endl;
  divider(79);

  cout << "| Barang | Harga            | Pramuniaga                                      |\n";
  cout << "|        |                  |";

  for (row = 0; row < sales; row++)
  {
    cout << " " << setiosflags(ios::left) << setw(3) << saleswoman[row].id << "|";
  }
  cout << endl;
  divider(79);

  for (row = 0; row < total; row++)
  {
    cout << "| " << setiosflags(ios::left) << setw(7) << items[row].id << "|";
    cout << " Rp. " << setiosflags(ios::left) << setw(13) << items[row].price << "|";

    for (col = 0; col < sales; col++)
    {
      cout << " " << setiosflags(ios::left) << setw(3) << saleswoman[col].sold[row] << "|";
    }

    cout << endl;
  }

  divider(79);
  cout << "\n\n";

  divider(34);
  cout << "| Barang | Total Hasil Penjualan |\n";
  divider(34);

  for (row = 0; row < total; row++)
  {
    cout << "| " << setiosflags(ios::left) << setw(7) << items[row].id << "|";
    cout << " Rp. " << setiosflags(ios::left) << setw(18) << items[row].total << "|\n";
  }

  divider(34);
  cout << "\n\n";

  divider(38);
  cout << "| Pramuniaga | Total Hasil Penjualan |\n";
  divider(38);

  for (row = 0; row < sales; row++)
  {
    cout << "| " << setiosflags(ios::left) << setw(11) << saleswoman[row].id << "|";
    cout << " Rp. " << setiosflags(ios::left) << setw(18) << saleswoman[row].total << "|\n";
  }

  divider(38);
  cout << endl;

  return 0;
}
