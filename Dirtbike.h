////////////////////////////
//  Author: Ryan Leigh    //
//  Dirtbike.h            //
//                        //
////////////////////////////

#ifndef DRIVINGSIMULATOR_DIRTBIKE_H
#define DRIVINGSIMULATOR_DIRTBIKE_H

#include "PoweredVehicle.h"

class Dirtbike : public PoweredVehicle {

private:
    int engineType;    //2 or 4 meaning 2-stroke or 4-stroke
    int engineSize;       //250, 400, 600, etc. 

public:
    //constructor
    explicit Dirtbike(string brand, string model, string fuelType, 
                       int engineType= 2,int engineSize = 400);

    virtual ~Dirtbike();		//destructor
    string getEngineType();		//returns engine type
    void setEngineType(int type);	//sets engine type either 2 or 4
    int getEngineSize();		//returns engine size
    void setEngineSize(int size);	//sets the engine size
    virtual double mileageEstimate(double time);    //returns miles after 'time'
						    //in minutes

    virtual string toString();		//toString function
};

#endif
