// carvars.cpp
// применение символьных констрант
#include <iostream>
using namespace std;

int main()
{
	char charvar1 = 'A';
	char charvar2 = '\t';

	cout << charvar1;
	cout << charvar2;


	charvar1 = 'B';
	cout << charvar1;
	cout << '\n';

	cout << "\"Ну все, мы полетели\", сказала она." << endl;
	cout << '\xB2'<< endl;
	cout << "\xDB" << endl;
	cout << "\x03" << endl;





	return 0;
}
