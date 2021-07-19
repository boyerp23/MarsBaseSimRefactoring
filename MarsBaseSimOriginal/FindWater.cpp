//Allows input and output
#include <iostream>
//allows me to work with strings
#include <string>
//allows me to use the prototype function in the find water header file
#include "FindWater.h"

// So I dont have to type std:: in front of each line 
using namespace std;

//Find fresh water scenario requires player to make the correct choice to find a water source to survive on the red planet
int ClassFindWater:: FindWaterScenario()
{
	// This will be the number of health points higher or lower to add/sub to health.
	int pointsResults = 0;
	cout << "\n\nYou have just landed on Mars, but your water maker is broke. You need to find ";
	cout << "\nfresh water fast or you and your crew will perish.\n\n";
	cout << "\nAfter exiting the ship, to the West you hear a growling, and to the East you hear water splashing on a beach.\n";
	cout << "\nWhich way would you like to go? (W or E) ";
	string localPlayerChoice;
	getline(cin, localPlayerChoice);
	//calculate points based on decision
	if (localPlayerChoice == "W")
	{
		cout << "\nYou have chosen poorly and get bitten by a martian bear and lose 25 health points.\n";
		pointsResults = -25;
		// return -25;
	}
	else if (localPlayerChoice == "E")
	{
		cout << "\nYou have chosen wisely and find water and this gives you an increase of 25 health points.\n";
		pointsResults = 25;
		// return 25;
	}
	else
	{
		cout << "\nYou are not making clear choices and are walking in circles causeing you to lose 10 health points to thrist.\n";
		pointsResults = -10;
		// return -10;
	}
	return pointsResults;
}
