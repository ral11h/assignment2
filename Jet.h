////////////////////////////
//  Author: Ryan Leigh    //
//  Jet.h                 //
//                        //
////////////////////////////
#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;     //number of engines on the jet
    int mileage;             //used for mileageEstimate

public:
    //constructor
    explicit Jet(string brand="unknown", string model="unknown", string fuelType = "unknown", 
                 int numberOfEngines = 1);

    virtual ~Jet();					//destructor
    int getNumberOfEngines();				//returns number of engines
    void setNumberOfEngines(int engineCount);		//sets the engine count to either 2 or 4 
							//meaning 2-stroke and 4-stroke
    
    int getMileage();					//returns mileage
    void setRandomMileage();				//sets mileage to a random number between 40 and 100
    virtual double mileageEstimate(double time);	//returns miles driven after 'time' in minutes 
    virtual string toString();				//toString function
};

#endif
