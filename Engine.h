#ifndef CARDRIVER_ENGINE_H
#define CARDRIVER_ENGINE_H

#include <string>

#include "Driver.h"

using namespace std;

struct Engine {

    int power;

    string manufacturer;

    Engine(int power, string manufacturer){

        this -> power = power;
        this -> manufacturer = manufacturer;

    }

    string ToString (){
        return "Power: " + to_string(power) + "; Manufacturer: " + manufacturer;
    }

    ~Engine(){

    }


};



#endif //CARDRIVER_ENGINE_H
