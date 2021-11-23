#include "RecipeBook.h"

#include <iostream>
#include <fstream>

void RecipeBook::add(Recipe recipe) {
	recipes.push_back(recipe);
}

void RecipeBook::save() {
	std::ofstream file;
	file.open("recipes.txt");

	for (const auto recipe : recipes) {
		file << "\"" << recipe.name << "\" \"" << recipe.description << "\" ";

		file << recipe.ingredients.size();

		for (const auto ingredient : recipe.ingredients) {
			file << " " << ingredient.first << " " << ingredient.second;
		}

		file << "\n";
	}

	file.close();
}

void RecipeBook::load() {
	std::ifstream file;
	file.open("recipes.txt");

	while (true) {
		file.get();

		Recipe r;

		std::getline(file, r.name, '"');

		if (file.eof())
			break;

		file.get();
		file.get();

		std::getline(file, r.description, '"');


		int count;
		file >> count;

		for (int i = 0; i < count; i++) {
			std::pair<std::string, float> ingredient;

			file >> ingredient.first >> ingredient.second;

			r.ingredients.push_back(ingredient);
		}

		recipes.push_back(r);

		file.get();
	}

	file.close();
}
