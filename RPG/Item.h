#pragma once
#include <string>

class Item
{
private:
	std::string itemName_;
	int itemValue_;
	float weight_;

public:
	Item();
	Item(std::string itemName, int value, float weight);

	void SetItemName(std::string itemName);
	std::string GetItemName() const;

	void SetItemValue(int value);
	int GetItemValue() const;

	void SetItemWeight(float weight);
	float GetItemWeight() const;

	std::string ToString();
};

