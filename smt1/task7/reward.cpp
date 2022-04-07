#include <iostream>
using namespace std;

int main()
{
    const int OVERTIME = 3000;
    const int DWH = 48;

    bool run = true;
    bool failed = false;

    char name[255];
    char group;
    int dwh;
    float hourly, wage;

    cout << "Masukkan nama Anda : ";
    cin >> name;

    cout << "Masukkan total jam kerja : ";
    cin >> dwh;

    while (run)
    {
        run = false;

        if (failed == true)
        {
            cout << "Golongan yang Anda masukkan tidak valid!" << endl;
        }

        cout << "Masukkan golongan Anda : ";
        cin >> group;

        switch (group)
        {
        case 'A':
            hourly = 4000;
            break;

        case 'B':
            hourly = 5000;
            break;

        case 'C':
            hourly = 6000;
            break;

        case 'D':
            hourly = 7500;
            break;

        default:
            failed = true;
            run = true;
        }
    }

    if (dwh <= DWH)
    {
        wage = dwh * hourly;
    }
    else
    {
        wage = (DWH * hourly) + (dwh - DWH) * OVERTIME;
    }

    cout << "Hai " << name << endl;
    cout << "Upah/gaji yang Anda dapatkan adalah Rp. " << wage << endl;
    return 0;
}
