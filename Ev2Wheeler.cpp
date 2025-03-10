#include "Ev2Wheeler.hpp"
std::ostream &operator<<(std::ostream &os, const Ev2Wheeler &rhs) {
    os << static_cast<const ElectricVehicle &>(rhs)
       << " _battery_capacity: " << rhs._battery_capacity
       << " _connected_tech_type: " << static_cast<int>(rhs._connected_tech_type); //enum here
    return os;
}

Ev2Wheeler::Ev2Wheeler(Type type, float price, int seat_count, int engine_horsepower, float _battery_capacity, ConnectedTechType connected_tech_type) : 
ElectricVehicle(type, price, seat_count, engine_horsepower), _battery_capacity(_battery_capacity), _connected_tech_type(connected_tech_type)
{
}

float Ev2Wheeler::CalculateGst()
{   
    return (0.1f * price());
}

float Ev2Wheeler::CalculateExchangeAmount()
{
    return (0.32f * price());
}
