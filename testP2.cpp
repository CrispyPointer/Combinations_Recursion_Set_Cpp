/*
 testP2.cpp
 
 INSTRUCTIONS:
 This main file just lets you run and test your code. It will not be submitted. Feel free to add your own tests. This file will not run until you implement the functions. You can comment out the parts corresponding to un-implemented code.
 
 Modify the Team.h file where indicated.
 
 Create your own Athlete.cpp and Team.cpp files. Complete the necessary code.
 */

#include <iostream>
#include <cassert>
#include "Team.h"
#include "Athlete.h"

using namespace std;



int main() {
    Team myTeam("sampleAthleteData.txt");
    
    int team_size = myTeam.get_team_size();
    cout << "[1] The team size should be 20 and it is " << team_size << endl;
    
    //Should assign the best athlete to current without removing them from the team
    Athlete current = myTeam.peek_best();
    
    
    cout << "[2] The team size should be 20 and it is " << team_size << endl;
    
    
    //Check that all the get functions are working correctly
    cout << "[3] " << current.get_athlete_ID() << "\t" << current.get_vo2() << "\t" << current.get_reaction_time() << "\t" << current.get_balance() << "\t" << current.get_strength() << "\t" << current.get_mile_time() << "\t" << current.get_performance() << endl;
    
    //This will print out all the athletes on your team from best to worst
    //Make sure that the performance is calculated correctly and that the performance is decreasing.
    cout << "\nPrinting the team" << endl;
    for(int i = 0; i < team_size; i++) {
        assert(myTeam.get_team_size() == team_size - i);
        current = myTeam.pop_best();
        cout << "Iteration = " << i << "\t" << current << endl;
    }
    
    return 0;
}

