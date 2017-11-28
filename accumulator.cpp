// File: accumulator
// Created by Abigail Sturgeon on 11/21/2017 for CS1410.
// Copyright (c) 2017 WSU

#include <iostream>
#include "accum.h"
#include"Person.h"
using namespace std;

int main()
{
    accum<int> integers(0);
    integers += 3;
    integers += 7;
    cout << integers.getTotal() << endl;
    accum<string> mystring("");
    mystring += "hello";
    mystring += " world";
    cout << mystring.getTotal() << endl;

    // Template Specialization

    // Not needed if you have Template Specialization:
    //Person start("", "", 0);
    //Accum<Person> people(start);

    accum<Person> people(0);
    Person p1("Waldo", "Weber", 123);
    Person p2("Ogden", "Rocks", 456);

    people += p1;
    people += p2;

    cout << people.getTotal() << endl;
    return 0;

}