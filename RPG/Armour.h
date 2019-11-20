#pragma once
#include "Item.h"

enum class ArmourType { Cardboard, Leather, Wood, Iron, Steel };

class Armour :
	public Item
{
private:
	int defence_;
	int armourHealth_;
	ArmourType armourType_;

public:
	Armour();
	Armour(std::string armourName, int value, float weight, int defence, int health, ArmourType armourType);

	void SetArmourDefence(int defence);
	int GetArmourDefence() const;

	void SetArmourHealth(int health);
	int GetArmourHealth() const;

	void SetArmourType(ArmourType armourType);
	ArmourType GetArmourType() const;

	std::string ToString();
};

