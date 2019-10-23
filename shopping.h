#ifndef SHOPPING_H_
#define SHOPPING_H_

#include <vector>
#include "./goods.h"

namespace project1 {
// Shopping class presents List of shopping.
// Example:
//     Shopping tobuylist;
//     Goods obj1;
//     Goods obj2;
//     ...
//     tobuylist.PushList(obj1);
//     tobuylist.PushList(obj2);
//     tobuylist.PrintList();
class Shopping {
public:
	void PushList(Goods object);
	Goods GetLastElement();
	void PrintList();
	void SortByPrice();
	void SortByIndex();

private:
	std::vector<Goods> shopping_list_;
};
} // namespace project1
#endif  // SHOPPING_H_
