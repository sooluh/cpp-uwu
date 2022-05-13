#include <iostream>
#include <stdlib.h>
using namespace std;

int main()
{
  system("CLS");
  // flush forces the printing to the screen before it clears
  cout << "Hello" << flush;

  system("CLS");
  cout << "Good-Bye" << endl;

  return 0;
}
