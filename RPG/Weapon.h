#pragma once
#include "Item.h"
class Weapon :
	public Item
{
private:
	int weaponHitStrength_;
	int weaponHealth_;

public:
	Weapon();
	Weapon(std::string itemName, int value, float weight, int hitStrength, int health);

	void SetWeaponHitStrength(int hitStrength);
	int GetWeaponHitStrength() const;

	void SetWeaponHealth(int health);
	int GetWeaponHealth() const;

	std::string ToString();
};

