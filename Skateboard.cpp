#include "Skateboard.h"
#include <cstdlib>
#include <stdlib.h>
#include <time.h>

Skateboard::Skateboard(string brand, string model){
    setBrand(brand);
    setModel(model); 
    srand(time(0));
}

Skateboard::~Skateboard() = default;

string Skateboard::toString(){
    return "-> Skateboard\n" + Vehicle::toString();
}

double Skateboard::mileageEstimate(double time){
    double mileage= (rand() % 5 + 1) * 0.1;

    if(time > 25 && time < 250)
        mileage+= rand() % (int)(time/3.0) + 1;

    return mileage * time;
}
