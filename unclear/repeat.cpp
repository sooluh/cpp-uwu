#include <iostream>
using namespace std;

int main()
{
	char choice;
	bool run = true;

	while (run)
	{
		// write your code here!

		cout << "Would you like to perform other calculation? (Y/N) ";
		cin >> choice;

		if (choice == 'n' || choice == 'N')
		{
			run = false;
		}
	}

	return 0;
}