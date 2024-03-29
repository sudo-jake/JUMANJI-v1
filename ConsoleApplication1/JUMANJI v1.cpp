// JUMANJI v1.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

//Libraries
#include "stdafx.h"
#include <iostream>
#include <string>

//Sends data to computer stream
using std::cout;
//Gets data from the keyboard
using std::cin;
using std::endl;
//Accesses strings through a variable
using std::string;


//Function
int main()
{
	//Variable of how much gold there is
	const int GOLD_PIECES = 900;
	//Declared Variables
	int adventurers, killed, survivors;
	string leader;

	//Welcome Screen
	cout << "Welcome to JUMANJI\n\n";
	cout << "Please enter the following for your personalized adventure\n";

	cout << "Enter a number: ";
	//Inputs how many adventurers there are
	cin >> adventurers;

	cout << "Enter a number, smaller than the first: ";
	//Inputs a number thats less than the first
	cin >> killed;

	// Makes adventurers variable and killed variable minus each other
	survivors = adventurers - killed;

	cout << "Enter your last name: ";
	//Inputs your last name
	cin >> leader;

	//Story plus input from variables
	cout << "\nA brave group of " << adventurers << " set out on a quest ";
	cout << "-- in search of the lost treasure of the Ancient Dwarves. ";
	cout << "The group was led by that legendary rogue, " << leader << ".\n";
	cout << "\nAlong the way, a band of marauding ogres ambushed the party. ";
	cout << "All fought bravely under the command of " << leader;
	cout << ", and the ogres were defeated, but at a cost. ";
	cout << "Of the adventurers, " << killed << " were vanquished, ";
	cout << "leaving just " << survivors << " in the group.\n";
	cout << "\nThe party was about to give up all hope. ";
	cout << "But while laying the deceased to rest, ";
	cout << "they stumbled upon the buried fortune. ";
	cout << "So the adventurers split " << GOLD_PIECES << " gold pieces.";
	//Divides how many gold pieces there is with the survivors
	cout << leader << " held on to the extra " << (GOLD_PIECES / survivors);
	cout << " pieces to keep things fair of course.\n";
	
	//Exit Code of the Program
	return 0;
}