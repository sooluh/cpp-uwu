#include <iostream>
using namespace std;

void wow(int *b);

int main()
{
  int a = 12;
  wow(&a);

  cout << a << "\n";
  return 0;
}

void wow(int *b)
{
  *b = 10;
}
