#include "Item.h"

// Default constructor
Item::Item() {

}

Item::Item(std::string itemName, int value, float weight) :
	itemName_{ itemName }, itemValue_{ value }, weight_{ weight } {
}

void Item::SetItemName(std::string itemName) {
	itemName_ = itemName;
}

std::string Item::GetItemName() const {
	return itemName_;
}

void Item::SetItemValue(int value) {
	itemValue_ = value;
}

int Item::GetItemValue() const {
	return itemValue_;
}

void Item::SetItemWeight(float weight) {
	weight_ = weight;
}

float Item::GetItemWeight() const {
	return weight_;
}

std::string Item::ToString() {
	std::string tmpStr{ "" };
	tmpStr.append(itemName_ + ", Worth " + std::to_string(itemValue_) + " Gold coins");
	return tmpStr;
}
