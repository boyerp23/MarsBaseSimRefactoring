//Allows input and output
#include <iostream>
//allows me to work with strings
#include <string>
//allows me to use the prototype function in the find food header file
#include "FindFood.h"

// So I dont have to type std:: in front of each line 
using namespace std;



//Find food scenario requires player to make the correct choice to find a food source to survive on the red planet
int ClassFindFood::FindFoodScenario()
{
	// This will be the number of health points higher or lower to add/sub to health.
	int pointsResults = 0;
	cout << "\n\nYou are now in need of food, but you left your ship unsecure in search of water that a martian bear stole all your food.";
	cout << "\nYou recall seeing a route running North to South.\n\n";
	cout << "\nTo the North you see a herd of animals, and to the South you see a grove of trees.\n";
	cout << "\nWhich way would you like to go? (N or S) ";
	string localPlayerChoice;
	getline(cin, localPlayerChoice);
	//calculate points based on decision
	if (localPlayerChoice == "N")
	{
		cout << "\nYou have chosen poorly and get trampled by a martian sheep and lose 25 health points.\n";
		pointsResults = -25;
		// return -25;
	}
	else if (localPlayerChoice == "S")
	{
		cout << "\nYou have chosen wisely and find fresh fruit and this gives you an increase of 25 health points.\n";
		pointsResults = 25;
		// return 25;
	}
	else
	{
		cout << "\nYou are not making clear choices and are walking in circles causeing you to lose 10 health points to hunger.\n";
		pointsResults = -10;
		// return -10;
	}
	return pointsResults;
}