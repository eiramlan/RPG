#include "Armour.h"

Armour::Armour() {
}

Armour::Armour(std::string armourName, int value, float weight, int defence, int health, ArmourType armourType) :
	Item{ armourName, value, weight }, defence_{ defence }, armourHealth_{ health }, armourType_{ armourType } {

}

void Armour::SetArmourDefence(int defence) {
	defence_ = defence;
}

int Armour::GetArmourDefence() const {
	return defence_;
}

void Armour::SetArmourHealth(int health) {
	armourHealth_ = health;
}

int Armour::GetArmourHealth() const {
	return armourHealth_;
}

void Armour::SetArmourType(ArmourType armourType) {
	armourType_ = armourType;
}

ArmourType Armour::GetArmourType() const {
	return armourType_;
}

std::string Armour::ToString() {
	std::string tmpStr{ "" };
	std::string aType{ "" };

	switch (armourType_) {
	case ArmourType::Cardboard: aType = "Cardboard"; 
		break;
	case ArmourType::Leather: aType = "Leather";
		break;
	case ArmourType::Wood: aType = "Wood";
		break;
	case ArmourType::Iron: aType = "Iron";
		break;
	case ArmourType::Steel: aType = "Steel";
		break;
	}

	tmpStr.append("Armour: " + Item::ToString() + ", Defence: " + std::to_string(defence_) + ", Armour health: " + std::to_string(armourHealth_) + ", Armour Material: " + aType + "\n");
	return tmpStr;
}

