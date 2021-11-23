#include <string>
#include <vector>
#pragma once

#include "Product.h"

class Recipe
{
public:
	std::string name;
	std::string description;

	std::vector<std::pair<const std::string, float>> ingredients;

	Recipe()
		: name(""),
		description(""),
		ingredients()
	{}

	Recipe(std::string name, std::string description, std::initializer_list<std::pair<const std::string, float>> ingredients)
		: name(name),
		description(description),
		ingredients(ingredients)
	{}
};

