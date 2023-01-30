//#include <iostream>
//#include <time.h>
//using namespace std;
//
//// Functions 
//void jimmy_arbic_sort(int arr[], const int len, bool check)
//{	
//	int temp;
//
//	if (check == 1)
//	{
//		for (size_t i = 0; i < len; i++)
//		{
//			for (size_t j = i + 1; j < len; j++)
//			{
//				if (arr[j] > arr[i])
//				{
//					temp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = temp;
//				}
//			}
//		}
//	}
//	
//	else if (check == 0)
//	{
//		for (size_t i = 0; i < len; i++)
//		{
//			for (size_t j = i + 1; j < len; j++)
//			{
//				if (arr[j] < arr[i])
//				{
//					temp = arr[i];
//					arr[i] = arr[j];
//					arr[j] = temp;
//				}
//			}
//		}
//	}
//
//	for (size_t i = 0; i < len; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void insertion_sort(int arr[], const int len)
//{
//	int temp;
//	int j;
//
//	for (size_t i = 0; i < len / 2; i++)
//	{
//		temp = arr[i];
//		j = i - 1;
//
//		while (j >= 0 && arr[j] > temp)
//		{
//			arr[j + 1] = arr[j];
//			j = j - 1;
//		}
//		arr[j + 1] = temp;
//	}
//
//	for (size_t i = len / 2; i < len; i++)
//	{
//		temp = arr[i];
//		j = i - 1;
//
//		while (j <= 0 && arr[j] < temp)
//		{
//			arr[j + 1] = arr[j];
//			j = j - 1;
//		}
//		arr[j + 1] = temp;
//	}
//
//	for (size_t i = 0; i < len; i++)
//	{
//		cout << arr[i] << endl;
//	}
//}
//
//void strange_sort(int arr[], const int len, int left, int right)
//{
//	int temp;
//
//	for (size_t i = left; i < right; i++)
//	{
//		for (size_t j = i + 1; j < right; j++)
//		{
//			if (arr[j] < arr[i])
//			{
//				temp = arr[i];
//				arr[i] = arr[j];
//				arr[j] = temp;
//			}
//		}
//	}
//
//}
//
//// Main
//
//int main()
//{
//	srand(time(0));
//
//	const int length = 10;
//	int arr[10]{};
//
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = rand() % 50;
//		cout << arr[i] << endl;
//	}
//
//	cout << endl;
//
//	jimmy_arbic_sort(arr, length, 1);
//
//	cout << endl;
//
//	insertion_sort(arr, length);
//
//	cout << endl;
//
//	const int length2 = 10;
//	int arr2[10]{};
//
//	for (size_t i = 0; i < length; i++)
//	{
//		arr[i] = rand() % 40 - 20;
//		cout << arr[i] << endl;
//	}
//
//	int left = 0;
//	int right = 0;
//
//	for (size_t i = 0; i < length2; i++)
//	{
//		if (arr[i] < 0)
//		{
//			left = i;
//			break;
//		}
//	}
//
//	for (size_t i = 0; i < length2; i++)
//	{
//		if (arr[i] < 0)
//		{
//			right = i;
//		}
//	}
//
//	cout << endl;
//
//	strange_sort(arr2, length2, left, right);
//
//	return 0;
//}