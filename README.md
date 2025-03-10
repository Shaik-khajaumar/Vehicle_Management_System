# Vehicle_Management_System
A vehicle management system made using object oriented programming and many features of Modern C++.

The purpose of this project is to put my oops and c++ knowledge to use by building a vehicle management system.

Structure of the project:
The class for vehicles is the ElectricVehicle.hpp class (This is the base class) it has all the properties that are commmon to both electric cars and electric bikes.
The class for electric cars is the EvCar.hpp class (derived from ElectricVehicle class).
The class for electric bike is the Ev2Wheeler.hpp class (derived from ElectricVehicle class).
There are some enum classes like Type.hpp, ChargingType.hpp, ConnectedTechType.hpp.
There is an exception handling class(EmptyContainer.hpp).

This project can be used as a management system for Vehicles (electric cars and electric bikes) by adding required functionalities.
Some functionalities which I  have addded are:
-> CreateObjects(): This function creates the instances of Electric vehicles and stores their reference (shared pointers) in a container(vector). 
-> Display(): Display vehicle details by its unique Id.
-> PriceAboveThreshold(): Return Container of Electric Vehicles whose price is greater than the given input by user.
-> CalculateGst(): Print Gst for each vehicle instance.
-> CalculateExchangeAmount(): print ExchangeAmpunt for each vehicle instance.
-> DisplayAvg(): Display Average of all Electric Veficles whose engine_horse_power is greater than 600
More functionalities can be added as required.

For all the functionalities I have used multithreading and implemented exception handling also.
To ensure proper and safe memory management I have used shared pointers.

