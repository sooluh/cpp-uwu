#include <iostream>

using namespace std;

int main()
{
    char oper;
    float one, two;

    cout << "Enter an operator (+, -, *, /) : ";
    cin >> oper;

    cout << "Enter two numbers : " << endl;
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
        cout << "Error! The operator is not correct";
        break;
    }

    return 0;
}