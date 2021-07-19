/* This allows me to do inoutand output
Think of a stream of data */
#include <iostream>
//this allows me to work with strings
#include <string>
//allows me to use the prototype function in the find water header file
#include "FindWater.h"
//allows me to use the prototype function in the find life header file
#include "FindLife.h"
//allows me to use the prototype function in the find food header file
#include "FindFood.h"


/* So I dont have to type std::in front of each line
and this should go under the includes and above everything else. */
using namespace std;

// Global Varibles
// This is the palyers rank
string playerRank;
/* This is a a varible that will hold the players health
 It strats at 100 %. */
int playersHealth = 100;

/* Declare / Prototype functions I will use
the pattern for each function is the same!
return type : Name of functions : (O or more parameters)
{ Curly Braces as your scope operators } */ 
string GetUserName();
void WelcomeUser(string userName);
void DisplayIntro();
void DisplayPlayerRank();
void DisplayPlayerHealth();

/*main function which is where all C++ programs start
return type : Name of functions : (O or more parameters)
{ Curly Braces as your scope operators } */
int main()
{
	//First we must create objects that we can use from the classes that we made.
	//Sytax is class name and object name that you want to make.
	//Remember the only thinga a class can do it make objects!
	ClassFindFood objectFindFood;
	ClassFindLife objectFindLife;
	ClassFindWater objectFindWater;
	//Once a class has made an object, it's job is OVER!
	//You only work wth objects from here on out

	// We are assigning a value to the global var playerRank
	playerRank = "Cadet";
	//Calling the function to display intro
	DisplayIntro();
	//Create local varible to hold username
	string localMainUserName;
	//Get User Name will return a value which we can assign localMainUserName var
	localMainUserName = GetUserName();
	//Now we can pass a copy of the value localMainUserName to the Welcome User Function.
	WelcomeUser(localMainUserName);
	//Display health before entering scenario
	DisplayPlayerHealth();
	system("pause");
	// Start the Find water Scenario. Object created from class is placed here.
	int localResultScore = objectFindWater.FindWaterScenario();
	playersHealth = playersHealth + localResultScore;
	//Display health after scenario
	DisplayPlayerHealth();
	system("pause");
	// Start Find Food Scenario. Object created from class is placed here.
	localResultScore = objectFindFood.FindFoodScenario();
	playersHealth = playersHealth + localResultScore;
	DisplayPlayerHealth();
	system("pause");
	// Start Find Intelligent Scenario. Object created from class is placed here.
	localResultScore = objectFindLife.FindIntelligentLifeScenario();
	playersHealth = playersHealth + localResultScore;
	DisplayPlayerHealth();
	//Tell the user to exit when they are ready
	cout << "\nWhen you're finished ";
	system("pause");
	//Ends the main function, which also ends our program.
	return 0;
}
/* body of functions below main
return type : Name of functions : (O or more parameters) */
void DisplayIntro()
{
	cout << "\n\n\n\t*** Mission to Mars ***\n\n";
	cout << "\n In this sim you are a Space Cadet that has just landed on a new base on Planet Mars!\n";
	DisplayPlayerRank();
	return;
}

string GetUserName()
{
	cout << "\n What is your name?";
	// This is a local varible
	string userName;
	/*this is what actually gets the user input
	remember never to use cin with getline in the same program. */
	getline(cin, userName);
	return userName;
}

void WelcomeUser(string localUserName)
{
	cout << "\n Welcome Commander " + localUserName;
}

void DisplayPlayerHealth()
{
	cout << "\n Your Current Player Health is " << playersHealth << endl;
	return;
}

void DisplayPlayerRank()
{
	cout << "\n Your Current Rank is " + playerRank << endl;
}