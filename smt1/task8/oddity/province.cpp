#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

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

int main()
{
    // declare the name of the capital city
    // and the name of the province
    // in different variables,
    // but must be in the same order
    const string PROVINCE[6] = {
        "Banten",
        "DKI Jakarta",
        "Jawa Barat",
        "Jawa Tengah",
        "DI Yogyakarta",
        "Jawa Timur"
    };
    const string CITY[6] = {
        "Serang",
        "Jakarta",
        "Bandung",
        "Semarang",
        "Yogyakarta",
        "Surabaya"
    };

    // declare variable
    string input, result = "";

    // print instruction
    cout << "Masukkan nama ibu kota : ";
    // pass to input variable
    cin >> input;

    // loop over a number of existing city data
    // subtract 1, because the array calculation starts from 0
    for (int i = 0; i < 5; i++)
    {
        if (strtolower(input) == strtolower(CITY[i]))
        {
            result = PROVINCE[i];
        }
    }

    if (result != "")
    {
        cout << "Provinsinya : " << result << endl;
    }
    else
    {
        cout << "Ibu kota tidak tersedia." << endl;
    }

    return 0;
}
