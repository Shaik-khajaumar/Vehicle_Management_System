#include "Functionalities.hpp"

void CreateObjects(Container &data)
{
    data.emplace_back(std::make_shared<EvCar>(Type::REGULAR, 120000.0f, 4, 1200, 25, ChargingType::AC_DC_FAST_CHARGE_BOTH));
    data.emplace_back(std::make_shared<EvCar>(Type::TRANSPORT, 220000.0f, 5, 2200, 53, ChargingType::DC_FAST_CHARGE));
    data.emplace_back(std::make_shared<Ev2Wheeler>(Type::REGULAR, 320000.0f, 4,3200, 65, ConnectedTechType::DIGITAL));

}

void Display(Container &data, std::future<int> &ft)
{   
    int id = ft.get();
    for(EVPointer& ptr : data) {
        if(ptr->id() == id) {
            std::cout<<*(ptr);
        }
    }
}

void DisplayAvg(Container &data)
{   
    float avg = 0.0f;
    for(EVPointer& ptr : data) {
        if(ptr->engineHorsepower() > 600) {
            avg += ptr->price();
        }
    }
    std::cout<<"Average price:"<<avg<<std::endl;
}

Container PriceAboveThreshold(Container &data, float price)
{
    Container result;
    for(EVPointer& ptr : data) {
        if(ptr->price() > price) {
            result.emplace_back(ptr);
        }
    }

    return Container();
}

void GST(Container &data)
{
        for(EVPointer& ptr : data) {
            if(std::dynamic_pointer_cast<EvCar>(ptr) != nullptr)
        std::cout<<"GST:"<<std::dynamic_pointer_cast<EvCar>(ptr)->CalculateGst();
        else {
        std::cout<<"GST:"<<std::dynamic_pointer_cast<Ev2Wheeler>(ptr)->CalculateGst();
        }
        std::cout<<"\n";
    }

}

void ExAm(Container &data)
{
        for(EVPointer& ptr : data) {
            if(std::dynamic_pointer_cast<EvCar>(ptr) != nullptr)
        std::cout<<"Ecam:"<<std::dynamic_pointer_cast<EvCar>(ptr)->CalculateExchangeAmount();
        else {
        std::cout<<"exam:"<<std::dynamic_pointer_cast<Ev2Wheeler>(ptr)->CalculateExchangeAmount();
        }
        std::cout<<"\n";
    }
}
