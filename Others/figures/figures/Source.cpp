//#include <iostream>
//using namespace std;
//
//void main()
//{
//	int option = 0;
//	int length = 0;
//
//	cout << "Enter number of figure you want to be drawn and length: ";
//	cin >> option;
//	cin >> length;
//
//	int cycles = length;
//	int cycles2 = length;
//
//	if (option == 1)
//	{
//		for (int i = length; i > 0; i--)
//		{
//			for (int k = length - i; k > 0; k--)
//			{
//				cout << " ";
//			}
//			for (int j = 0; j < cycles; ++j)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			--cycles;
//		}
//	}
//
//
//	cycles = 1;
//	if (option == 2)
//	{
//		for (int i = 0; i < length; ++i)
//		{
//			for (int j = 0; j < cycles; ++j)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			++cycles;
//		}
//	}
//
//
//	cycles = length / 2 + 1;
//	if (option == 3)
//	{
//
//		for (int i = length / 2 + 1; i >= 1; i--)
//		{
//			for (int j = length; j > i; j--)
//			{
//				cout << " ";
//			}
//			for (int n = 1; n < cycles * 2; n++)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			--cycles;
//		}
//
//		for (int i = 0; i < cycles / 2; i++)
//		{
//			cout << endl;
//		}
//	}
//
//
//	if (option == 4)
//	{
//
//		for (int i = 0; i < cycles / 2; i++)
//		{
//			cout  << endl;
//		}
//
//		for (int i = 0; i < cycles / 2 + 1; i++)
//		{
//			for (int j = length - i; j > 0; j--)
//			{
//				cout << " ";
//			}
//			for (int n = 0; n < 2 * i + 1; n++)
//			{
//				cout << "*";
//			}
//			cout << endl;
//		}
//	}
//
//
//	cycles = length / 2 + 1;
//	if (option == 5)
//	{
//
//		for (int i = length / 2 + 1; i >= 1; i--)
//		{
//			cout << " ";
//			for (int j = length; j > i; j--)
//			{
//				cout << " ";
//			}
//			for (int n = 1; n < cycles * 2; n++)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			--cycles;
//		}
//
//		for (int i = 0; i < length / 2 + 1; i++)
//		{
//			for (int j = length - i; j > 0; j--)
//			{
//				cout << " ";
//			}
//			for (int n = 0; n < 2 * i + 1; n++)
//			{
//				cout << "*";
//			}
//			cout << endl;
//		}
//	}
//
//
//	if (option == 6)
//	{
//		cycles = 1;
//		for (int i = 0, b = 1; i < length, b <= length; ++i, b++)
//		{
//			for (int j = 0; j < cycles; ++j)
//			{
//				cout << "*";
//			}
//			for (int k = length - b; k > 0; k--)
//			{
//				cout << " ";
//			}
//			for (int p = 0; p < cycles; ++p)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			++cycles;
//		}
//
//
//		cycles = length / 2 + 1;
//		cycles2 = length;
//		for (int i = 0, b = length; i < length - 1, b > 0; ++i, b--)
//		{
//			for (int j = 0; j < cycles; ++j)
//			{
//				cout << "*";
//			}
//			for (int k = length - b; k > 0; k--)
//			{
//				cout << " ";
//			}
//			for (int p = 0; p < cycles2; ++p)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			--cycles;
//		}
//
//	}
//
//
//	if (option == 7)
//	{
//
//		cycles = 1;
//		for (int i = 0; i < length / 2 + 1; ++i)
//		{
//			for (int j = 0; j < cycles; ++j)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			++cycles;
//		}
//
//		cycles = length / 2 + 1;
//		for (int i = 0; i < length - 1; ++i)
//		{
//			for (int j = 0; j < cycles; ++j)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			--cycles;
//		}
//	}
//
//
//	if (option == 8)
//	{
//
//		cycles = 1;
//		for (int i = 1; i <= length / 2 + 1; i++)
//		{
//			for (int k = length - i; k > 0; k--)
//			{
//				cout << " ";
//			}
//			for (int j = 0; j < cycles; ++j)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			++cycles;
//		}
//
//		cycles = length;
//		for (int i = length; i > 0; i--)
//		{
//			for (int k = length - i; k > 0; k--)
//			{
//				cout << " ";
//			}
//			for (int j = 0; j < cycles; ++j)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			--cycles;
//		}
//	}
//
//
//	if (option == 9)
//	{
//		for (int i = 0; i < length - 1; ++i)
//		{
//			for (int j = 0; j < cycles; ++j)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			--cycles;
//		}
//	}
//
//
//	cycles = 1;
//	if (option == 10)
//	{
//		for (int i = 1; i <= length; i++)
//		{
//			for (int k = length - i; k > 0; k--)
//			{
//				cout << " ";
//			}
//			for (int j = 0; j < cycles; ++j)
//			{
//				cout << "*";
//			}
//			cout << endl;
//			++cycles;
//		}
//	}
//}

#include <iostream>
using namespace std;
// foo

bool prime(int number)
{
	if (number <= 1)
		return 0;

	for (int i = 2; i < number; i++)
		if (number % i == 0)
			return 0;

	return 1;
}

void bubbleSort(char arr[], int len)
{
	int temp = 0;

	for (size_t i = 0; i < len - 1; i++)
	{
		for (size_t j = 0; j < len - i - 2; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;
			}
		}
	}
}

void arr_prime(int arr[], const int len)
{
	for (size_t i = 0; i < len; i++)
	{
		if (prime(arr[i]) == 0)
		{
			arr[i] = 27;
		}
	}

	for (size_t i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
}

int chartoint(char arr[], const int len)
{
	int temp = 48;
	int num_res = 0;
	int multy = 10;

	for (size_t i = 0; i < len - 1; i++)
	{
		num_res += arr[i] - temp;
		num_res *= multy;
	}

	num_res /= 10;

	return num_res;
}

void IntToChar(int number, int len, char arr[])
{
	int temp = 48;
	int multy = 10;

	for (size_t i = 0; i < len - 1; i++)
	{
		int factor = number % 10;
		arr[i] = factor + temp;
		number /= 10;
	}

	bubbleSort(arr, len);

	for (size_t i = 0; i < len - 1; i++)
	{
		cout << arr[i];
	}

}

int main()
{
	/*const int len = 5;
	int arr[len]{};

	for (size_t i = 0; i < len; i++)
	{
		cout << "Enter element: ";
		cin >> arr[i];
		cout << "\n";
	}

	arr_prime(arr, len);

	char arr1[] = { "12345" };

	int len_char = sizeof(arr1);

	cout << "\n\n" << CharToInt(arr1, len_char);*/

	int original = 123;
	int len_number = sizeof(original);
	char arr2[100]{};

	IntToChar(original, len_number, arr2);

	return 0;
}