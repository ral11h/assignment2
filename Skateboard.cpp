////////////////////////////
//  Author: Ryan Leigh    //
//  Skateboard.cpp        //
//                        //
////////////////////////////
#include "Skateboard.h"
#include <cstdlib>		//for rand()
#include <time.h>		//for time()

//constructor
Skateboard::Skateboard(string brand, string model){
    setBrand(brand);		
    setModel(model); 
    srand(time(0));		//seed
}

//destructor
Skateboard::~Skateboard() = default;

//toString function
string Skateboard::toString(){
    return "-> Skateboard\n" + Vehicle::toString();
}

//returns the distance traveled in miles after 'time'
//in minutes
double Skateboard::mileageEstimate(double time){

    double mileage= (rand() % 5 + 1) * 0.1;	//[0.1,0.5]

    if(time > 25 && time < 250)		//boost if in this time frame
        mileage+= rand() % (int)(time/3.0) + 1;	

    return mileage * time;
}
