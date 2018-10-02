// dotarandom.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include "time.h"

#define HERO 19
#define STRING 116

using namespace std;


int main()
{
	int cincin;
	srand(time(NULL));




	int x = 20;
	while (x > 0) {
		///////////
		//x--;
		//////////

		int random[((STRING + 10) * 2)] = { 0 };
		char heros[(STRING + 1)][19] = {
			"Antimage",
				"Axe",
				"Crystal Maiden	",
				"Dazzle	",
				"Drow Ranger	",
				"Earthshaker	",
				"Lich",
				"Lina",
				"Lion",
				"Mirana	",
				"Morphling	",
				"Necrophos	",
				"Puck",
				"Pudge",
				"Razor",
				"Sand King	",
				"Shadow Shaman	",
				"Storm Spirit	",
				"Sven",
				"Tidehunter	",
				"Vengeful Spirit",
				"Windranger	",
				"Witch Doctor",
				"Zeus",
				"Slardar",
				"Enigma	",
				"Faceless Void",
				"Tiny",
				"Viper",
				"Venomancer	",
				"Clockwerk	",
				"Nature's Prophet",
				"Dark Seer	",
				"Sniper	",
				"Pugna	",
				"Beastmaster",
				"Enchantress",
				"Leshrac",
				"Shadow Fiend",
				"Tinker	",
				"Weaver	",
				"Night Stalker",
				"AncientApparition",
				"Spectre",
				"Doom",
				"Chen",
				"Juggernaut	",
				"Bloodseeker",
				"Kunkka	",
				"Riki",
				"Queen of Pain",
				"Wraith King",
				"Broodmother",
				"Huskar	",
				"Jakiro	",
				"Batrider	",
				"Omniknight	",
				"Dragon Knight	",
				"Warlock",
				"Alchemist",
				"Lifestealer",
				"Death Prophet",
				"Ursa",
				"Bounty Hunter",
				"Silencer",
				"Spirit Breaker	",
				"Invoker	",
				"Clinkz	",
				"Outworld Devourer	",
				"Bane	",
				"Shadow Demon	",
				"Lycan	",
				"Lone Druid	",
				"Brewmaster",
				"Phantom Lancer",
				"Treant Protector",
				"Ogre Magi",
				"Gyrocopter	",
				"Chaos Knight",
				"Phantom Assassin",
				"Rubick	",
				"Luna",
				"Io	",
				"Undying",
				"Disruptor",
				"Templar Assassin",
				"Naga Siren	",
				"Nyx Assassin",
				"KeeperoftheLight",
				"Visage	",
				"Meepo	",
				"Magnus	",
				"Centaur Warrunner",
				"Slark",
				"Timbersaw",
				"Medusa",
				"Troll Warlord",
				"Tusk",
				"Bristleback",
				"Skywrath Mage",
				"Elder Titan",
				"Abaddon",
				"Ember Spirit",
				"Earth Spirit",
				"Legion Commander",
				"Phoenix",
				"Terrorblade",
				"Techies",
				"Oracle	",
				"Winter Wyvern",
				"Arc Warden",
				"Underlord",
				"Monkey King",
				"Dark Willow",
				"Pangolier",
				"Grimstroke",
					"string"
		};

		bool filter[(STRING + 1)][7] = {
			/*mid | carry | support | roam | offlane | sofflane | bonus*/
		{ 0,1,0,0,0,0,1 },
		{ 0,0,0,0,1,1,0 },
		{ 0,0,1,0,0,0,1 },
		{ 0,0,1,0,0,0,1 },
		{ 0,1,0,0,0,0,0 },
		{ 1,0,1,1,1,0,0 },
		{ 0,0,1,0,0,0,0 },
		{ 1,0,1,0,0,0,1 },
		{ 0,0,1,1,0,0,1 },
		{ 1,1,0,1,1,0,1 },//mirana
		{ 0,1,0,0,0,0,0 },
		{ 1,1,0,0,1,0,0 },
		{ 1,0,0,0,1,0,0 },
		{ 0,0,1,1,0,0,0 },
		{ 1,1,0,1,0,0,0 },
		{ 0,0,1,1,0,0,0 },
		{ 0,0,1,0,0,0,1 },
		{ 1,0,0,0,0,0,1 },
		{ 0,1,0,0,0,0,0 },
		{ 0,0,0,0,1,1,0 },//tide
		{ 1,0,1,1,1,0,0 },
		{ 1,1,1,1,1,0,1 },
		{ 0,0,1,0,0,0,1 },
		{ 1,0,1,0,0,0,0 },
		{ 0,0,0,0,1,0,0 },
		{ 0,0,1,1,1,1,0 },
		{ 0,1,0,0,1,1,1 },
		{ 1,1,0,0,1,0,0 },//Tiny
		{ 1,0,0,0,1,0,0 },
		{ 1,1,1,0,1,0,0 },//veno
		{ 0,0,1,1,1,0,0 },
		{ 1,0,1,1,1,0,0 },
		{ 0,0,0,0,1,1,0 },
		{ 1,1,0,0,0,0,0 },
		{ 1,0,1,0,1,0,0 },
		{ 1,0,0,0,1,1,1 },//beast
		{ 0,0,0,0,1,0,0 },
		{ 1,1,1,0,1,0,0 },
		{ 1,0,0,0,0,0,1 },
		{ 1,0,0,0,0,0,1 },//tinker
		{ 1,1,0,0,1,0,0 },
		{ 0,0,0,1,1,0,0 },
		{ 0,0,1,0,0,0,1 },
		{ 0,1,0,0,0,0,1 },
		{ 0,0,0,1,1,0,0 },
		{ 0,0,1,1,0,0,0 },
		{ 1,1,0,0,0,0,1 },
		{ 1,1,0,0,0,0,0 },
		{ 1,0,0,1,1,0,0 },
		{ 0,0,0,1,1,0,0 },//riki
		{ 1,0,0,0,1,0,0 },//qop
		/*mid | carry | support | roam | offlane | sofflane | bonus */
		{ 0,1,0,0,1,0,0 },
		{ 1,0,0,0,0,1,0 },
		{ 1,0,0,0,0,0,0 },
		{ 0,0,1,0,0,0,1 },
		{ 0,0,0,0,1,1,0 },
		{ 0,0,1,0,1,0,0 },
		{ 1,1,0,0,1,0,0 },
		{ 0,0,1,0,0,0,0 },
		{ 1,0,0,1,0,0,0 },//alch
		{ 1,0,0,0,1,0,0 },
		{ 1,0,0,0,0,0,0 },
		{ 1,1,0,0,0,0,0 },
		{ 0,0,0,1,1,0,0 },
		{ 1,0,1,0,1,0,0 },
		{ 0,0,1,1,0,0,0 },
		{ 1,0,0,0,0,0,1 },
		{ 1,1,0,0,0,0,0 },//clinkz
		{ 1,0,0,0,0,0,0 },
		{ 0,0,1,0,0,0,0 },//bane
		{ 0,0,1,0,0,0,0 },
		{ 0,1,0,0,0,0,0 },
		{ 1,1,0,0,1,1,0 },
		{ 1,0,0,0,1,0,1 },
		{ 1,1,0,0,0,0,1 },
		{ 0,0,1,1,0,0,0 },
		{ 0,0,1,0,0,0,0 },
		{ 0,1,0,0,0,0,0 },
		{ 0,1,0,0,0,0,0 },
		{ 1,1,0,0,0,0,0 },//PA
		{ 0,0,1,0,0,0,1 },
		{ 0,1,0,0,0,0,0 },
		{ 0,0,1,0,0,0,0 },
		{ 0,0,0,0,1,0,0 },
		{ 0,0,1,0,0,0,1 },//disruptor
		/*mid | carry | support | roam | offlane | sofflane | bonus */
		{ 1,0,0,0,0,0,1 },
		{ 0,1,0,1,1,0,0 },
		{ 0,0,0,1,1,0,0 },
		{ 0,0,1,0,0,0,0 },
		{ 1,0,0,0,0,0,0 },//Visage
		{ 1,0,0,0,0,0,0 },
		{ 1,0,0,0,1,0,0 },
		{ 0,0,0,0,1,0,1 },
		{ 0,1,0,0,0,0,1 },
		{ 0,0,0,0,1,1,0 },
		{ 1,1,0,0,0,0,0 },
		{ 1,1,0,0,0,0,0 },
		{ 0,0,0,1,1,0,0 },
		{ 0,0,0,0,1,1,0 },
		{ 1,0,1,0,0,0,1 },//sky
		{ 0,0,1,0,1,0,0 },
		{ 0,0,1,0,1,0,0 },
		{ 1,1,0,0,0,0,1 },
		{ 0,0,0,1,0,0,0 },//earth
		{ 1,0,0,0,1,0,0 },
		{ 0,0,1,0,1,0,1 },
		{ 0,1,0,0,0,0,1 },
		{ 0,0,0,0,1,0,0 },
		{ 0,0,1,0,0,0,0 },
		{ 0,0,1,0,0,0,1 },//winter
		{ 1,0,0,0,0,0,0 },
		{ 0,0,0,0,1,0,0 },
		{ 1,1,0,1,0,0,0 },
		{ 0,0,1,0,0,0,1 },
		{ 0,0,0,0,1,0,0 },
		{ 1,0,1,0,0,0,0 },









		{0,0,0,0,0,0,0},//STRING


		};



		
		int choise = 0, xx=1;
		while(xx>0){
		cout << "(0/1/2) = (no/yes/skip_rest)" << endl;

		cout << "mid?  ";
		cin >> choise;
		if (choise == 2) { xx = 1; break; }
		else filter[STRING][0] = choise;

		cout << "safeCarry?  ";
		cin >> choise;
		if (choise == 2) { xx = 1; break; }
		else filter[STRING][1] = choise;

		cout << "sup?  ";
		cin >> choise;
		if (choise == 2) { xx = 1; break; }
		else filter[STRING][2] = choise;

		cout << "roam?  ";
		cin >> choise;
		if (choise == 2) { xx = 1; break; }
		else filter[STRING][3] = choise;

		cout << "offlane?  ";
		cin >> choise;
		if (choise == 2) { xx = 1; break; }
		else filter[STRING][4] = choise;

		cout << "offlane_solo?  ";
		cin >> choise;
		if (choise == 2) { xx = 1; break; }
		else filter[STRING][5] = choise;

		cout << "bonus?  ";
		cin >> choise;
		if (choise == 2) { xx = 1; break; }
		else filter[STRING][6] = choise;

		xx = 0;
		}


		/*

		filter[STRING][1] = 1;
		filter[STRING][6] = 1;

		*/


		int rngcnt = -1;
		for (int i = 0; i < STRING; i++) {
			if ((filter[i][0] && filter[STRING][0]) || (filter[i][1] && filter[STRING][1]) ||
				(filter[i][2] && filter[STRING][2]) || (filter[i][3] && filter[STRING][3]) ||
				(filter[i][4] && filter[STRING][4]) || (filter[i][5] && filter[STRING][5]))
			{

				random[++rngcnt] = i;
				if (filter[i][6] == 1) {
					random[++rngcnt] = i;

				}
				//cout << heros[i] << endl;
			}
		}
		/*
		cout << endl << endl;
		for (int  i = 0; i <= rngcnt; i++)
		{
			cout << random[i] << "    " ;
		}
		cout << endl << endl;
		*/

		if (rngcnt <= 0) {
			cout << "Keinen Helden gefunden, spiel TECHIES!";
			cin >> cincin;
		}

		int rngrng = 0;
		rngrng = rand() % (rngcnt)+0;


		//cout << "zufallswert  " << rngrng << endl << endl;//

		rngrng = random[rngrng];

		cout << endl << "   " << heros[rngrng] << endl;
		int reroll = 2;



		while (reroll > 0) {
			cout << "reroll? (0/1)     ";
			cin >> reroll;
			if (reroll == 0) {
				cout << endl << endl;
				break;
			}
			rngrng = rand() % (rngcnt)+0;
			rngrng = random[rngrng];
				cout << endl << "   " << heros[rngrng] << endl;

		}












	}
	cin >> cincin;
    return 0;
}

