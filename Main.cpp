#include "Functionalities.hpp"

int main () {
    Container data;
    CreateObjects(data);

    try {
        std::promise<int> pr;
        std::future<int> ft = pr.get_future();
        std::future<void> result = std::async(std::launch::async, Display, std::ref(data), std::ref(ft));
        std::cout<<"Enter id: ";
        int var;
        std::cin>>var;
        pr.set_value(var);
    }
    catch(EmptyContainer obj) {
        std::cout<<obj.what();
    }

    std::cout<<"\n\n";

    try {
        std::future<void> r2 = std::async(std::launch::async, DisplayAvg, std::ref(data));
    }
    catch(EmptyContainer obj) {
        std::cout<<obj.what();
    }

    std::cout<<"\n";

    try {
        float price = 90000.0f;
        std::future<Container> r2 = std::async(std::launch::async, PriceAboveThreshold, std::ref(data), price);
        // Container res = r2.get();
    }
    catch(EmptyContainer obj) {
        std::cout<<obj.what();
    }

    std::cout<<"\n\n";

    try {
        std::future<void> r3 = std::async(std::launch::async, GST, std::ref(data));
    }
    catch(EmptyContainer obj) {
        std::cout<<obj.what();
    }

    std::cout<<"\n\n";

    try {
        std::future<void> r4 = std::async(std::launch::async, ExAm, std::ref(data));
    }
    catch(EmptyContainer obj) {
        std::cout<<obj.what();
    }

}