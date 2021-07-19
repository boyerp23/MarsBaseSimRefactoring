//Allows input and output
#include <iostream>
//allows me to work with strings
#include <string>
//allows me to use the prototype function in the find life header file
#include "FindLife.h"

// So I dont have to type std:: in front of each line 
using namespace std;

//Find intelligent life scenario requires player to fulfill his duties and find intelligent life.

int ClassFindLife::FindIntelligentLifeScenario()
{
	// This will be the number of health points higher or lower to add/sub to health.
	int pointsResults = 0;
	cout << "\n\nYou are now in search of intelligent life on planet Mars. ";
	cout << "\nYour shipmates claim to have seen what looks like villages to the North West and South East. \n\n";
	cout << "\n The village to the North West sounds like a rowdy group and dont like strangers, and the group to the South East ";
	cout << "\nseem calm and welcoming to strangers.";
	cout << "\nDo you want to observe the village to the NW or SE?\n";
	string localPlayerChoice;
	getline(cin, localPlayerChoice);
	//calculate points based on decision
	if (localPlayerChoice == "NW")
	{
		cout << "\nYou have chosen to observe the barbaric martian tribe and lose 25 health points.\n";
		pointsResults = -25;
		// return -25;
	}
	else if (localPlayerChoice == "SE")
	{
		cout << "\nYou have chosen to observe the melevolent tribe and they gain 25 health points.\n";
		pointsResults = 25;
		// return 25;
	}
	else
	{
		cout << "\nYou are not making clear choices and are walking in circles causeing you to lose 10 health points to failure to make contact.\n";
		pointsResults = -10;
		// return -10;
	}
	return pointsResults;
}
