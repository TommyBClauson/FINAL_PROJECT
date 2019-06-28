#ifndef TEAM_H
#define TEAM_H
#include <string>
using namespace std;
// take out  dont need
class Team
{
    private:
        // delcaring NFL team name and confereence to be string 
        string TeamName, Conference;
        // declaring vars for team yard stats as double
        double TotalYds, YdsPerGame, PassYdsPerGame, RushYdsPerGame; 
        // delcaing vars for team points stats as double
        double PointsPerGame, PointsScored;

    public:
        // no arg-ructor
        Team();
        //ructor with arguments
        Team(string, string, double, double, double, double, double, double);
        // Get func for returning NFL Team Name
        string GetTeamName();
        // Get func for returning NFL Conference
        string GetConference();
        // Get func for returning NFL Team Total Yards in a season
        double GetTotalYrds();
        // Get func for returning NFL Team Yards per game
        double GetYrdsPerGame();
        // Get func for returning NFL Team Pass Yards per game
        double GetPassYrdsPerGame();
        // Get func for returning NFL Team Rush Yards per game
        double GetRushYrdsPerGame();
        // Get func for returning points per game
        double GetPointsPerGame();
        // Set func for NFL Team Name
        void SetTeamName(string);
        // Set func for NFL Conference
        void SetConference(string);
        // Set func for NFL Team Total Yards in a season
        void SetTotalYrds(double);
        // Set func for NFL Team Yards per game
        void SetYrdsPerGame(double);
        // Set func for NFL Team Pass Yards per game
        void SetPassYrdsPerGame(double );
        // Set func for NFL Team Rush Yards per game
        void SetRushYrdsPerGame(double);
        // Set func for points per game
        void SetPointsPerGame(double);
};
#endif