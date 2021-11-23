#pragma once
#include <map>
#include <string>

#include "Recipe.h"

class RecipeBook
{
public:
	std::vector<Recipe> recipes;

	void save();
	void load();
	void add(Recipe recipe);
};

