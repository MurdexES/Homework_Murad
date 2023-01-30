//#include <iostream>
//using namespace std;
//
//void Main()
//{
//#pragma region Task1
//	int a = 0;
//
//	cout << "Enter number a whick will be the start of range: ";
//	cin >> a;
//
//	for (size_t i = a; i < 500; i++)
//	{
//		cout << i << endl;
//	}
//#pragma endregion
//#pragma region Task2
//	int x = 0;
//	int y = 0;
//
//	cout << "Enter x and y numbers: ";
//	cin >> x;
//	cin >> y;
//
//	for (size_t i = 0; i <= y; i++)
//	{
//		x *= x;
//	}
//#pragma endregion
//#pragma region Task3
//	int total = 0;
//
//	for (size_t i = 0; i <= 1000; ++i)
//	{
//		total += i;
//	}
//
//	double mean = total / 1000;
//
//	cout << mean;
//#pragma endregion
//#pragma region Task4
//	int number = 0;
//	int product = 0;
//
//	cout << "Enter a number: ";
//	cin >> number;
//
//	for (size_t i = 0; i <= 20; i++)
//	{
//		product *= i;
//	}
//
//	cout << product;
//#pragma endregion
//#pragma region Task5
//	int k = 0;
//
//	cout << "Enter number: ";
//	cin >> k;
//
//	if (1 <= k <= 9)
//	{
//		for (size_t i = 1; i <= 9; i++)
//		{
//			cout << k << " x " << i << " = " << k * i;
//		}
//	}
//#pragma endregion
//}