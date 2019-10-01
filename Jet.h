#ifndef DRIVINGSIMULATOR_JET_H
#define DRIVINGSIMULATOR_JET_H

#include "PoweredVehicle.h"

class Jet : public PoweredVehicle {

private:
    int numberOfEngines;
    int mileage;

public:
    explicit Jet(string brand, string model, string fuelType, int numberOfEngines);

    virtual ~Jet();
    int getNumberOfEngines();
    void setNumberOfEngines(int engineCount);
    int getMileage();
    void setRandomMileage();

    virtual string toString();
};

#endif
