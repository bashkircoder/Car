#ifndef CARDRIVER_CAR_H
#define CARDRIVER_CAR_H

#include <string>

#include "Driver.h"
#include "Engine.h"

using namespace std;

struct Car {

    Driver* driver;

    Engine* engine;

    string car_model;
    string car_class;
    int car_weight;

    Car (Driver* driver, Engine* engine, string car_model, string car_class, int car_weight){

        this -> driver = driver;
        this -> engine = engine;
        this -> car_model = car_model;
        this -> car_class = car_class;
        this -> car_weight = car_weight;

    }

    void Start(){
        cout << "Ok, let's go!" << endl;
    }

    void Stop(){
        cout << "Stop!" << endl;
    }

    void TurnRight(){
        cout << "Turn right!" << endl;
    }

    void TurnLeft(){
        cout << "Turn left!" << endl;
    }

    string ToString (){
        return  "Car model: " + car_model + "\n" +
                "Car class: " + car_class + "\n" +
                "Car weight: " + to_string(car_weight);
    }

    void PrintCarInfo (){

        cout << driver->ToString() << endl;
        cout << ToString() << endl;
        cout << engine->ToString() << endl;

    }

    /*~Car(){

        delete driver;
        delete engine;

    }*/


};




#endif //CARDRIVER_CAR_H
