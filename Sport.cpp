#include "Sport.h"
#include <iostream>
#include <string>

using namespace std;
//****************************************************************************************************

Sport::Sport(const string& n)
{
    name = n;
}

//****************************************************************************************************

Sport::~Sport()
{
    delete[] teamNames;
}

//****************************************************************************************************

void Sport::setNextGame(Date gameDate)
{
    cout << "What is the next game's date? (month/day/year): ";
    cin >> gameDate.month;
    cin.ignore();
    cin >> gameDate.day;
    cin.ignore();
    cin >> gameDate.year;

    if (gameDate.month >= 1 && gameDate.month <= 12 &&
        gameDate.day >= 1 && gameDate.day <= 31 &&
        gameDate.year >= 1900)
    {
        nextGame = gameDate;
    }
    else
    {
        nextGame = { 1, 1, 2000 };
    }
}

//****************************************************************************************************

void Sport::setNumTeams(int teams)
{
    cout << "Enter the number of teams: ";
    cin >> teams;

    if (teams >= 0) 
    {
        numTeams = teams;
    }
    else 
    {
        numTeams = 5; 
    }
}

//****************************************************************************************************

void Sport::populateInfo()
{
    cout << "Enter sport name: ";
    cin >> name;

    setNextGame(nextGame);
    setNumTeams(numTeams); 

    teamNames = new string[numTeams];

    for (int i = 0; i < numTeams; ++i)
    {
        cout << "Enter team name for team " << i + 1 << ": ";
        cin >> teamNames[i];
    }
}

//****************************************************************************************************

void Sport::displayInfo() const
{
    cout << "Sport name: " << name << endl;
    cout << "Next game date: " << nextGame.day << "/"
        << nextGame.month << "/" << nextGame.year << endl;
    cout << "Number of teams: " << numTeams << endl;
}