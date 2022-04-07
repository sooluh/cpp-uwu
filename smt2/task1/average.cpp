#include <iostream>
using namespace std;

int process(int total)
{
    float result = 0;
    int temporary;

    cout << "\n";

    for (int loop = 0; loop < total; loop++)
    {
        cout << "Masukkan angka ke-" << (loop + 1) << " : ";
        cin >> temporary;

        result += temporary;
    }

    return result / total;
}

int main()
{
    int element;
    float result;
    bool run = true;
    char end;

    do
    {
        cout << "Program menghitung Rata-Rata\n\n";
        cout << "Masukkan jumlah elemen : ";
        cin >> element;

        result = process(element);
        cout << "\nNilai Rata-Rata = " << result;

        cout << "\n\nApakah program akan diulang [y/n] ? ";
        cin >> end;
        if (end == 'n')
        {
            run = false;
        }
    } while (run == true);

    cout << "\nProgram selesai bye...\n";
    return 0;
}
