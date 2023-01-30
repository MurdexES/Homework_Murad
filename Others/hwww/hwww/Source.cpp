#include <iostream>
using namespace std;

void main()
{
	int h = 0;
	cin >> h;

	for (size_t i = 0; i < h; i++)
	{
		for (size_t j = 0; j < 8; j++)
		{
			cout << h << "|" << char(97 - i);
		}
		cout << "|" << h << endl;
	}
}