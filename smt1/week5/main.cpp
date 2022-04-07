#include <iostream>

using namespace std;

int main()
{
	// declares the variable to be used
	// and sets its data type
	int a;
	int b;

	// print a text
	cout << "Teknik Informatika";

	// "endl" to create a new line
	cout << endl;
	// why not use "\n" ?

	// alternatively, you can use "\n" to shorten your code!
	cout << "\n";
	// "\n" must be written in string
	// wrapped in double quotes (")

	// fill value to variable a
	a = 10;
	// print the value of the variable a
	cout << a << "\n\n";

	// print instruction for user to input something
	cout << "Inputna nilai b : ";
	// read whatever the users enters
	cin >> b;

	// print the contents of the variable b
	// according to what was entered by the user
	cout << "Hasil dari inputan b adalah : " << b << "\n";

	// prevent the program from exiting immediately
	return 0;
}
