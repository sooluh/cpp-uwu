#include <iostream>
#include <string>

using namespace std;

int main()
{
    const string PROVINCE[6] = {
        "Banten",
        "DKI Jakarta",
        "Jawa Barat",
        "Jawa Tengah",
        "DI Yogyakarta",
        "Jawa Timur"};
    const string CITY[6] = {
        "Serang",
        "Jakarta",
        "Bandung",
        "Semarang",
        "Yogyakarta",
        "Surabaya"};

    string input;
    string result;

    cout << "Masukkan nama ibu kota : ";
    cin >> input;

    for (int i = 0; i < 5; i++)
    {
        switch (input == CITY[i])
        {
        case true:
            result = PROVINCE[i];
            break;

        default:
            cout << "Ibu kota yang kamu masukkan tidak tersedia.";
            return 0;
        }
    }

    cout << "Provinsinya : " << result;
}
