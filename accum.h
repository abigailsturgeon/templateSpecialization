//
// Created by Owner on 11/21/2017.
//

#ifndef MEMORY_ACCUM_H
#define MEMORY_ACCUM_H

#include "Person.h"

template <class T>
class accum
{
private:
    T total;        // T could be an integer, floating point, etc.
public:
    accum(T start):total(start){};
    T operator += (const T& t)
    {
        return total = total + t;
    }
    T getTotal()
    {
        return total;
    }
};
// Template Specialization
template<>
class accum <Person>
{
private:
    int total;
public:
    accum(int start): total(start){};

    int operator += (Person & t)
    {
        return total = total + t.getArNum();
    }
    int getTotal() {return total;}

};

#endif //MEMORY_ACCUM_H
