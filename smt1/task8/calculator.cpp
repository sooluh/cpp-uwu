#include <iostream>

using namespace std;

int main()
{
    char oper;
    float one, two;

    cout << "Masukkan operator (+, -, *, /) : ";
    cin >> oper;

    cout << "Ketikkan 2 angka (pisahkan dengan Enter)" << endl;
    cin >> one >> two;

    switch (oper)
    {
    case '+':
        cout << one << " + " << two << " = " << one + two;
        break;

    case '-':
        cout << one << " - " << two << " = " << one - two;
        break;

    case '*':
        cout << one << " * " << two << " = " << one * two;
        break;

    case '/':
        cout << one << " / " << two << " = " << one / two;
        break;

    default:
        cout << "Operator tidak tersedia.";
        break;
    }

    cout << endl;

    return 0;
}
