#pragma once
#include <iostream>
#include <string>
#include <vector>
#include <nlohmann/json.hpp>
#include "Wallet.h"
using namespace std;

class Card : public Wallet
{
public:
	Card() = default;
	Card(string name, string card_class, uint16_t card_number, uint8_t CVV, string expire_date, bool card_type, float balance)
	{
		this->name = name;
		this->card_class = card_class;
		this->card_number = card_number;
		this->CVV = CVV;
		this->expire_time = expire_date;
		this->card_type = card_type;
		this->balance = balance;
	}

	uint8_t gettr_CVV();

	void print();

	void top_up();

	string name{};
	float balance{};
	string card_class{};

protected:
	uint16_t card_number{};
	uint8_t CVV{};
	string expire_time{};
	bool card_type{};
};
