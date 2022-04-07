#include <iostream>
using namespace std;

int process(int size)
{
    int min = '\0';
    int data[size];
    cout << endl;

    for (int index = 0; index < size; index++)
    {
        cout << "input data A[" << index << "] = ";
        cin >> data[index];

        if (min > data[index] || min == '\0')
        {
            min = data[index];
        }
    }

    cout << endl;
    return min;
}

int main()
{
    int size, result;

    cout << "Masukkan jumlah elemen = ";
    cin >> size;

    result = process(size);
    cout << "Nilai minimum = " << result << endl;

    return 0;
}
