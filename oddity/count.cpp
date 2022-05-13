#include <iostream>
#include <cstring>
using namespace std;

int main()
{
  char string[999], *token;
  int count = 0;

  cout << "Masukkan teks (string)" << endl;
  cin.getline(string, 100);

  token = strtok(string, " ");

  while (NULL != token)
  {
    count++;
    token = strtok(NULL, " ");
  }

  cout << "Jumlah kata : " << count << endl;

  return 0;
}
