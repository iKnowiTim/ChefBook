#include "Product.h"

bool operator< (const Product& p1, const Product& p2) {
	return p1.name < p2.name;
}
