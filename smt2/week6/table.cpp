#include <iostream>
#include <string>
#include <sstream>
using namespace std;

string right(const double x, const int decDigits, const int width)
{
  stringstream ss;

  ss << fixed << right;
  ss.fill(' ');
  ss.width(width);
  ss.precision(decDigits);
  ss << x;

  return ss.str();
}

string center(const string s, const int w)
{
  stringstream ss, spaces;
  int padding = w - s.size();

  for (int i = 0; i < padding / 2; ++i)
  {
    spaces << " ";
  }

  ss << spaces.str() << s << spaces.str();
  if (padding > 0 && padding % 2 != 0)
  {
    ss << " ";
  }

  return ss.str();
}

int main()
{
  cout << center("x", 10) << " | ";
  cout << center("x^2", 10) << " | ";
  cout << center("(x^2)/8", 10) << "\n";

  cout << string(10 * 3 + 2 * 3, '-') << "\n";

  for (double x = 1.5; x < 200; x += x * 2)
  {
    cout << right(x, 1, 10) << " | ";
    cout << right(x * x, 2, 10) << " | ";
    cout << right(x * x / 8.0, 4, 10) << "\n";
  }
}
