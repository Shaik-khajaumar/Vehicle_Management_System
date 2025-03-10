#include "ElectricVehicle.hpp"

ElectricVehicle::ElectricVehicle(Type type, float price, int seat_count, int engine_horsepower) :
_id(_counter++),_type(type), _price(price), _seat_count(seat_count), _engine_horsepower(engine_horsepower)
{
}
std::ostream &operator<<(std::ostream &os, const ElectricVehicle &rhs) {
    os << "_id: " << rhs._id
       << " _type: " << static_cast<int>(rhs._type) //enum here use switch
       << " _price: " << rhs._price
       << " _seat_count: " << rhs._seat_count
       << " _engine_horsepower: " << rhs._engine_horsepower;
    return os;
}
