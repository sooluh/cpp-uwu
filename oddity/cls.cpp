#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  system("cls"); // system("clear");
  // flush forces the printing to the screen before it clears
  cout << "Hello" << flush;

  system("cls"); // system("clear");
  cout << "Good-Bye" << endl;

  return 0;
}
