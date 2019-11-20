#pragma once
#include "GameCharacter.h"
class Cleric :
	public GameCharacter
{
private:
	int pietyLevel_;

public:
	Cleric();
	Cleric(std::string name, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state, int level);

	void SetPietyLevel(int level);
	int GetPietyLevel() const;

	bool Attack(GameCharacter& character);
	void PrayFor(GameCharacter& character);
	void Sleep();
};

