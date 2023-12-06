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

    void Init (string last_name,string first_name,string surname,int experience, int power, string manufacturer, string car_model, string car_class, int car_weight){

        this -> driver = new Driver(last_name, first_name, surname, experience);
        this -> engine = new Engine(power, manufacturer);
        this -> car_model = car_model;
        this -> car_class = car_class;
        this -> car_weight = car_weight;

    }

    string Start(){
        return "Ok, let's go!";
    }

    string Stop(){
        return "Stop!";
    }

    string TurnRight(){
        return "Turn right!";
    }

    string TurnLeft(){
        return "Turn left!";
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

    ~Car(){

        delete driver;
        delete engine;

    }


};




#endif //CARDRIVER_CAR_H
