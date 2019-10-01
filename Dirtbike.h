#ifndef DRIVINGSIMULATOR_DIRTBIKE_H
#define DRIVINGSIMULATOR_DIRTBIKE_H

#include "PoweredVehicle.h"

class Dirtbike : public PoweredVehicle {

private:
    int engineType;    //2 or 4 meaning 2-stroke or 4-stroke
    int engineSize;       //250, 400, 600, etc. 

public:
    explicit Dirtbike(string brand, string model, string fuelType, int engineType= 2,int engineSize = 400);

    virtual ~Dirtbike();
    string getEngineType();
    void setEngineType(int type);
    int getEngineSize();
    void setEngineSize(int size);
    virtual double mileageEstimate(double time);
    virtual string toString();
};

#endif
