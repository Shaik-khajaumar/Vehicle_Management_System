#ifndef FUNCTIONALITIES_HPP
#define FUNCTIONALITIES_HPP

#include "ElectricVehicle.hpp"
#include "EvCar.hpp"
#include "Ev2Wheeler.hpp"
#include <thread>
#include <future>
#include <iostream>
#include <memory>
#include <vector>
#include "EmptyContainer.hpp"

using EVPointer = std::shared_ptr<ElectricVehicle>;
using EVCPointer = std::shared_ptr<EvCar>;
using Ev2Pointer = std::shared_ptr<Ev2Wheeler>;

using Container = std::vector<EVPointer>;

void CreateObjects(Container& data);

/*
    Display instance by Id
*/
void Display(Container& data, std::future<int>& ft);

/*
    Display Average of all Electric Veficles whose engine_horse_power is > 600
*/
void DisplayAvg(Container& data);

/*
    Return Container of smart Pointers of Electric Vehicle whose price is > than given
*/
Container PriceAboveThreshold(Container& data, float price);

/*
    Print Gst with CalculateGst() for each instance
*/
void GST(Container& data);

/*
    print ExAmpunt with CalculateExchangeAmount() for each instance
*/
void ExAm(Container& data);
#endif // FUNCTIONALITIES_HPP
