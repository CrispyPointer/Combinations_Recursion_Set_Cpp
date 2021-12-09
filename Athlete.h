/*
 Athlete.h
 
 INSTRUCTIONS:
 Do not modify this file. You will not be submitting this, so your changes will be lost
 
 In the Athlete.cpp file, program the member functions for the Athlete class
 
 Constructor    - This should initialize all member variables (including performance)
 
 get functions  - These functions should return their corresponding variables
 
 operator<      - p1 < p2 if p1 has less performance than p2
 
 operator<<     - This will add the following to an output stream
 Athlete [athlete_ID] has performance [performance]
 
 For example, an athlete A with athlete_ID = 123 and performance = 10.5 would have the following behavior
 cout << A;
 Athlete 123 has performance 10.5
 */

#ifndef Athlete_h
#define Athlete_h

#include <iostream>

class Athlete {
private:
    int athlete_ID;
    double vo2;
    double reaction_time;
    int balance;
    int strength;
    double mile_time;
    double performance;
    
public:
    //Constructor
    Athlete(int new_athlete_ID, double new_vo2, double new_reaction_time, int new_balance, int new_strength, double new_mile_time);
    //Should initialize all member variables
    
    //Get functions - no set functions
    int get_athlete_ID() const;
    double get_vo2() const;
    double get_reaction_time() const;
    int get_balance() const;
    int get_strength() const;
    double get_mile_time() const;
    double get_performance() const;
    
    //Operator overloading
    bool operator<(const Athlete& other) const;
    friend std::ostream& operator<<(std::ostream& outStream, const Athlete& value);
};

#endif /* Athlete_h */
