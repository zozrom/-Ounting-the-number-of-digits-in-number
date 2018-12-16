#include <iostream>
using namespace std;
void  main()
{
	int n, a, b = 0, c;
	cout << "Enter number " << endl;
	cin >> n;
	do
	{
		a = n % 10;
		n = n / 10;


		++b;
	} while (0 < n % 10);

	cout << b << endl;
	system("pause");
}