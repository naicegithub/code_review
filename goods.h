#ifndef GOODS_H_
#define GOODS_H_

namespace project1 {
// Goods class for representing goods information with index and price
// Example:
//    Goods test;
//    test.SetGoodsInfo(1, 10000);
//    std::cout << test.GetIndex() << " - " << test.GetPrice << endl;
class Goods {
public:
	void SetGoodsInfo(int index, int price);
	void SetIndex(int index);
	void SetPrice(int price);
	int GetIndex() const;
	int GetPrice() const;

private:
	int goods_index_ = 0;
	int goods_price_ = 0;
};
} //namespace project1
#endif  // GOODS_H_
