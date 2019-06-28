#include "Team.h"
#include <iostream>
#include <string>
using namespace std;

Team::Team()
{
    TeamName = "";
    Conference = "";
    TotalYds = 0.0;
    YdsPerGame = 0.0;
    PassYdsPerGame = 0.0;
    RushYdsPerGame = 0.0;
    PointsPerGame = 0.0;
    PointsScored = 0.0;
}

Team::Team(string TN, string C, double TY, double YPG, double PYPG, double RYPG, double PPG, double PS)
{
    TeamName = TN;
    Conference = C;
    TotalYds = TY;
    YdsPerGame = YPG;
    PassYdsPerGame = PYPG;
    RushYdsPerGame = RYPG;
    PointsPerGame = PPG;
    PointsScored = PS;
}

string Team::GetTeamName()
{
    return TeamName;
}

/*
double Team::GetConference()
{
    return Conference;
}
*/
double Team::GetTotalYrds()
{
    return TotalYds;
}

double Team::GetYrdsPerGame()
{
    return YdsPerGame;
}

double Team::GetPassYrdsPerGame()
{
    return PassYdsPerGame;
}

double Team::GetRushYrdsPerGame()
{
    return RushYdsPerGame;
}

double Team::GetPointsPerGame()
{
    return PointsPerGame;
}

// double Team:: // may need this for points scored but it might be in the gen class

void Team::SetTeamName(string TN)
{
    TeamName = TN;
}

void Team::SetConference(string C)
{
    Conference = C;
}

void Team::SetTotalYrds(double TY)
{
    TotalYds = TY;
}

void Team::SetYrdsPerGame(double YPG)
{
    YdsPerGame = YPG;
}

void Team::SetPassYrdsPerGame(double PYPG)
{
    PassYdsPerGame = PYPG;
}

void Team::SetRushYrdsPerGame(double RYPG)
{
    RushYdsPerGame = RYPG;
}

void Team::SetPointsPerGame(double PPG)
{
    PointsPerGame = PPG;
}
