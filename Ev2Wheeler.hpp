#ifndef EV2WHEELER_HPP
#define EV2WHEELER_HPP

#include "ConnectedTechType.hpp"
#include "ElectricVehicle.hpp"
#include <ostream>

class Ev2Wheeler : public ElectricVehicle
{
private:
    float _battery_capacity;
    ConnectedTechType _connected_tech_type;

public:
    Ev2Wheeler() = delete;
    Ev2Wheeler(const Ev2Wheeler&) = delete;
    Ev2Wheeler(Ev2Wheeler&&) = delete;
    Ev2Wheeler& operator= (const Ev2Wheeler&) = delete;
    Ev2Wheeler& operator= (Ev2Wheeler&&) = delete;
    ~Ev2Wheeler() = default;
    Ev2Wheeler(Type type, float price, int seat_count, int engine_horsepower, float _battery_capacity, ConnectedTechType connected_tech_type);

    virtual float CalculateGst() override;
    virtual float CalculateExchangeAmount() override;

    friend std::ostream &operator<<(std::ostream &os, const Ev2Wheeler &rhs);
};

#endif // EV2WHEELER_HPP
