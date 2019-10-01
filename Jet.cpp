//////////////////////////
//Author: Ryan Leigh	//
//Jet.cpp		//
//			//
//////////////////////////
#include "Jet.h"
#include <time.h>	//for time()
#include <cstdlib>	//for rand()
#include <string>	//for to_string()

//construcor
Jet::Jet(string brand, string model, string fuelType, int numberOfEngines){
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setNumberOfEngines(numberOfEngines);
    setRandomMileage();
}

//destructor
Jet::~Jet()=default;

//returns number of engines
int Jet::getNumberOfEngines(){
    return numberOfEngines;
}

//sets number of engines
void Jet::setNumberOfEngines(int engineCount){
    if(engineCount<1)		//engineCount must be greater than 0
        numberOfEngines=1;
    else
        numberOfEngines=engineCount;
}

//returns mileage
int Jet::getMileage(){
    return mileage;
}

//sets mileage to a random number between 40 and 100
void Jet::setRandomMileage(){
    srand(time(0));
    mileage= rand() % 60 + 41;
}

//returns distance in miles after 'time' in minutes 
double Jet::mileageEstimate(double time){

    double distance = mileage;
    if(getFuelType()=="Rocket")    //5.5% boost if fuel type is rocket
        distance = distance + mileage * 0.055;

    return distance*time;
}

//toString function
string Jet::toString(){
    return "-> Jet\n"+ PoweredVehicle::toString() + "\n\tNumber of Engines: " + 
        to_string(numberOfEngines);
};
