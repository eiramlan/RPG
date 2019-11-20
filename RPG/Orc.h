#pragma once
#include "GameCharacter.h"
class Orc :
	public GameCharacter
{
private:
	int ferociousness_;
	int strength_;

public:
	Orc();
	Orc(std::string name, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state, int ferocious, int strength);

	void SetFerociousness(int ferocious);
	int GetFerociousness() const;

	void SetStrength(int strength);
	int GetStrength() const;

	bool Attack(GameCharacter& character);
	void Scream(GameCharacter& character);
	void Sleep();
};

