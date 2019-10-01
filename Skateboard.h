#ifndef DRIVINGSIMULATOR_SKATEBOARD_H
#define DRIVINGSIMULATOR_SKATEBOARD_H

#include "Vehicle.h"

class Skateboard : public Vehicle {

public:
    explicit Skateboard(string brand = "unknown", string model = "unknown");
    virtual ~Skateboard();
    virtual string toString();
    virtual double mileageEstimate(double time);
};
#endif
