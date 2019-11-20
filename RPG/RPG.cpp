/*
* RPG.cpp : This file contains the 'main' function. Program execution begins and ends there.
*
* Version information v0.1
* Author: Dr. Shane Wilson && Dr. Effirul Ramlan
* Date: 12/10/2017 || 10/11/2019
* Description: Driver to test the RPG classes - included in the additional challenges
* Copyright notice
*/

#include <iostream>
#include <cstdlib>
#include <ctime>

#include "Weapon.h"
#include "Armour.h"
#include "BlackWitch.h"
#include "Brawler.h"
#include "Orc.h"
#include "Cleric.h"

using namespace std;

void PrintCharacterStatus(GameCharacter& c);
int RollDiceMove(int range);

int main()
{
	srand(time(0));
	int playerCtr{ 4 };
	int counter{ 0 };

	cout << " _______________________________\n";
	cout << "|     ______ ______  _____      |\n";
	cout << "|     | ___ \\| ___ \\|  __ \\     |\n";
	cout << "|     | |_/ /| |_/ /| |  \\/     |\n";
	cout << "|     |    / |  __/ | | __      |\n";
	cout << "|     | |\\ \\ | |    | |_\\ \\     |\n";
	cout << "|     \\_| \\_|\\_|    \\_____/     |\n";
	cout << "|_______________________________|\n";
	cout << endl;

	// A simulation to test the effectiveness of the construction of inherited classes
	// Character initialisation
	cout << "Character Initialisation: \n";
	cout << "-----------------------------------------------------------------\n";
	Brawler zangief("Zangief", 100.0f, 120.0f, Weapon{}, Armour{}, 100, CharacterState::Idle, 55, 50);
	Orc azog("Azog", 100.0, 225.5f, Weapon{ "Orc Scimitar", 25, 7.5f, 35, 100 }, Armour{ "Full Body", 25, 5.5f, 80, 100, ArmourType::Steel }, 35, CharacterState::Idle, 80, 50);
	BlackWitch bellatrix("Bellatrix Lestrange", 100.0f, 50.5f, Weapon{ "Wand", 50, 0.25f,75, 100 }, Armour{}, 75, CharacterState::Idle, 100, 100);
	Cleric samwell("Samwell Tarly", 100.0f, 150.0f, Weapon{ "Sword", 100, 5.0f, 75, 100 }, Armour{ "Full Body", 50, 5.5f, 80, 100, ArmourType::Steel }, 50, CharacterState::Idle, 5);

	cout << "\n--------------------------------------------------------------\n";
	// This is a battle royal, to which only 1 will survive
	while (playerCtr > 1) {
		// Roll a dice to see who will move, what move, and damage if necessary
		// We should pause in between - for effect
		cout << "\nStarting Round " << counter << endl;
		cout << "\nPlease [Enter] to start rolling the dice: ";
		cin.get();

		char choice{};
		switch (RollDiceMove(4)) {
		case 1: 
			cout << zangief.GetCharacterName() << " Move - [A]ttack, [B]rawl, [S]leep \n";
			cin >> choice;
			if (choice == 'A') {
				zangief.Attack(azog);
				zangief.Attack(bellatrix);
				zangief.Attack(samwell);
			}
			else if (choice == 'B') {
				zangief.Brawl(azog);
				zangief.Attack(bellatrix);
				zangief.Attack(samwell);
			}
			else if (choice == 'S') {
				zangief.Sleep();
			}
			break;
		case 2:
			cout << azog.GetCharacterName() << " Move - [A]ttack, [Sc]ream, [S]leep \n";
			cin >> choice;
			if (choice == 'A') {
				azog.Attack(zangief);
				azog.Attack(bellatrix);
				azog.Attack(samwell);
			}
			else if (choice == 'Sc') {
				azog.Scream(zangief);
				azog.Scream(bellatrix);
				azog.Scream(samwell);
			}
			else if (choice == 'S') {
				azog.Sleep();
			}
			break;
		case 3:
			cout << bellatrix.GetCharacterName() << " Move - [A]ttack, [B]ewitch, [S]leep \n";
			cin >> choice;
			if (choice == 'A') {
				bellatrix.Attack(zangief);
				bellatrix.Attack(azog);
				bellatrix.Attack(samwell);
			}
			else if (choice == 'B') {
				bellatrix.Bewitch(zangief);
				bellatrix.Bewitch(azog);
				bellatrix.Bewitch(samwell);
			}
			else if (choice == 'S') {
				bellatrix.Sleep();
			}
			break;
		case 4:
			cout << samwell.GetCharacterName() << " Move - [A]ttack, [P]ray for, [S]leep \n";
			cin >> choice;
			if (choice == 'A') {
				samwell.Attack(zangief);
				samwell.Attack(azog);
				samwell.Attack(bellatrix);
			}
			else if (choice == 'P') {
				samwell.PrayFor(zangief);
				samwell.PrayFor(azog);
				samwell.PrayFor(bellatrix);
			}
			else if (choice == 'S') {
				bellatrix.Sleep();
			}
			break;
		}
		
		cout << "\n*************************************************\n";
		cout << "\nCharacter Status: \n";
		cout << zangief.GetCharacterName() << endl; 
		PrintCharacterStatus(zangief);
		cout << endl;
		cout << azog.GetCharacterName() << endl;
		PrintCharacterStatus(azog);
		cout << endl;
		cout << bellatrix.GetCharacterName() << endl;
		PrintCharacterStatus(bellatrix);
		cout << endl;
		cout << samwell.GetCharacterName() << endl;
		PrintCharacterStatus(samwell);
		cout << "\n*************************************************\n";

		playerCtr -= 1;
	}


	return 0;
}

void PrintCharacterStatus(GameCharacter& c) {
	cout << "Health: " << std::to_string(c.GetCharacterHealth()) << "\t Food: " << std::to_string(c.GetCharacterFood());
	cout << endl;
}

int RollDiceMove(int range) {
	return 1 + (rand() % range);
}

