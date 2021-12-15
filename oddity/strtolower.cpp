#include <iostream>
#include <string>
#include <cctype>
#include <cstring>

using namespace std;

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
    string wow = "kErEn BaNgEt";
    string lower = strtolower(wow);

    cout << "Original : " << wow << endl;
    cout << "Lowercase : " << lower << endl;

    system("pause");
    return 0;
}
