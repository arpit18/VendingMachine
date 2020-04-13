#include <string>

#pragma once

class Product {
	std::string name;
	int price;

	public : 
		Product(std::string name_, int price_) : name(name_), price(price_) {}

		std::string getName()
		{
			return name;
		}

		int getPrice()
		{
			return price;
		}
};
