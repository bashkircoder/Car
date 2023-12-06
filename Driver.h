#ifndef CARDRIVER_DRIVER_H
#define CARDRIVER_DRIVER_H

#include <iostream>
#include <string>

using namespace std;

struct Driver {

    string last_name;
    string first_name;
    string surname;

    int experience;

    Driver(string last_name, string first_name, string surname, int experience){

        this -> last_name = last_name;
        this -> first_name = first_name;
        this -> surname = surname;
        this -> experience = experience;

    }

    ~Driver(){

    }

    string ToString (){
        string DriverInfo = last_name + " " + first_name + " " + surname + "\n" +
                "Experience: " + to_string(experience);
        return DriverInfo;
    }


};




#endif //CARDRIVER_DRIVER_H
