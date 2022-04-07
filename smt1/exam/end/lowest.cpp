#include <iostream>
using namespace std;

// just write the code that is inside the
// "main" function on the answer sheet!
int main()
{
    // DEKLARASI
    int n, min;
    // ALGORITMA
    while (n != 999)
    {
        cout << "Masukkan nilai N: ";
        cin >> n;

        // if "min" contains null (\0)
        // or (n < min)
        if (min == '\0' || n < min)
        {
            min = n;
        }
    }
    cout << "Nilai terendah: " << min << endl;

    // stop here!
    return 0;
}
