#include <iostream>
using namespace std;

typedef struct
{
  float x, y;
} Coordinate;

int main()
{
  Coordinate p1, p2, p3;

  cout << "Masukkan x1 : ";
  cin >> p1.x;

  cout << "Masukkan y1 : ";
  cin >> p1.y;

  cout << "Masukkan x2 : ";
  cin >> p2.x;

  cout << "Masukkan y2 : ";
  cin >> p2.y;

  p3.x = (p1.x + p2.x) / 2;
  p3.y = (p1.y + p2.y) / 2;

  cout << "P3 (" << p3.x << ", " << p3.y << ")";
  cout << endl;

  return 0;
}
