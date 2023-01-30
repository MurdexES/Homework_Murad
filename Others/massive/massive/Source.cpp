#include <iostream>
#include <time.h>
using namespace std;


// Functions

int max_min(int arr[], const int len)
{
	int min = arr[0];
	int max = arr[len - 1];

	for (size_t i = 0; i < len; i++)
	{
		if (min >= arr[i])
		{
			min = arr[i];
		}

		if (max <= arr[i])
		{
			max = arr[i];
		}
	}

	return min, max;
}

int sum_with_max(int arr[], const int len, int number)
{
	int sum = 0;

	for (size_t i = 0; i < len; i++)
	{
		if (arr[i] < number)
		{
			sum += arr[i];
		}
	}

	return sum;
}

int max_min_range(int arr[], const int len, int number, int number2)
{
	int min = arr[number - 1];
	int max = arr[number2 - 1];

	for (size_t i = arr[number - 1]; i < arr[number2 - 1]; i++)
	{
		if (min >= arr[i])
		{
			min = arr[i];
		}

		if (max <= arr[i])
		{
			max = arr[i];
		}
	}

	return min, max;
}

//  Foooooo - Boooooo
void redirection(int arr[], int arr1[], const int leng, const int len)
{
	for (size_t i = 0; i < leng / 2; i++)
	{
		arr1[i] = arr[i];
	}
	
	/*for (size_t j = leng / 2; j < leng; j++)
	{
		arr2[j] = arr[j];
	}
	*/
	cout << endl;

	for (size_t i = 0; i < len; i++)
	{
		cout << arr1[i] << " ";
	}

	cout << endl;

	/*for (size_t i = 0; i < len; i++)
	{
		cout << arr2[i] << " ";
	}
	*/
}

int main()
{
	srand(time(0));

	const int length = 10;
	const int len = 5;
	int arr[length]{};

	int arr1[len]{};
	//int arr2[len]{};


	for (size_t i = 0; i < length; i++)
	{
		arr[i] = rand() % 50;
		cout << arr[i] << " ";
	}

	redirection(arr, arr1, length, len);

	/*max_min(arr, length);


	const int length2 = 5;
	int arr2[length2]{};

	int factor = 0;
	int max_possible = 0;

	cout << "Enter factor and max number: ";
	cin >> factor;
	cin >> max_possible;

	for (size_t i = 0; i < length2; i++)
	{
		arr2[i] = rand() % factor;
		cout << arr2[i] << " ";
	}

	sum_with_max(arr2, length2, max_possible);

	const int length3 = 12;
	int arr3[length3]{};

	for (size_t i = 0; i < length3; i++)
	{
		cout << "Enter money for month: ";
		cin >> arr3[i];
	}

	for (size_t i = 0; i < length3; i++)
	{
		cout << endl << arr3[i];
	}

	int start = 0;
	int end = 0;

	cout << "Enter start and end of range: ";
	cin >> start;
	cin >> end;

	max_min_range(arr3, length3, start, end);
	*/

	return 0;
}
