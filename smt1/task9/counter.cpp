#include <iostream>
using namespace std;

int main()
{
    bool run = true;
    char text[999];
    int loop, total = 0;

    cout << "Masukkan beberapa karakter (pisahkan dengan baris baru): " << endl;

    while (run)
    {
        cin >> text;

        // do loop as long as text[loop] is not null
        for (loop = 0; text[loop] != '\0'; loop++)
        {
            // loop[text] is not a "space" and not a "dot"
            if (text[loop] != ' ' && text[loop] != '.')
            {
                // increase total value
                total += 1;

                // prevent further processing
                break;
            }

            if (text[loop] == '.')
            {
                // stop "while" loop if a "dot" is found
                run = false;
            }
        }
    }

    cout << "Jumlah karakter: " << total << endl;

    return 0;
}
