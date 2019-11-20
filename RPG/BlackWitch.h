#pragma once
#include "GameCharacter.h"
class BlackWitch :
	public GameCharacter
{
private:
	int magicProficiency_;
	int darkPower_;

public:
	BlackWitch();
	BlackWitch(std::string name, float health, float weightLimit, Weapon weapon, Armour armour, int food, CharacterState state, int magic, int power);
	
	void SetMagicProficiency(int magic);
	int GetMagicProficiency() const;

	void SetDarkPower(int power);
	int GetDarkPower() const;

	bool Attack(GameCharacter& character);
	void Bewitch(GameCharacter& character);
	void Sleep();
};

