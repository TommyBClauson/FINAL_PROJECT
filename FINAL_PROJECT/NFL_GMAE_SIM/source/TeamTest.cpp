#include "Team.h"
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
using namespace std;

int main()
{
    vector <Team> NFL_Teams;

    // pointing back to vars from class to be used to store data from file
    string Team::*tempteamName = &Team::TeamName;
    double Team::*tempTotalYds = &Team::TotalYds;
    double Team::*tempYdsPerGame = &Team::YdsPerGame;
    double Team::*tempPassYdsPerGame = &Team::PassYdsPerGame;
    double Team::*tempRushYdsPerGame = &Team::RushYdsPerGame;
    double Team::*tempPointsPerGame = &Team::PointsPerGame;

    // file anem var
    string filename;
    // filename is this file
    filename = "NFL_Team_Stats.txt";
    // opebubg file
    ifstream input(filename.c_str());

    // checking to see if file is real
    if (input.fail())
    {
        cout << filename << " does not exist." << endl;
        cout << "EXIT PROGRAM" << endl;
        return 0;
    }

    // if file is there
    if (!input.eof())
    {
        
        string line;
        while (!input.eof())
        {
            input >> tempteamName >>
        getline(input, line);
        cout << line << endl;
        }
        
    // Reading the data from file
    string TeamName;
}
}