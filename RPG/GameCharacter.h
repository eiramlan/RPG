#pragma once
#include <iostream>
#include "Armour.h"
#include "Weapon.h"

enum class CharacterState { Idle, Running, Sleeping, Walking, Defending, Attacking, Dead };

class GameCharacter
{
private:
	std::string characterName_;
	float health_;
	float weightLimit_;
	Weapon weapon_;
	Armour armour_;
	int food_;
	CharacterState state_;

public:
	GameCharacter();
	GameCharacter(std::string name, float health, float weight, Weapon weapon, Armour armour, int food, CharacterState state);

	void SetCharacterName(std::string name);
	std::string GetCharacterName() const;

	void SetCharacterHealth(float health);
	float GetCharacterHealth() const;

	void SetCharacterWeightLimit(float weightLimit);
	float GetCharacterWeightLimit() const;

	void SetCharacterWeapon(Weapon weapon);
	Weapon GetCharacterWeapon() const;

	void SetCharacterArmour(Armour armour);
	Armour GetCharacterArmour() const;

	void SetCharacterFood(int food);
	int GetCharacterFood() const;

	void SetCharacterState(CharacterState state);
	CharacterState GetCharacterState() const;

	void AddFood(int amount);
	void Eat();
	bool Attack(GameCharacter& character);
	void Defend();
	void Walk();
	void Run();
	void Sleep();
};

