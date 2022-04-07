#include <iostream>
using namespace std;

// just write the code that is inside the
// "main" function on the answer sheet!
int main()
{
    // DEKLARASI
    int loop = 20;
    // ALGORITMA
    for (loop; loop <= 78; loop++)
    {
        if (loop % 3 == 0)
        {
            // customize this code with your name!
            cout << "Suluh Sulistiawan" << endl;
        }
        else if (loop % 5 == 0)
        {
            // adapt this code to your class!
            cout << "Informatika Malam B" << endl;
        }
        else
        {
            cout << loop << endl;
        }
    }

    // stop here!
    return 0;
}
