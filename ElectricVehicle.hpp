#ifndef ELECTRICVEHICLE_HPP
#define ELECTRICVEHICLE_HPP

#include "Type.hpp"
#include "string"
#include <ostream>

class ElectricVehicle
{
private:
    inline static int _counter{100};
    int _id;
    Type _type;
    float _price;
    int _seat_count;
    int _engine_horsepower;



public:
    ElectricVehicle() = delete;
    ElectricVehicle(const ElectricVehicle&) = delete;
    ElectricVehicle(ElectricVehicle&&) = delete;
    ElectricVehicle& operator= (const ElectricVehicle&) = delete;
    ElectricVehicle& operator= (ElectricVehicle&&) = delete;
    ~ElectricVehicle() = default;
    ElectricVehicle(Type type, float price, int seat_count, int engine_horsepower);

    friend std::ostream &operator<<(std::ostream &os, const ElectricVehicle &rhs);

    virtual float CalculateGst() = 0;
    virtual float CalculateExchangeAmount() = 0;

    int id() const { return _id; }
    void setId(int id) { _id = id; }

    Type type() const { return _type; }
    void setType(const Type &type) { _type = type; }

    float price() const { return _price; }
    void setPrice(float price) { _price = price; }

    int seatCount() const { return _seat_count; }
    void setSeatCount(int seat_count) { _seat_count = seat_count; }

    int engineHorsepower() const { return _engine_horsepower; }
    void setEngineHorsepower(int engine_horsepower) { _engine_horsepower = engine_horsepower; }
};

#endif // ELECTRICVEHICLE_HPP
