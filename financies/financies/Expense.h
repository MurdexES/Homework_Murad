#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <fstream>
#include <nlohmann/json.hpp>
#include "MyDate.h"
#include "Wallet.h"
using namespace std;

enum expenses_category { Food, Clothes, Technic, Service, Activity, Transportation };


struct Expenses
{
public:

	struct Expense
	{
		Expense() = default;

		Expense(expenses_category expense_type, uint16_t expense_amount, Date* expense_date)
		{
			this->expense_type = expense_type;
			this->expense_amount = expense_amount;
			this->expense_date = expense_date;
		}

		void insert_expense()
		{
			int selec{};

			expenses_category tmp_expense_type{};
			uint16_t tmp_expense_amount{};
			Date* tmp_expense_date = new Date();

			cout << "\t---Expenses Category---" << endl
				<< "1 - Food" << endl
				<< "2 - Clothes" << endl
				<< "3 - Technic" << endl
				<< "4 - Service" << endl
				<< "5 - Activity" << endl
				<< "6 - Transportation" << endl
				<< "Enter you category: ";
			cin >> selec;

			switch (selec)
			{
			case 1:
				tmp_expense_type = Food;
				cout << "Food" << endl;
				break;
			case 2:
				tmp_expense_type = Clothes;
				cout << "Clothes" << endl;
				break;
			case 3:
				tmp_expense_type = Technic;
				cout << "Technic" << endl;
				break;
			case 4:
				tmp_expense_type = Service;
				cout << "Service" << endl;
				break;
			case 5:
				tmp_expense_type = Activity;
				cout << "Activity" << endl;
				break;
			case 6:
				tmp_expense_type = Transportation;
				cout << "Transportation" << endl;
				break;
			default:
				cout << "ERROR" << endl;
				break;
			}

			cout << "Enter amount of expense: ";
			cin >> tmp_expense_amount;

			cout << "\t----Expense Date----" << endl;

			tmp_expense_date->insert_date();

		}

		expenses_category expense_type{};
		uint16_t expense_amount{};
		Date* expense_date = new Date();
	};

	Expenses() = default;

	Expenses(vector<Expense> expenses_history)
	{
		this->expenses_history = expenses_history;
	}

	~Expenses()
	{
		delete[] & this->expenses_history;
	}

	void add_expense()
	{
		Expense tmp_expense{};

		cout << "\t----Expense Add----" << endl;

		tmp_expense.insert_expense();

		this->expenses_history.push_back(tmp_expense);
	}

