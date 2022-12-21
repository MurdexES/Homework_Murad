#include <iostream>
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
#include "Card.h"
using namespace std;

uint8_t Card::gettr_CVV()
{
	return this->CVV;
}

void Card::print()
{
	cout << "---------------------------------" << endl
		<< "| Card Name: " << this->name << " |" << endl
		<< "| Card Class: " << this->card_class << " |" << endl
		<< "| Card Number: " << this->card_number << " |" << endl
		<< "| Card Expire Date: " << this->expire_time << " |" << endl
		<< "| Card Balance: " << this->balance << " |" << endl;

	if (this->card_type == 0)
	{
		cout << "| Card Type: Debit |" << endl;
	}

	else if (this->card_type == 1)
	{
		cout << "| Card Type: Credit |" << endl;
	}

	cout << "---------------------------------" << endl;
}

void Card::top_up()
{
	float amount{};
	uint16_t tmp_number{};

	this->print();

	cout << "Enter amount of money you want to top up to this card: " << endl
		<< "Amount: ";
	cin >> amount;

	cout << endl << "Enter card number of card from which you want to top up: " << endl;
	cin >> tmp_number;


	for (size_t i = 0; i < sizeof(cards); i++)
	{
		if (cards[i].card_number == tmp_number)
		{
			if (cards[i].balance >= amount)
			{
				cout << "Card : " << this->name << ". Toped up" << endl;
				this->balance += amount;
				cards[i].balance -= amount;
			}
			else
			{
				throw exception("Lack of money on Card!!!");
			}
		}

		else
		{
			throw exception("No avaible card with this number.");
		}
	}

	cout << "Card Balance: " << this->balance << endl;

}