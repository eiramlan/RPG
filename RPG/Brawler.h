#pragma once
#include "GameCharacter.h"
class Brawler :
	public GameCharacter
{
private:
	int punchDamage_;
	int strength_;

public:
	Brawler();
	Brawler(std::string name, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state, int punchDamage, int strength);

	void SetPunchDamage(int damage);
	int GetPunchDamage() const;

	void SetStrength(int strength);
	int GetStrength() const;

	bool Attack(GameCharacter& character);
	bool Brawl(GameCharacter& character);
	void Sleep();
};

