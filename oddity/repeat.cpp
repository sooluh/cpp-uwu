#include <iostream>
using namespace std;

int main()
{
	char choice;
	bool run = true;

	while (run)
	{
		run = false;

		// write your code here!

		cout << "Would you like to perform other calculation? (Y/N) ";
		cin >> choice;

		if (choice != 'n' || choice != 'N')
		{
			run = true;
		}
	}

	system("pause");
	return 0;
}
