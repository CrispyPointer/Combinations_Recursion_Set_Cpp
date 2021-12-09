#include "Team.h"
#include <fstream>
#include <iostream>
#include <sstream>

using namespace std;

Team::Team(string fileName){
    string input;
    ifstream data;
    int athlete_ID;
    double vo2;
    double reaction_time;
    int balance;
    int strength;
    double mile_time;
    data.open(fileName);
    getline(data,input);
    while (getline(data,input)){
        istringstream instr(input);
        instr >> athlete_ID >> vo2 >> reaction_time >> balance >> strength >> mile_time;
        Athlete A(athlete_ID, vo2, reaction_time, balance, strength, mile_time);
        myTeam.insert(A);
    }
}

int Team::get_team_size(){
    return myTeam.size();
}

//Objects stored in a set are ordered according to the < operator
//The Athlete team when initialized is sorted with the performance in descentding order.

Athlete Team::peek_best() const{    
    Athlete A(0,0,0,0,0,0);
    if(!myTeam.empty())
        A = *(myTeam.rbegin());
    return A;
}

Athlete Team::pop_best(){    
    Athlete A(0,0,0,0,0,0);
    set<Athlete>::iterator pos;
    if(!myTeam.empty()){
        A = *(myTeam.rbegin());
    }
    for(auto x : myTeam){
        if(x.get_athlete_ID() == A.get_athlete_ID()){
            myTeam.erase(x);
            return A;
        }
    }
    return A;
}