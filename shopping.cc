#include <iostream>
#include <assert.h>
#include "./shopping.h"

namespace project1 {
// Push Goods object to shopping_list_ vector
void Shopping::PushList(Goods object) {
	shopping_list_.push_back(object);
}

// Get Goods object from end of shopping_list_ vector
// It should not be called if there is no shopping item.
Goods Shopping::GetLastElement() {
	assert(shopping_list_.empty());
	return shopping_list_.back();
}

// Print shopping_list_ Elements
void Shopping::PrintList() {
	for (std::vector<Goods>::iterator i = shopping_list_.begin();
		i != shopping_list_.end(); i++) {
		std::cout << "Goods #" << i->GetIndex() << " - Price : " <<
			i->GetPrice() << std::endl;
	}
}

// Sort shopping_list_ Elements by Price
// Apply Selection Sort algorithm
void Shopping::SortByPrice() {
	std::vector<Goods>::iterator min = shopping_list_.end();
	for (std::vector<Goods>::iterator i = shopping_list_.begin();
		i != shopping_list_.end() - 1; i++) {
		for (std::vector<Goods>::iterator j = i; j != shopping_list_.end(); j++) {
			if (min == shopping_list_.end()) {
				min = j;
				continue;
			}
			if (min->GetPrice() > j->GetPrice()) {
				min = j;
			}
		}
		std::iter_swap(i, min);
		min = shopping_list_.end();
	}
}

// Sort shopping_list_ Elements by Index
// Apply Selection Sort algorithm
void Shopping::SortByIndex() {
	std::vector<Goods>::iterator min = shopping_list_.end();
	for (std::vector<Goods>::iterator i = shopping_list_.begin();
		i != shopping_list_.end() - 1; i++) {
		for (std::vector<Goods>::iterator j = i; j != shopping_list_.end(); j++) {
			if (min == shopping_list_.end()) {
				min = j;
				continue;
			}
			if (min->GetIndex() > j->GetIndex()) {
				min = j;
			}
		}
		std::iter_swap(i, min);
		min = shopping_list_.end();
	}
}
} //namespace project1