	void average_expense()
	{
		int choice{};
		uint8_t avg_week_amount{};
		uint8_t avg_day_amount{};
		uint8_t avg_month_amount{};

		if (sizeof(expenses_history) <= 7)
		{
			for (size_t i = 0; i < sizeof(expenses_category); i++)
			{
				avg_week_amount += expenses_history[i].expense_amount;
			}

			avg_day_amount = avg_week_amount / sizeof(expenses_history);

			avg_month_amount = avg_week_amount;
		}

		else if ( 30 > sizeof(expenses_history) > 7)
		{
			for (size_t i = 0; i < sizeof(expenses_category); i++)
			{
				avg_month_amount += expenses_history[i].expense_amount;
			}

			avg_week_amount = avg_month_amount / (sizeof(expenses_history) / 7);

			avg_day_amount = avg_month_amount / sizeof(expenses_history);
		}

		else if (sizeof(expenses_history) >= 30)
		{
			uint8_t total_amount{};

			for (size_t i = 0; i < sizeof(expenses_category); i++)
			{
				total_amount += expenses_history[i].expense_amount;
			}

			avg_month_amount = total_amount / (sizeof(expenses_history) / 30);

			avg_week_amount = total_amount / (avg_month_amount / 7);

			avg_day_amount = total_amount / sizeof(expenses_history);
		}

		cout << "\t----Expenses Period----" << endl
			<< "1 - Show Average Day Expense" << endl
			<< "2 - Show Average Week Expense" << endl
			<< "3 - Show Average Month Expense" << endl
			<< "Enter your choice : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "Avg. Day Expense - " << avg_day_amount << endl;
			break;
		case 2:
			cout << "Avg. Week Expense - " << avg_week_amount << endl;
			break;
		case 3:
			cout << "Avg. Month Expense - " << avg_month_amount << endl;
			break;
		default:
			cout << "Errror" << endl;
			break;
		}
	}

	void expense_rating()
	{
		int choice{};
		Expense tmp_exp{};
		Date* month_date = new Date();
		Date* week_date = new Date();

		tmp_exp = expenses_history[0];

		int total1{};
		int total_month{};
		int total_week{};
		int total_tmp{};

		month_date = tmp_exp.expense_date;


		for (size_t i = 0; i < sizeof(expenses_history); i++)
		{
			total_tmp = total1;

			total1 = 0;

			if (tmp_exp.expense_date->month = expenses_history[i].expense_date->month)
			{
				total1 += expenses_history[i].expense_amount;

				if (expenses_history[i + 1].expense_date->month != tmp_exp.expense_date->month)
				{
					tmp_exp = expenses_history[i + 1];
					total_month = total1;

					if (total1 < total_tmp)
					{
						month_date = tmp_exp.expense_date;
					}
				}
			}

			if (total1 > total_month)
			{
				total_month = total1;
			}
		}

		week_date = month_date;
		total_week = total_month / 4;
		

		cout << "\t----Expense Rating----" << endl
			<< "1 - The Most Expensive Month" << endl
			<< "2 - The Most Expensive Week" << endl
			<< "Enter your choice : ";
		cin >> choice;

		switch (choice)
		{
		case 1:
			cout << "The Most Expensive Month: " << month_date->month << ":" << month_date->year << " and amount of total expenses this month - " << total_month << endl;
			break;
		case 2:
			cout << "The Most Expensive Week(in this month): " << week_date->month << ":" << week_date->year << " and amount of total expenses this week - " << total_week << endl;
			break;
		default:
			cout << "ERROR" << endl;
			break;
		}
	}

	void category_rating()
	{
		int total_Food{};
		int total_Clothes{};
		int total_Technic{};
		int total_Service{};
		int total_Activity{};
		int total_Transportation{};

		int* totals = new int[6]{};
		string* totals_names = new string[6]{};

		totals_names[0] = "Food";
		totals_names[1] = "Clothes";
		totals_names[2] = "Technic";
		totals_names[3] = "Service";
		totals_names[4] = "Activity";
		totals_names[5] = "Transportation";

		totals[0] = total_Food;
		totals[1] = total_Clothes;
		totals[2] = total_Technic;
		totals[3] = total_Service;
		totals[4] = total_Activity;
		totals[5] = total_Transportation;
		

		for (size_t i = 0; i < sizeof(expenses_history); i++)
		{
			if (expenses_history[i].expense_type == Food)
			{
				total_Food += expenses_history[i].expense_amount;
			}

			else if (expenses_history[i].expense_type == Clothes)
			{
				total_Clothes += expenses_history[i].expense_amount;
			}

			else if (expenses_history[i].expense_type == Technic)
			{
				total_Technic += expenses_history[i].expense_amount;
			}

			else if (expenses_history[i].expense_type == Service)
			{
				total_Service += expenses_history[i].expense_amount;
			}

			else if (expenses_history[i].expense_type == Activity)
			{
				total_Activity += expenses_history[i].expense_amount;
			}

			else if (expenses_history[i].expense_type == Transportation)
			{
				total_Transportation += expenses_history[i].expense_amount;
			}
		}

		int tmp{};
		int n{};

		n = sizeof(totals) / sizeof(totals[0]);

		for (size_t i = 0; i < n - 1; i++)
		{
			for (size_t j = 0; j < n - i - 1; j++)
			{
				if (totals[j] > totals[j + 1])
				{
					swap(totals[j], totals[j + 1]);
					swap(totals_names[j], totals_names[j + 1]);
				}
			}
		}

		cout << "\t----Top 3 Expenses Category----" << endl
			<< "1st - " << totals_names[5] << ". Amount: " << totals[5] << endl
			<< "2nd - " << totals_names[4] << ". Amount: " << totals[4] << endl
			<< "3rd - " << totals_names[3] << ". Amount: " << totals[3] << endl;

	}

	void save_json()
	{
		nlohmann::json obj_json;

		for (size_t i = 0; i < sizeof(expenses_history); i++)
		{
			obj_json["expenses"][i]["expense_type"] = expenses_history[i].expense_type;
			obj_json["expenses"][i]["expense_amount"] = expenses_history[i].expense_amount;
			obj_json["expenses"][i]["expense_date"][0]["date_day"] = expenses_history[i].expense_date->day;
			obj_json["expenses"][i]["expense_date"][1]["date_month"] = expenses_history[i].expense_date->month;
			obj_json["expenses"][i]["expense_date"][2]["date_year"] = expenses_history[i].expense_date->year;
		}
	}

	vector<Expense> expenses_history;
};

