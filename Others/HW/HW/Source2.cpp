#include <iostream>
using namespace std;

void Main()
{
#pragma region Task1
	//int num_to_guess = 0;
	//int n = 0;
	//int number = 0;
	//int try_count = 0;
	//bool leave = 0;

	//cout << "Guess number\n";

	//for (size_t i = 0; i <= 500; i++)
	//{
	//	n++;
	//	num_to_guess = i;
	//	if (n > 0)
	//	{
	//		break;
	//	}
	//}

	//cin >> number;

	//while (number != num_to_guess)
	//{
	//	cout << "Try again: ";
	//	cin >> number;
	//	try_count++;
	//	if (try_count % 5 == 0)
	//	{
	//		cout << "Do you want to leave 1 or 0: ";
	//		cin >> leave;

	//		if (leave)
	//		{
	//			cout << "Good bye";
	//			break;
	//		}
	//	}
	//}
	//if (number == num_to_guess)
	//{
	//	cout << "Correct";
	//}

#pragma endregion
#pragma region Task2
	int option = 0;
	float amount = 0;

	float usd = 1.69;
	float euro = 1.79;
	float ils = 0.49;
	float rub = 0.03;

	cout << "\t Welcome\n Choose one of the currency to exchange to manat: \n 1.USD\n 2.EURO\n 3.ILS\n 4.RUB\n Enter number: ";
	cin >> option;
	cout << endl << "Enter amount of money: ";
	cin >> amount;

	if (option == 1)
	{
		amount*= usd;
		cout << "Your money: " << amount;
	}
	else
	{
		if (option == 2)
		{
			amount *= euro;
			cout << "Your money: " << amount;
		}
		else
		{
			if (option == 3)
			{
				amount *= ils;
				cout << "Your money: " << amount;
			}
			else
			{
				if (option == 4)
				{
					amount *= rub;
					cout << "Your money: " << amount;
				}
			}
		}
	}
#pragma endregion
}