#include <iostream>
#include <string>

using namespace std;

enum region
{
    ePadang,
    eBandung,
    eSolo,
    eDenpasar,
    ePalu,
    eUnknown
};

region verify(string const &inString)
{
    if (inString == "Padang")
        return ePadang;
    if (inString == "Bandung")
        return eBandung;
    if (inString == "Solo")
        return eSolo;
    if (inString == "Denpasar")
        return eDenpasar;
    if (inString == "Palu")
        return ePalu;

    return eUnknown;
}

int main()
{
    string city;
    int code;

    cout << "Masukkan nama kota : ";
    cin >> city;

    switch (verify(city))
    {
    case ePadang:
        code = 25000;
        break;

    case eBandung:
        code = 40100;
        break;

    case eSolo:
        code = 51000;
        break;

    case eDenpasar:
        code = 72000;
        break;

    case ePalu:
        code = 92300;
        break;

    default:
        cout << "Kota yang kamu masukkan tidak tersedia.";
        return 0;
    }

    cout << "Kode pos kota " << city << " adalah " << code << endl;

    return 0;
}
