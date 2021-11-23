#pragma once
#include <string>

enum Unit {
	Liters,
	Gramms,
	Count,
};

class Product
{
public:
	std::string name;
	float cost;
	Unit unit;

	Product()
		: name(""),
		cost(0),
		unit(Unit::Count)
	{}

	Product(const std::string& name, float cost, Unit unit)
		: name(name),
		cost(cost),
		unit(unit)
	{}
};

bool operator< (const Product& p1, const Product& p2);

