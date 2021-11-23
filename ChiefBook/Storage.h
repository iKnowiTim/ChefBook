#pragma once

#include <map>

#include "Product.h"

class Storage
{
public:
	std::map<std::string, Product> products;
	std::map<std::string, float> quantities;

	void save();

	void load();

	void add(Product product, float quantity);
};

