#include "Storage.h"

#include <utility>
#include <iostream>
#include <fstream>

void Storage::save() {
	std::ofstream file;
	file.open("storage.txt");

	for (const auto&[name, product] : products) {
		file << product.name << " " << product.cost << " " << product.unit << " " << quantities[name] << "\n";
	}

	file.close();
}

void Storage::load() {
	std::ifstream file;
	file.open("storage.txt");

	while (true) {
		Product product;
		float quantity;

		file >> product.name >> product.cost >> (int&)product.unit >> quantity;

		if (file.eof()) {
			break;
		}

		products[product.name] = product;
		quantities[product.name] = quantity;
	}

	file.close();
}

void Storage::add(Product product, float quantity) {
	products[product.name] = product;
	quantities[product.name] = quantity;
}
