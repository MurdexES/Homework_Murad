#include <iostream>
using namespace std;

int main()
{
#pragma region Task1
	//int width = 0;
	//int height = 0;
	//
	//cout << "Enter width and height: ";
	//cin >> width;
	//cin >> height;

	//for (size_t i = 0; i <= height; i++)
	//{
	//	for (size_t j = 0; j <= width; j++)
	//	{
	//		cout << "*";
	//	}
	//	cout << endl;
	//}
#pragma endregion
#pragma region Task1
	
	int length = 0;
	int h = 0;

	cout << "Enter lenght and height: ";
	cin >> length;
	cin >> h;

	for (size_t i = 0; i < 1; i++)
	{
		for (size_t j = 0; j <= length; j++)
		{
			cout << "*";
		}
		cout << endl;

		
		for (size_t p = 0; p <= h - 2; p++)
		{
			cout << "*";
			for (size_t d = 0; d <= length - 2; d++)
			{
				cout << " ";
			}
				cout << "*";
				cout << endl;
		}
		for (size_t j = 0; j <= length; j++)
		{
			cout << "*";
		}
		cout << endl;
	}
#pragma endregion
}
