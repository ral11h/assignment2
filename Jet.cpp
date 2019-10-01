#include "Jet.h"
#include <time.h>
#include <cstdlib>
#include <stdlib.h>
#include <string>

Jet::Jet(string brand, string model, string fuelType, int numberOfEngines){
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
    setRandomMileage();
}

Jet::~Jet()=default;

int Jet::getNumberOfEngines(){
    return numberOfEngines;
}

void Jet::setNumberOfEngines(int engineCount){
    if(engineCount<1)
        numberOfEngines=1;
    else
        numberOfEngines=engineCount;
}

int Jet::getMileage(){
    return mileage;
}

void Jet::setRandomMileage(){
    srand(time(0));
    mileage= rand() % 60 + 41;
}

double Jet::mileageEstimate(double time){

	double distance = mileage;
    if(getFuelType()=="Rocket")
        distance = distance + mileage * 0.055;

    return distance;
}

string Jet::toString(){
    return "-> Jet\n"+ PoweredVehicle::toString() + "\n\tNumber of Engines: " + 
        to_string(numberOfEngines) + "\n\tMileage: " + to_string(mileage);
};
