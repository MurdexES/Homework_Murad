#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
#include "MyDate.h"
#include "Expense.h"
#include "Wallet.h"

class Master
{
public:
	Master() = default;

	Master(Wallet* main_wallet)
	{
		this->main_wallet = main_wallet;
	}

	void wallet_menu()
	{
		uint8_t choice{};
		bool key{true};

		do 
		{
			system("cls");

			cout << "\t----Wallet Menu----" << endl;

			cout << "1 - Show All Cards" << endl
				<< "2 - Add New Card" << endl
				<< "3 - Remove Card" << endl
				<< "4 - Top Up Card" << endl
				<< "5 - Pay With Card" << endl
				<< "Enter your choice : ";
			cin >> choice;

			switch (choice)
			{
			case 1:
				system("cls");

				this->main_wallet->print_all();

				cout << "Do you want to return to the previous menu (if yes - 1, if not 0) ?" << endl;
				cin >> key;

				break;
			case 2:
				system("cls");

				this->main_wallet->add_card();

				cout << "Do you want to return to the previous menu (if yes - 1, if not 0) ?" << endl;
				cin >> key;

				break;
			case 3:
				system("cls");

				this->main_wallet->remove_card();

				cout << "Do you want to return to the previous menu (if yes - 1, if not 0) ?" << endl;
				cin >> key;

				break;
			case 4:
				system("cls");

				this->main_wallet->top_up_card();

				cout << "Do you want to return to the previous menu (if yes - 1, if not 0) ?" << endl;
				cin >> key;

				break;
			case 5:
				system("cls");

				this->main_wallet->pay();

				cout << "Do you want to return to the previous menu (if yes - 1, if not 0) ?" << endl;
				cin >> key;

				break;
			default:
				break;
			}
		} while (key);

		cout << "Do you want to return to the main menu (if yes - 1, if not - 0) ?" << endl;
		cin >> key;

		if (key)
		{
			this->main_menu();
		}
		else
		{
			return;
		}
	}

	void expenses_main()
	{
		uint8_t choice{};
		bool key{ true };

		do
		{
			system("cls");

			cout << "\t----Expenses Menu----" << endl;

			cout << "1 - Add Expense" << endl
				<< "2 - Show Average Expense" << endl
				<< "3 - Expense Rating" << endl
				<< "4 - Category Rating" << endl
				<< "5 - Save in File" << endl
				<< "Enter your choice : ";
			cin >> choice;

			switch (choice)
			{
			case 1:
				system("cls");

				this->main_wallet->expenses_wallet.add_expense();

				cout << "Do you want to return to the previous menu (if yes - 1, if not 0) ?" << endl;
				cin >> key;

				break;
			case 2:
				system("cls");

				this->main_wallet->expenses_wallet.average_expense();

				cout << "Do you want to return to the previous menu (if yes - 1, if not 0) ?" << endl;
				cin >> key;

				break;
			case 3:
				system("cls");

				this->main_wallet->expenses_wallet.expense_rating();

				cout << "Do you want to return to the previous menu (if yes - 1, if not 0) ?" << endl;
				cin >> key;

				break;
			case 4:
				system("cls");

				this->main_wallet->expenses_wallet.category_rating();

				cout << "Do you want to return to the previous menu (if yes - 1, if not 0) ?" << endl;
				cin >> key;

				break;
			case 5:
				system("cls");

				this->main_wallet->expenses_wallet;

				cout << "Do you want to return to the previous menu (if yes - 1, if not 0) ?" << endl;
				cin >> key;

				break;
			default:
				break;
			}
		} while (key);

		cout << "Do you want to return to the main menu (if yes - 1, if not - 0) ?" << endl;
		cin >> key;

		if (key)
		{
			this->main_menu();
		}
		else
		{
			return;
		}
	}

	void main_menu()
	{
		uint8_t choice{};

		cout << "\t----Menu----" << endl
			<< "1 - Wallet" << endl
			<< "2 - Expenses" << endl
			<< "3 - Exit" << endl
			<< "Enter your choice: ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			this->wallet_menu();
			break;
		case 2:
			this->expenses_main();
			break;
		case 3:
			return ;
		default:
			cout << "ERROR";
			break;
		}
	}
private:
	Wallet* main_wallet = new Wallet();

};
