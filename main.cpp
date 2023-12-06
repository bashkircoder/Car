#include <iostream>

#include "Car.h"

int main() {



        string last_name;
        cout << "Enter driver's last name" << endl; cin >> last_name;

        string first_name;
        cout << "Enter driver's first name" << endl; cin >> first_name;

        string surname;
        cout << "Enter driver's surname" << endl; cin >> surname;

        int experience;
        cout << "Enter driver's experience" << endl; cin >> experience;

        Driver driver(last_name, first_name,surname,experience);

        int power;
        cout << "Enter power of engine" << endl; cin >> power;

        string manufacturer;
        cout << "Enter engine manufacturer" << endl; cin >> manufacturer;

        Engine engine(power, manufacturer);

        string car_model;
        cout << "Enter car model" << endl; cin >> car_model;

        string car_class;
        cout << "Enter car class" << endl; cin >> car_class;

        int car_weight;
        cout << "Enter car weight" << endl; cin >> car_weight;

        Car car(&driver, &engine, car_model, car_class, car_weight);



    car.PrintCarInfo();


    return 0;
}
