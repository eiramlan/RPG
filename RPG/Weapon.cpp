#include "Weapon.h"

Weapon::Weapon() {
	this->SetItemName("Bare hands");
	this->SetItemValue(0);
	this->SetItemWeight(0);
	this->SetWeaponHealth(100);
	weaponHealth_ = 100;
	weaponHitStrength_ = 1;
}

Weapon::Weapon(std::string itemName, int value, float weight, int hitStrength, int health) :
	Item{ itemName, value, weight }, weaponHitStrength_{ hitStrength }, weaponHealth_{ health } {

}

void Weapon::SetWeaponHitStrength(int hitStrength) {
	weaponHitStrength_ = hitStrength;
}

int Weapon::GetWeaponHitStrength() const {
	return weaponHitStrength_;
}

void Weapon::SetWeaponHealth(int health) {
	weaponHealth_ = health;
}

int Weapon::GetWeaponHealth() const {
	return weaponHealth_;
}

std::string Weapon::ToString() {
	std::string tmpStr{ "" };
	tmpStr.append("Weapon: " + Item::ToString() + ", Hit Strength: " + std::to_string(weaponHitStrength_) + ", Weapon Health: " + std::to_string(weaponHealth_) + "\n");
	return tmpStr;
}
