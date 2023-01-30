#include <iostream>
using namespace std;

void main()
{
#pragma region Task1
	int original_number = 0;
	int count = 1;
	int count_null = 0;
	int total = 0;
	
	cout << "Enter your number: ";
	cin >> original_number;
	
	int number = original_number;
	
	while (number /= 10)
	{
		count++;
		if ((number % 10) == 0)
		{
			++count_null;
		}
	}
	while (original_number > 0)
	{
		total += original_number % 10;
		original_number /= 10;
	}
	float mean_number = total / count;
	
	cout << "This is number of digits in number: " << count << endl << "This is number of nulls in number: " << count_null << endl << "This is total: " << total << endl << "This is mean: " << mean_number << endl;
#pragma endregion
#pragma region task2
	int height = 0;
	cin >> height;

	int unconst_height = height;

	for (size_t i = 0; i < height; i++)
	{
		cout << unconst_height << "|";
		for (size_t j = 0; j < 8; j++)
		{
			cout << unconst_height << char(97 + j) << "|";
		}
		cout << unconst_height << endl;
		unconst_height -= 1;
	}
#pragma endregion
}