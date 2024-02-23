//****************************************************************************************************
//     File:               SportMain.cpp
// 
//     Student:            Anna Sargsyan
// 
//     Assignment:         Program #12
// 
//     Course Name:        Programming II
// 
//     Course Number:      COSC 1560-01
// 
//     Due:                December 8, 2023
//
//     This program is a modification of the previous assignment. the new version 
//     uses constructor, deconstructor, inline and std::.
//
//****************************************************************************************************

#include "Sport.h"
#include <iostream>

using namespace std;

void sportOperations(Sport[], int);
void displaySports(Sport[], int);
void averageNumTeams(Sport[], int);

//****************************************************************************************************

int main()
{
    int numSports;
    cout << "Enter the number of sports to process: ";
    cin >> numSports;

    Sport* sportsArray = new Sport[numSports];

    sportOperations(sportsArray, numSports);

    delete[] sportsArray;
    return 0;
}

//****************************************************************************************************

void sportOperations(Sport sports[], int numSports)
{
    for (int i = 0; i < numSports; ++i)
    {
        cout << "Processing Sport " << i + 1 << endl;
        sports[i].populateInfo();
    }

    displaySports(sports, numSports);
    averageNumTeams(sports, numSports);
}

//****************************************************************************************************

void displaySports(Sport sports[], int numSports)
{
    cout << "\nDisplaying Sports Information:\n";
    for (int i = 0; i < numSports; ++i)
    {
        cout << "\nSport " << i + 1 << " Information:\n";
        sports[i].displayInfo();
    }
}

//****************************************************************************************************

void averageNumTeams(Sport sports[], int numSports)
{
    int totalTeams = 0;
    for (int i = 0; i < numSports; ++i)
    {
        totalTeams += sports[i].getNumTeams();
    }

    double average = static_cast<double>(totalTeams) / numSports;
    cout << "\nAverage Number of Teams: " << average << std::endl;
}

//****************************************************************************************************

/*
Enter the number of sports to process: 2
Processing Sport 1
Enter sport name: Chess
What is the next game's date? (month/day/year): 12/12/2023
Enter the number of teams: 4
Enter team name for team 1: a1
Enter team name for team 2: a2
Enter team name for team 3: a3
Enter team name for team 4: a4
Processing Sport 2
Enter sport name: Football
What is the next game's date? (month/day/year): 11/13/2024
Enter the number of teams: 3
Enter team name for team 1: z1
Enter team name for team 2: z2
Enter team name for team 3: z3

Displaying Sports Information:

Sport 1 Information:
Sport name: Chess
Next game date: 12/12/2023
Number of teams: 4

Sport 2 Information:
Sport name: Football
Next game date: 13/11/2024
Number of teams: 3

Average Number of Teams: 3.5

*/