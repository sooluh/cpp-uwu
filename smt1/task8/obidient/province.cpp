#include <iostream>
#include <string>

using namespace std;

int main()
{
    int selected;
    string result = "";

    cout << "Daftar ibu kota:" << endl;
    cout << "1. Serang" << endl;
    cout << "2. Jakarta" << endl;
    cout << "3. Bandung" << endl;
    cout << "4. Semarang" << endl;
    cout << "5. Yogyakarta" << endl;
    cout << "6. Surabaya" << endl;

    cout << "Masukkan nomornya saja : ";
    cin >> selected;

    switch (selected)
    {
    case 1:
        result = "Banten";
        break;

    case 2:
        result = "DKI Jakarta";
        break;

    case 3:
        result = "Jawa Barat";
        break;

    case 4:
        result = "Jawa Tengah";
        break;

    case 5:
        result = "DI Yogyakarta";
        break;

    case 6:
        result = "Jawa Timur";
        break;
    }

    if (result != "")
    {
        cout << "Provinsinya : " << result;
    }
    else
    {
        cout << "Ibu kota tidak tersedia.";
    }

    cout << endl;

    return 0;
}
