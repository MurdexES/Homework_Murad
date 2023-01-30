#include <iostream>
#include <time.h>
using namespace std;

//Functions

void max_min(int arr[], const int len)
{
	int max = arr[len - 1];
	int min = arr[0];

	for (size_t i = 0; i < len; i++)
	{
		if (max <= arr[i])
		{
			max = arr[i];
		}
		if (min >= arr[i])
		{
			min = arr[i];
		}
	}

	cout << max << endl << min;
}

void arr_reversed(int arr[], const int len)
{	
	int temp = 0;
	int i = 0;
	int j = len - 1;

	while (i < j)
	{
		temp = arr[i];
		arr[i] = arr[j];
		arr[j] = temp;

		i++;
		j--;
	}

	for (size_t i = 0; i < len; i++)
	{
		cout << arr[i] << endl;
	}
}

int prime(int arr[], const int len)
{	
	int temp = 0;
	int count = 0;

	for (size_t i = 0; i < len; i++)
	{
		temp = arr[i] / 2;
		for (size_t j = 2; j <= temp; j++)
		{
			if (arr[i] % j != 0)
			{
				count++;
			}
		}
	}

	return count;
}

int main()
{
	srand(time(0));

	const int length = 10;
	int arr[10]{};

	for (size_t i = 0; i < length; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << endl;
	}

	cout << endl;
	//max_min(arr, length);
	cout << endl;
	//arr_reversed(arr, length);
	cout << endl;
	prime(arr, length);

	return 0;
}