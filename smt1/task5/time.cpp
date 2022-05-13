/**
 * iostream header is used
 * to call cout and cin functions
 * https://www.cplusplus.com/reference/iostream
 */
#include <iostream>

/**
 * iomanip header is used
 * to call setw and setfill functions
 * https://www.cplusplus.com/reference/iomanip/
 */
#include <iomanip>

/**
 * means we use namespace named std
 * so as not to repeat writing "std::cout" and "std::cin"
 * so we can simply write "cout" and "cin" only
 */
using namespace std;

// create our own data type
// combine & define data type for Time
typedef struct
{
  int hh, mm, ss;
} Time;

/**
 * main function to be called at program startup
 * after initialization of non-local object
 * with static storage duration
 */
int main()
{
  // declares variable to be used
  // and sets its data type
  Time time;

  // give instructions to enter hours
  cout << "Masukkan jam (hh) : ";
  // read input from user
  // and enter it into a variable
  cin >> time.hh;

  // give instructions to enter minutes
  cout << "Masukkan menit (mm) : ";
  // read input from user
  // and enter it into a variable
  cin >> time.mm;

  // give instructions to enter seconds
  cout << "Masukkan detik (ss) : ";
  // read input from user
  // and enter it into a variable
  cin >> time.ss;

  if (time.ss + 1 < 60)
  {
    // if seconds +1 result is less than 60
    // then add 1 to seconds variable
    time.ss = time.ss + 1;
  }
  else
  {
    // otherwise (meaning >= 60)
    // then seconds are overwritten to 0
    time.ss = 0;

    if (time.mm + 1 < 60)
    {
      // if minutes +1 result is less than 60
      // then add 1 to minutes variable
      time.mm = time.mm + 1;
    }
    else
    {
      // otherwise (meaning >= 60)
      // then minutes are overwritten to 0
      time.mm = 0;

      if (time.hh + 1 < 24)
      {
        // if hours +1 result is less than 24
        // then add 1 to hours variable
        time.hh = time.hh + 1;
      }
      else
      {
        // otherwise (meaning >= 24)
        // then hours are overwritten to 0
        time.hh = 0;
      }
    }
  }

  // show final result
  cout << "Jam yang baru ";

  /**
   * a little explanation for lines 117, 120 and 123
   *
   * "setw" function sets field width
   * or number of characters that are to be
   * displayed before a particular field
   *
   * "setfill" function is used
   * to fill stream with char
   * type c specified as a parameter
   *
   * easy explanation,
   * only to add 0 in front of number
   * if value of variable is <= 9
   */
  cout << setw(2) << setfill('0') << time.hh;
  // separator
  cout << ':';
  cout << setw(2) << setfill('0') << time.mm;
  // separator
  cout << ':';
  cout << setw(2) << setfill('0') << time.ss;
  // new line
  cout << endl;

  // prevent the program from exiting immediately
  return 0;
}
