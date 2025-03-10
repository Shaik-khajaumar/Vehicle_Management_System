#ifndef EVCAR_HPP
#define EVCAR_HPP

#include "ChargingType.hpp"
#include "ElectricVehicle.hpp"
#include <ostream>

class EvCar : public ElectricVehicle
{
private:
float _battery_capacity;
ChargingType _chargingType;
    
public:
    EvCar() = delete;
    EvCar(const EvCar&) = delete;
    EvCar(EvCar&&) = delete;
    EvCar& operator= (const EvCar&) = delete;
    EvCar& operator= (EvCar&&) = delete;
    ~EvCar() = default;
    EvCar(Type type, float price, int seat_count, int engine_horsepower, float battery_capacity, ChargingType chargingType);

    friend std::ostream &operator<<(std::ostream &os, const EvCar &rhs);

    virtual float CalculateGst();
    virtual float CalculateExchangeAmount();
};



#endif // EVCAR_HPP
