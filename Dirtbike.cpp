#include "Dirtbike.h"
#include <string>

Dirtbike::Dirtbike(string brand, string model, string fuelType, int engineType, int engineSize){
    setBrand(brand);
    setModel(model);
    setFuelType(fuelType);
    setEngineType(engineType);
    setEngineSize(engineSize);
}

Dirtbike::~Dirtbike()=default;

string Dirtbike::getEngineType(){
    return to_string(engineType) + "-stroke";
}

void Dirtbike::setEngineType(int type){
    if(type==4)
        engineType=4;
    else
        engineType=2;
}

int Dirtbike::getEngineSize(){
    return engineSize;
}

void Dirtbike::setEngineSize(int size){
    if(size<50)
        engineSize=50;
    else
        engineSize=size;

}

double Dirtbike::mileageEstimate(double time){
     double mileage = engineSize / (7 * engineType);

     if(engineSize >=600)
        mileage= mileage + mileage*0.055;

     return mileage * time;
}

string Dirtbike::toString(){
    return "-> Dirtbike\n"+ PoweredVehicle::toString() + "\n\tEngine Type: " + 
        getEngineType() +"\n\tEngine Size: " + to_string(getEngineSize()) + "cc";
}
