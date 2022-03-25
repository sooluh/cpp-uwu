#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

// enum for region
// to use string in switch case
enum region
{
    ePadang,
    eBandung,
    eSolo,
    eDenpasar,
    ePalu,
    eUnknown
};

// function to convert string to lowercase
string strtolower(string const &value)
{
    // get string length
    int length = value.length();

    // variable declaration
    // charArr has size (length of string + 1)
    char charArr[length + 1], ch;
    string result;

    // copy to charArr from value
    // this is to convert string to char
    strcpy(charArr, value.c_str());

    // loop until it's longer than the string
    for (int i = 0; i < strlen(charArr); i++)
    {
        // change char to lowercase
        ch = tolower(value[i]);
        // push back to result string
        result.push_back(ch);
    }

    // return the result
    return result;
}

// function to verify city name
region verify(string &inString)
{
    // first convert the value to lowercase
    inString = strtolower(inString);

    // verify everything with if
    if (inString == "padang")
        return ePadang;
    if (inString == "bandung")
        return eBandung;
    if (inString == "solo")
        return eSolo;
    if (inString == "denpasar")
        return eDenpasar;
    if (inString == "palu")
        return ePalu;

    // return "unknown"
    // when all conditions are false
    return eUnknown;
}

// main function
int main()
{
    // declare variable
    string city;
    int code;

    // print instruction
    cout << "Masukkan nama kota : ";
    // pass to city variable
    cin >> city;

    // switch case
    // city name validation
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
        // print when city name is unknown
        cout << "Kota yang kamu masukkan tidak tersedia." << endl;

        // return value 0
        // force the program to stop
        // and not continue the process below it
        system("pause");
        return 0;
    }

    cout << "Kode pos kota " << city;
    cout << " adalah " << code << endl;

    system("pause");
    return 0;
}
