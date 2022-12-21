#include <iostream>
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
#include "Wallet.h"
using namespace std;

void Wallet::print_all()
{
	cout << "\t----All Cards in Wallet----" << endl;

	for (Card i : cards)
	{
		cout << endl << endl;
		i.print();
	}
}

void Wallet::remove_card()
{
	string tmp_name;

	cout << "Enter Name of card you want to remove: ";
	getline(cin, tmp_name);

	for (size_t i = 0; i < sizeof(cards); i++)
	{
		if (cards[i].name == tmp_name)
		{
			cards.erase(cards.begin() + i);

			cout << "You removed this card: " << endl;

			cards[i].print();

			return;
		}
	}
}

void Wallet::add_card()
{
	string tmp_name;
	string tmp_card_class;
	uint16_t tmp_card_number{};
	uint8_t tmp_CVV{};
	string tmp_expire_time{};
	bool tmp_card_type{};
	float tmp_balance{};

	cout << "---------------------------------" << endl
		<< "| Card Name: ";
	getline(cin, tmp_name);

	cout << "| Card Class: ";
	getline(cin, tmp_card_class);

	cout << "| Card Number: ";
	cin >> tmp_card_number;

	cout << "| Card CVV: ";
	cin >> tmp_CVV;

	cout << "| Card Expire Date: ";
	getline(cin, tmp_expire_time);

	cout << "| Card Type (1 - if credit, 0 - if debit): ";
	cin >> tmp_card_type;

	cout << "| Card Balance: ";
	cin >> tmp_balance;

	cout << "---------------------------------" << endl;

	Card* tmp_card = new Card(tmp_name, tmp_card_class, tmp_card_number, tmp_CVV, tmp_expire_time, tmp_card_type, tmp_balance);

	cards.push_back(*tmp_card);
}

void Wallet::top_up_card()
{
	string tmp_name{};
	bool key{ true };

	cout << "\t----Card Top Up----" << endl;

	this->print_all();

	do
	{
		cout << "Enter name of card you want to top up: ";
		getline(cin, tmp_name);

		for (size_t i = 0; i < sizeof(cards); i++)
		{
			if (cards[i].name == tmp_name)
			{
				key = false;
				cards[i].top_up();
			}
		}

		if (key == true)
		{
			cout << "No valid card with this name!!!" << endl;
		}

	} while (key);
}

void Wallet::pay()
{
	string tmp_card_name{};
	int amount{};
	uint8_t tmp_CVV{};
	size_t tmp_i{};

	bool key{ true };

	do
	{
		cout << "Enter name of card you want to use for payment: ";
		getline(cin, tmp_card_name);

		for (size_t i = 0; i < sizeof(cards); i++)
		{
			if (cards[i].name == tmp_card_name)
			{
				key = false;
				tmp_i = i;
			}
		}

		if (key == true)
		{
			cout << "No valid card with this name!!!" << endl;
		}

	} while (key);

	cout << "Enter amount of money you have to pay: ";
	cin >> amount;

	key = true;

	do
	{
		cout << "Enter Card CVV for confirmation: ";
		cin >> tmp_CVV;

		if (tmp_CVV == cards[tmp_i].gettr_CVV())
		{
			cout << "Payment confirmed" << endl;
			key = false;
			cards[tmp_i].balance -= amount;
		}

		if (key == true)
		{
			cout << "No valid card with this name!!!" << endl;
		}
	} while (key);

	expenses_wallet.add_expense();
}