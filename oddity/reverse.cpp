#include <iostream>

using namespace std;

int main()
{
    int input[999], output[999], count, i;

    cout << "Masukkan jumlah elemen array" << endl;
    cin >> count;

    cout << "Oke, ketikkan " << count << " nomor! (pisahkan dengan Enter)" << endl;

    for (i = 0; i < count; i++)
    {
        cin >> input[i];
    }

    for (i = 0; i < count; i++)
    {
        output[i] = input[count - i - 1];
    }

    cout << "Array yang dibalik" << endl;
    for (i = 0; i < count; i++)
    {
        cout << output[i] << " ";
    }

    cout << endl;
    return 0;
}
