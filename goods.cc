#include "./goods.h"

namespace project1 {
// Set member variable of goods with given index and price values
void Goods::SetGoodsInfo(int index, int price) {
	SetIndex(index);
	SetPrice(price);
}

void Goods::SetIndex(int index) {
	goods_index_ = index;
}

void Goods::SetPrice(int price) {
	goods_price_ = price;
}
// Return index information
int Goods::GetIndex() const {
	return goods_index_;
}

// Return price informaiton
int Goods::GetPrice() const {
	return goods_price_;
}
} //namespace project1