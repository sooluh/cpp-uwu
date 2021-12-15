#include <iostream>

using namespace std;

int main()
{
    int selected, result = 0;

    cout << "Daftar kota:" << endl;
    cout << "1. Padang" << endl;
    cout << "2. Bandung" << endl;
    cout << "3. Solo" << endl;
    cout << "4. Denpasar" << endl;
    cout << "5. Palu" << endl;

    cout << "Masukkan nomor kota : ";
    cin >> selected;

    switch (selected)
    {
    case 1:
        result = 25000;
        break;

    case 2:
        result = 40100;
        break;

    case 3:
        result = 51000;
        break;

    case 4:
        result = 72000;
        break;

    case 5:
        result = 92300;
        break;
    }

    if (result != 0)
    {
        cout << "Kode posnya adalah : " << result;
    }
    else
    {
        cout << "Nomor kota tidak tersedia.";
    }

    cout << endl;

    system("pause");
    return 0;
}
