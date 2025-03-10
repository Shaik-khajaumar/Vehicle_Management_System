#include "EvCar.hpp"
#include <iostream>
std::ostream &operator<<(std::ostream &os, const EvCar &rhs) {
    os << "_battery_capacity: " << rhs._battery_capacity
       << " _chargingType: " << static_cast<int>(rhs._chargingType); //enum here use switch
    return os;
}

EvCar::EvCar(Type type, float price, int seat_count, int engine_horsepower, float battery_capacity, ChargingType chargingType) :
ElectricVehicle(type, price, seat_count, engine_horsepower), _battery_capacity(battery_capacity), _chargingType(chargingType)
{
}

float EvCar::CalculateGst()
{   
    return (0.05f * price());
}

float EvCar::CalculateExchangeAmount()
{   
    float ans = 0.0f;
    if(type() == Type::REGULAR) {
        return (0.6f * price());
    }
    else if(type() == Type::TRANSPORT && (_chargingType == ChargingType::AC || _chargingType == ChargingType::AC_DC_FAST_CHARGE_BOTH)) {
        return (0.75f * price());
    }
    else if(type() == Type::TRANSPORT && _chargingType == ChargingType::AC_DC_FAST_CHARGE_BOTH) {
        return (0.75f * price());
    }
    // return 0.0f;
    return (0.75 * price());
}
