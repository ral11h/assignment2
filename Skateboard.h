////////////////////////////
//  Author: Ryan Leigh    //
//  Skateboard.h          //
//                        //
////////////////////////////

#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

public:
    //constructor
    explicit Skateboard(string brand = "unknown", string model = "unknown");
    
    virtual ~Skateboard();				//destructor
    virtual string toString();				//toString function
    
    virtual double mileageEstimate(double time);	//returns miles after 
  							//'time' in minutes
};
#endif
