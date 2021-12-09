/*
 Team.h
 UPDATE HEADER INFO
 
 INSTRUCTIONS:
 The only part of this file that you should modify is on the lines with //TODO
 
 Determine an appropriate data structure for storing the athletes in. It should have the format of the commented out code preceeding it:     DATA_STRUCTURE<Athlete> myTeam;
set<Athlete> myTeam;
 
 In the cpp file, complete the constructor, pop_best(), and peek_best() functions.
 
 Constructor    - This takes in a string filename. It then reads in the data from the file. For each athlete, it should create an athlete and store it in myTeam.
 
 pop_best()     - This removes the best athlete from the team and returns them
 
 peek_best()    - This returns the best athlete from the team
 
 Do not add or remove any variables/member functions to this class (other than myTeam)
 */

#ifndef Team_h
#define Team_h

#include "Athlete.h"
#include <set> //TODO: Include necessary libraries

class Team {
private:
    
    // DATA_STRUCTURE<Athlete> myTeam;  //TODO: Determine an appropriate data structure to store the athletes in
    int team_size;
    std::set<Athlete> myTeam;
public:
    //Constructor
    Team(std::string fileName);
    
    //Returns the team size
    int get_team_size();
    
    //Removes the best athlete and returns them
    Athlete pop_best();
    
    //Returns the best athlete
    Athlete peek_best() const;
};





#endif /* Team_h */
