#ifndef EMPTYCONTAINER_HPP
#define EMPTYCONTAINER_HPP

#include <cstring>
#include <stdexcept>

class EmptyContainer : public std::exception
{
private:
    char* _msg;
    //allocate memory
    //delete pointer in dstr
    //write own specaial cstrs
public:
    EmptyContainer(const char* m) {
        _msg = new char[strlen(m)];
        strcpy(_msg, m);
    }
    EmptyContainer() = delete;

    EmptyContainer(const EmptyContainer& d) {
        _msg = new char[strlen(d._msg)];
        strcpy(_msg, d._msg);
    }
    EmptyContainer(EmptyContainer&& d) {
        _msg = new char[strlen(d._msg)];
        strcpy(_msg, d._msg);
    }
    EmptyContainer& operator= (const EmptyContainer& d) {
        _msg = new char[strlen(d._msg)];
        strcpy(_msg, d._msg);
        return *this;
    }
    EmptyContainer& operator= (EmptyContainer&& d) {
        _msg = new char[strlen(d._msg)];
        strcpy(_msg, d._msg);
        return *this;
    }
    ~EmptyContainer() {
        delete _msg;
    }

    const char* what () {
        return _msg;
    }
};

#endif // EMPTYCONTAINER_HPP
