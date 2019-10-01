////////////////////////////
//  Author: Ryan Leigh    //
//  Jet.cpp               //
//                        //
////////////////////////////
#include "Dirtbike.h"
#include <string>

//constructor
Dirtbike::Dirtbike(string brand, string model, string fuelType, int engineType, int engineSize){
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineType(engineType);
    setEngineSize(engineSize);
}

//destructor
Dirtbike::~Dirtbike()=default;

//returns the type of the engine as a string ex. "2-stroke"
string Dirtbike::getEngineType(){
    return to_string(engineType) + "-stroke";
}

//sets the engine type, 2 or 4 meaning 2-stroke or 4-stroke
void Dirtbike::setEngineType(int type){
    if(type==4)
        engineType=4;
    else
        engineType=2;
}

//returns the size of the engine
int Dirtbike::getEngineSize(){
    return engineSize;
}

//sets the engine size
void Dirtbike::setEngineSize(int size){
    if(size<50)			//minimum size is 50
        engineSize=50;
    else
        engineSize=size;

}

//returns the distance traveled in miles after 'time' in minutes
double Dirtbike::mileageEstimate(double time){
     double mileage = engineSize / (7 * engineType);

     if(engineSize >=600)	//5.5% boost for big engines
        mileage= mileage + mileage*0.055;

     return mileage * time;
}

//toString function
string Dirtbike::toString(){
    return "-> Dirtbike\n"+ PoweredVehicle::toString() + "\n\tEngine Type: " + 
        getEngineType() +"\n\tEngine Size: " + to_string(getEngineSize()) + "cc";
}
