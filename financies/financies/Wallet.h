#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
#include "Expense.h"
#include "Card.h"
using namespace std;


class Wallet
{
public:
	Wallet() = default;

	Wallet(vector<Card> cards)
	{
		this->cards = cards;
	}

	void print_all();

	void remove_card();

	void add_card();

	void top_up_card();

	void pay();

	Expenses expenses_wallet;

protected:
	vector<Card> cards{};
};