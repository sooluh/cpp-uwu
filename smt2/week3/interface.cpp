#include <iostream>
using namespace std;

int divide(int divisible, int divisor);

int main()
{
    int result = divide(12, 3);
    cout << "Hasil " << result << endl;

    return 0;
}

int divide(int divisible, int divisor)
{
    return divisible * divisor;
}
