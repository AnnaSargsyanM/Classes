#ifndef SPORT_h
#define SPORT_h

#include <iostream>
#include <string>

struct Date
{
	int day;
	int month;
	int year;
};

class Sport
{
private:
	std::string name;
	Date nextGame;
	int numTeams;
	std::string* teamNames;

public:
	Sport(const std::string& n = "");
	~Sport();

	inline void setName(const std::string& sportName)
	{
		name = sportName;
	}

	inline void setNextGame(Date gameDate);
	inline void setNumTeams(int teams);

	inline std::string getName() const
	{
		return name;
	}

	inline Date getNextGame() const
	{
		return nextGame;
	}

	inline int getNumTeams() const
	{
		return numTeams;
	}

	inline int getNextGameMonth() const
	{
		return nextGame.month;
	}

	inline int getNextGameDay() const
	{
		return nextGame.day;
	}

	inline int getNextGameYear() const
	{
		return nextGame.year;
	}


	void populateInfo();
	void displayInfo() const;

};

#endif