#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
using namespace std;

struct Date
{
	Date() = default;

	Date(size_t day, size_t month, size_t year)
	{
		this->day = day;
		this->month = month;
		this->year = year;
	}

	void insert_date()
	{
		size_t tmp_day{};
		size_t tmp_month{};
		size_t tmp_year{};

		cout << "Enter date in that consequence (dd:mm:yy): " << endl;
		
		cout << "DD - ";
		cin >> tmp_day;

		cout << "MM - ";
		cin >> tmp_month;

		cout << "YY - ";
		cin >> tmp_year;

		this->day = tmp_day;
		this->month = tmp_month;
		this->year = tmp_year;
	} 

	size_t day{};
	size_t month{};
	size_t year{};
};
